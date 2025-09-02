/********************************************************************************
** Form generated from reading UI file 'applyfrienddlg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYFRIENDDLG_H
#define UI_APPLYFRIENDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>
#include <clickedoncelabel.h>
#include <customizeedit.h>

QT_BEGIN_NAMESPACE

class Ui_ApplyFriendDlg
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollcontent;
    QVBoxLayout *verticalLayout_2;
    QLabel *apply_lb;
    QWidget *apply_wid;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label;
    CustomizeEdit *name_ed;
    QLabel *label_2;
    CustomizeEdit *back_ed;
    QLabel *label_3;
    QWidget *lb_group_wid;
    QVBoxLayout *verticalLayout_4;
    QWidget *gridWidget;
    CustomizeEdit *lb_ed;
    QWidget *input_tip_wid;
    QVBoxLayout *verticalLayout_5;
    ClickedOnceLabel *tip_lb;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *lb_list;
    QWidget *more_lb_wid;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    ClickedOnceLabel *more_lb;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *apply_sure_wid;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *sure_btn;
    QSpacerItem *horizontalSpacer_2;
    ClickedBtn *cancel_btn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ApplyFriendDlg)
    {
        if (ApplyFriendDlg->objectName().isEmpty())
            ApplyFriendDlg->setObjectName("ApplyFriendDlg");
        ApplyFriendDlg->resize(348, 455);
        ApplyFriendDlg->setMinimumSize(QSize(300, 450));
        ApplyFriendDlg->setMaximumSize(QSize(500, 800));
        verticalLayout = new QVBoxLayout(ApplyFriendDlg);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ApplyFriendDlg);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(0, 350));
        scrollArea->setWidgetResizable(true);
        scrollcontent = new QWidget();
        scrollcontent->setObjectName("scrollcontent");
        scrollcontent->setGeometry(QRect(0, 0, 346, 348));
        scrollcontent->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(scrollcontent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(3, 10, 3, -1);
        apply_lb = new QLabel(scrollcontent);
        apply_lb->setObjectName("apply_lb");
        apply_lb->setMinimumSize(QSize(0, 25));
        apply_lb->setMaximumSize(QSize(16777215, 25));
        apply_lb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(apply_lb);

        apply_wid = new QWidget(scrollcontent);
        apply_wid->setObjectName("apply_wid");
        verticalLayout_3 = new QVBoxLayout(apply_wid);
        verticalLayout_3->setObjectName("verticalLayout_3");
        line = new QFrame(apply_wid);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label = new QLabel(apply_wid);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));
        label->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label);

        name_ed = new CustomizeEdit(apply_wid);
        name_ed->setObjectName("name_ed");
        name_ed->setMinimumSize(QSize(0, 30));
        name_ed->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(name_ed);

        label_2 = new QLabel(apply_wid);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_2);

        back_ed = new CustomizeEdit(apply_wid);
        back_ed->setObjectName("back_ed");
        back_ed->setMinimumSize(QSize(0, 30));
        back_ed->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(back_ed);

        label_3 = new QLabel(apply_wid);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label_3);

        lb_group_wid = new QWidget(apply_wid);
        lb_group_wid->setObjectName("lb_group_wid");
        lb_group_wid->setMinimumSize(QSize(0, 0));
        lb_group_wid->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(lb_group_wid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridWidget = new QWidget(lb_group_wid);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setMinimumSize(QSize(0, 40));
        gridWidget->setMaximumSize(QSize(16777215, 40));
        lb_ed = new CustomizeEdit(gridWidget);
        lb_ed->setObjectName("lb_ed");
        lb_ed->setGeometry(QRect(2, 2, 108, 30));

        verticalLayout_4->addWidget(gridWidget);

        input_tip_wid = new QWidget(lb_group_wid);
        input_tip_wid->setObjectName("input_tip_wid");
        input_tip_wid->setMinimumSize(QSize(270, 0));
        verticalLayout_5 = new QVBoxLayout(input_tip_wid);
        verticalLayout_5->setObjectName("verticalLayout_5");
        tip_lb = new ClickedOnceLabel(input_tip_wid);
        tip_lb->setObjectName("tip_lb");
        tip_lb->setMinimumSize(QSize(250, 20));
        tip_lb->setMaximumSize(QSize(250, 20));

        verticalLayout_5->addWidget(tip_lb);


        verticalLayout_4->addWidget(input_tip_wid);


        verticalLayout_3->addWidget(lb_group_wid);

        widget_3 = new QWidget(apply_wid);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 60));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_list = new QWidget(widget_3);
        lb_list->setObjectName("lb_list");
        lb_list->setMinimumSize(QSize(250, 50));
        lb_list->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_2->addWidget(lb_list);

        more_lb_wid = new QWidget(widget_3);
        more_lb_wid->setObjectName("more_lb_wid");
        verticalLayout_6 = new QVBoxLayout(more_lb_wid);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        more_lb = new ClickedOnceLabel(more_lb_wid);
        more_lb->setObjectName("more_lb");
        more_lb->setMinimumSize(QSize(20, 25));
        more_lb->setMaximumSize(QSize(20, 25));

        verticalLayout_6->addWidget(more_lb);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_2->addWidget(more_lb_wid);


        verticalLayout_3->addWidget(widget_3);


        verticalLayout_2->addWidget(apply_wid);

        scrollArea->setWidget(scrollcontent);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        apply_sure_wid = new QWidget(ApplyFriendDlg);
        apply_sure_wid->setObjectName("apply_sure_wid");
        apply_sure_wid->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(apply_sure_wid);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sure_btn = new ClickedBtn(apply_sure_wid);
        sure_btn->setObjectName("sure_btn");
        sure_btn->setMinimumSize(QSize(100, 30));
        sure_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(sure_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancel_btn = new ClickedBtn(apply_sure_wid);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(100, 30));
        cancel_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(cancel_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(apply_sure_wid);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(ApplyFriendDlg);

        QMetaObject::connectSlotsByName(ApplyFriendDlg);
    } // setupUi

    void retranslateUi(QDialog *ApplyFriendDlg)
    {
        ApplyFriendDlg->setWindowTitle(QCoreApplication::translate("ApplyFriendDlg", "Dialog", nullptr));
        apply_lb->setText(QCoreApplication::translate("ApplyFriendDlg", "\347\224\263\350\257\267\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label->setText(QCoreApplication::translate("ApplyFriendDlg", "\345\217\221\351\200\201\346\267\273\345\212\240\345\245\275\345\217\213\347\224\263\350\257\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ApplyFriendDlg", "\345\244\207\346\263\250\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ApplyFriendDlg", "\346\240\207\347\255\276\357\274\232", nullptr));
        tip_lb->setText(QCoreApplication::translate("ApplyFriendDlg", "TextLabel", nullptr));
        more_lb->setText(QString());
        sure_btn->setText(QCoreApplication::translate("ApplyFriendDlg", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("ApplyFriendDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplyFriendDlg: public Ui_ApplyFriendDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYFRIENDDLG_H
