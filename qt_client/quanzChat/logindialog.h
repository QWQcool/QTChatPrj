#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "global.h"
#include "httpmgr.h"
#include<QPainter>
#include<QPainterPath>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    void initHead();
    void initHttpHandlers();
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;
    int _uid;
    QString _token;

    Ui::LoginDialog *ui;
    bool enableBtn(bool enabled);
    bool checkEmailValid();
    bool checkPwdValid();

    QMap<TipErr, QString> _tip_errs;
    void showTip(QString str, bool b_ok);
    void AddTipErr(TipErr te,QString tips);
    void DelTipErr(TipErr te);


public slots:
    void slot_forget_pwd();
    void slot_login_failed(int err);
    void slot_tcp_con_finish(bool bsuccess);
signals:
    void switchRegister();
    void switchReset();
    void sig_connect_tcp(ServerInfo);


private slots:
    void on_Login_btn_clicked();
    void slot_login_mod_finish(ReqId id,QString res, ErrorCodes err);
};

#endif // LOGINDIALOG_H
