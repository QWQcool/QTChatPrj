#include "findsuccessdlg.h"
#include "ui_findsuccessdlg.h"
#include <QDir>
#include "applyfrienddlg.h"

FindSuccessDlg::FindSuccessDlg(QWidget *parent)
    : QDialog(parent),_parent(parent)
    , ui(new Ui::FindSuccessDlg)
{
    ui->setupUi(this);
    setWindowTitle("添加");
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);

    // 获取当前应用程序的路径
    QString app_path = QCoreApplication::applicationDirPath();
    QString pix_path = QDir::toNativeSeparators(app_path +
                                                QDir::separator() + "static"+QDir::separator()+"head_1.png");
    QPixmap head_pix(pix_path);
    head_pix = head_pix.scaled(ui->head_lb->size(),
                               Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->head_lb->setPixmap(head_pix);
    ui->add_friend_btn->SetState("normal","hover","press");
    this->setModal(true);
}

FindSuccessDlg::~FindSuccessDlg()
{
    qDebug()<<"FindSuccessDlg destruct";
    delete ui;
}

void FindSuccessDlg::SetSearchInfo(std::shared_ptr<SearchInfo> si)
{
    ui->name_lb->setText(si->_name);
    _si = si;
}

void FindSuccessDlg::on_add_friend_btn_clicked()
{
    //todo... 添加好友界面弹出
    this->hide();
    auto applyFriendDlg = new ApplyFriendDlg(_parent);
    applyFriendDlg->SetSearchInfo(_si);
    applyFriendDlg->setModal(true);
    applyFriendDlg->show();
}

