/********************************************************************************
** Form generated from reading UI file 'resetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETDIALOG_H
#define UI_RESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResetDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *varify_label;
    QLineEdit *varify_edit;
    QPushButton *varify_btn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pwd_label_2;
    QLineEdit *pwd_edit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *sure_btn;
    QPushButton *cancel_btn;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ResetDialog)
    {
        if (ResetDialog->objectName().isEmpty())
            ResetDialog->setObjectName("ResetDialog");
        ResetDialog->resize(232, 376);
        ResetDialog->setMinimumSize(QSize(232, 347));
        ResetDialog->setMaximumSize(QSize(400, 536));
        horizontalLayout = new QHBoxLayout(ResetDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        err_tip = new QLabel(ResetDialog);
        err_tip->setObjectName("err_tip");
        err_tip->setMinimumSize(QSize(0, 30));
        err_tip->setMaximumSize(QSize(16777215, 30));
        err_tip->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(err_tip);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        user_label = new QLabel(ResetDialog);
        user_label->setObjectName("user_label");
        user_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(user_label);

        user_edit = new QLineEdit(ResetDialog);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(0, 30));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        email_label = new QLabel(ResetDialog);
        email_label->setObjectName("email_label");
        email_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(email_label);

        email_edit = new QLineEdit(ResetDialog);
        email_edit->setObjectName("email_edit");
        email_edit->setMinimumSize(QSize(0, 30));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        varify_label = new QLabel(ResetDialog);
        varify_label->setObjectName("varify_label");
        varify_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(varify_label);

        varify_edit = new QLineEdit(ResetDialog);
        varify_edit->setObjectName("varify_edit");
        varify_edit->setMinimumSize(QSize(0, 30));
        varify_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(varify_edit);

        varify_btn = new QPushButton(ResetDialog);
        varify_btn->setObjectName("varify_btn");
        varify_btn->setMinimumSize(QSize(0, 30));
        varify_btn->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(varify_btn);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pwd_label_2 = new QLabel(ResetDialog);
        pwd_label_2->setObjectName("pwd_label_2");
        pwd_label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(pwd_label_2);

        pwd_edit = new QLineEdit(ResetDialog);
        pwd_edit->setObjectName("pwd_edit");
        pwd_edit->setMinimumSize(QSize(0, 30));
        pwd_edit->setMaximumSize(QSize(500, 30));

        horizontalLayout_3->addWidget(pwd_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sure_btn = new QPushButton(ResetDialog);
        sure_btn->setObjectName("sure_btn");
        sure_btn->setMinimumSize(QSize(0, 30));
        sure_btn->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_7->addWidget(sure_btn);

        cancel_btn = new QPushButton(ResetDialog);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(cancel_btn);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ResetDialog);

        QMetaObject::connectSlotsByName(ResetDialog);
    } // setupUi

    void retranslateUi(QDialog *ResetDialog)
    {
        ResetDialog->setWindowTitle(QCoreApplication::translate("ResetDialog", "Dialog", nullptr));
        err_tip->setText(QCoreApplication::translate("ResetDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QCoreApplication::translate("ResetDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("ResetDialog", "   \351\202\256\347\256\261\357\274\232 ", nullptr));
        varify_label->setText(QCoreApplication::translate("ResetDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        varify_btn->setText(QCoreApplication::translate("ResetDialog", "\350\216\267\345\217\226", nullptr));
        pwd_label_2->setText(QCoreApplication::translate("ResetDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        sure_btn->setText(QCoreApplication::translate("ResetDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("ResetDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetDialog: public Ui_ResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETDIALOG_H
