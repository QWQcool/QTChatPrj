#include "logindialog.h"
#include "ui_logindialog.h"
#include "tcpmgr.h"
#include <QDebug>


LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(ui->reg_btn,&QPushButton::clicked,this,&LoginDialog::switchRegister);
    ui->forget_label->SetState("normal","hover","","selected","selected_hover","");
    connect(ui->forget_label, &ClickedLabel::clicked, this, &LoginDialog::slot_forget_pwd);
    //ui->err_label->clear();
    initHead();
    initHttpHandlers();

    connect(HttpMgr::GetInstance().get(), &HttpMgr::sig_login_mod_finish,this,
             &LoginDialog::slot_login_mod_finish);

    //连接tcp连接请求的信号和槽函数
    connect(this, &LoginDialog::sig_connect_tcp, TcpMgr::GetInstance().get(), &TcpMgr::slot_tcp_connect);
    //连接tcp管理者发出的连接成功信号
    connect(TcpMgr::GetInstance().get(), &TcpMgr::sig_con_success, this, &LoginDialog::slot_tcp_con_finish);
    //连接失败
    connect(TcpMgr::GetInstance().get(), &TcpMgr::sig_login_failed, this, &LoginDialog::slot_login_failed);
}

LoginDialog::~LoginDialog()
{
    qDebug() << "destruct LoginDlg";
    delete ui;
}

void LoginDialog::initHttpHandlers()
{
    //注册获取登录回包逻辑
    _handlers.insert(ReqId::ID_LOGIN_USER, [this](QJsonObject jsonObj){
        int error = jsonObj["error"].toInt();
        if(error != ErrorCodes::SUCCESS){
            qDebug() <<error<<"\n";
            if(error==1006)
                showTip(tr("邮箱或密码错误"),false);
            else
                showTip(tr("网络错误"),false);
            return;
        }
        auto email = jsonObj["email"].toString();
        //发送信号通知tcpMgr发送长连接
        ServerInfo si;
        si.Uid = jsonObj["uid"].toInt();
        si.Host = jsonObj["host"].toString();
        si.Port = jsonObj["port"].toString();
        si.Token = jsonObj["token"].toString();

        _uid = si.Uid;
        _token = si.Token;
        qDebug() << " email is" << email << " uid is " <<si.Uid << " host is "
                 << si.Host << " Port is " << si.Port << " Token is " << si.Token;

        emit sig_connect_tcp(si);


    });
}

void LoginDialog::initHead()
{
    QPixmap originalPixmap(":/res/head_1.png");
    qDebug()<<originalPixmap.size()<<ui->head_label->size();
    originalPixmap = originalPixmap.scaled(ui->head_label->size(),
                    Qt::KeepAspectRatio,Qt::SmoothTransformation);
    QPixmap roundedPixmap(originalPixmap.size());
    roundedPixmap.fill(Qt::transparent);

    QPainter painter(&roundedPixmap);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    QPainterPath path;
    path.addRoundedRect(0,0,originalPixmap.width(),originalPixmap.height(),10,10);
    painter.setClipPath(path);

    painter.drawPixmap(0,0,originalPixmap);

    ui->head_label->setPixmap(roundedPixmap);

}

void LoginDialog::showTip(QString str, bool b_ok)
{
    if(b_ok){
        ui->err_label->setProperty("state","normal");

    }else{
        ui->err_label->setProperty("state","err");
    }

    ui->err_label->setText(str);

    repolish(ui->err_label);
}

bool LoginDialog::checkEmailValid(){
    auto user = ui->email_edit->text();
    if(user.isEmpty()){
        qDebug() << "Email empty " ;
        AddTipErr(TipErr::TIP_EMAIL_ERR,tr("邮箱不能为空"));
        return false;
    }
    DelTipErr(TipErr::TIP_EMAIL_ERR);
    return true;
}

bool LoginDialog::checkPwdValid(){
    auto pwd = ui->passwd_edit->text();
    if(pwd.length() < 6 || pwd.length() > 15){
        qDebug() << "Pass length invalid";
        AddTipErr(TipErr::TIP_PWD_ERR,tr("密码不能为空"));
        return false;
    }
    DelTipErr(TipErr::TIP_PWD_ERR);
    return true;
}


void LoginDialog::AddTipErr(TipErr te, QString tips)
{
    _tip_errs[te] = tips;
    showTip(tips, false);
}

void LoginDialog::DelTipErr(TipErr te)
{
    _tip_errs.remove(te);
    if(_tip_errs.empty()){
        ui->err_label->clear();
        return;
    }
    showTip(_tip_errs.first(), false);
}

void LoginDialog::slot_forget_pwd()
{
    qDebug()<<"slot forget pwd";
    emit switchReset();
}

void LoginDialog::slot_login_failed(int err)
{
    QString result = QString("登陆失败，err is %1").arg(err);

    showTip(result,false);
    enableBtn(true);
}

void LoginDialog::slot_tcp_con_finish(bool bsuccess)
{
    if(bsuccess){
        showTip(tr("聊天服务连接成功，正在登录..."),true);
        QJsonObject jsonObj;
        jsonObj["uid"] = _uid;
        jsonObj["token"] = _token;
        QJsonDocument doc(jsonObj);
        QByteArray jsonString = doc.toJson(QJsonDocument::Indented);
        //发送tcp请求给chat server
        emit TcpMgr::GetInstance()->sig_send_data(ReqId::ID_CHAT_LOGIN, jsonString);

    }else{
        showTip(tr("网络异常"),false);
        enableBtn(true);
    }
}

bool LoginDialog::enableBtn(bool enabled)
{
    ui->Login_btn->setEnabled(enabled);
    ui->reg_btn->setEnabled(enabled);
    return true;
}

void LoginDialog::on_Login_btn_clicked()
{
    qDebug()<<"login btn clicked";
    if(checkEmailValid() == false){
        return;
    }
    if(checkPwdValid() == false){
        return ;
    }
    auto email = ui->email_edit->text();
    auto pwd = ui->passwd_edit->text();
    //发送http请求登录
    QJsonObject json_obj;
    json_obj["email"] = email;
    json_obj["passwd"] = xorString(pwd);
    HttpMgr::GetInstance()->PostHttpReq(QUrl(gate_url_prefix+"/user_login"),
                                        json_obj, ReqId::ID_LOGIN_USER,Modules::LOGINMOD);

}

void LoginDialog::slot_login_mod_finish(ReqId id, QString res, ErrorCodes err)
{
    if(err != ErrorCodes::SUCCESS){
        showTip(tr("网络请求错误"),false);
        return;
    }
    // 解析 JSON 字符串,res需转化为QByteArray
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());

    //json解析错误
    if(jsonDoc.isNull()){
        showTip(tr("json解析错误"),false);
        return;
    }

    //json解析错误
    if(!jsonDoc.isObject()){
        showTip(tr("json解析错误"),false);
        return;
    }

    //调用对应的逻辑,根据id回调。
    _handlers[id](jsonDoc.object());
    return;
}

