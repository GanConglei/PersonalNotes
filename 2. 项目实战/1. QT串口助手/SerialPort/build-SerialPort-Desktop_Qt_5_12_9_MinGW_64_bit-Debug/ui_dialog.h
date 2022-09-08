/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cBoxSerialPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cBoxBaudRate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cBoxParity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cBoxDataBits;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *cBoxStopBits;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnOpen;
    QSpacerItem *verticalSpacer;
    QPushButton *btnSend;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *tEditRecv;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *tEditSend;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(470, 450);
        Dialog->setMinimumSize(QSize(470, 450));
        Dialog->setMaximumSize(QSize(470, 450));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 435, 417));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cBoxSerialPort = new QComboBox(layoutWidget);
        cBoxSerialPort->setObjectName(QString::fromUtf8("cBoxSerialPort"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cBoxSerialPort->sizePolicy().hasHeightForWidth());
        cBoxSerialPort->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cBoxSerialPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cBoxBaudRate = new QComboBox(layoutWidget);
        cBoxBaudRate->addItem(QString());
        cBoxBaudRate->addItem(QString());
        cBoxBaudRate->setObjectName(QString::fromUtf8("cBoxBaudRate"));
        sizePolicy.setHeightForWidth(cBoxBaudRate->sizePolicy().hasHeightForWidth());
        cBoxBaudRate->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cBoxBaudRate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cBoxParity = new QComboBox(layoutWidget);
        cBoxParity->addItem(QString());
        cBoxParity->setObjectName(QString::fromUtf8("cBoxParity"));
        sizePolicy.setHeightForWidth(cBoxParity->sizePolicy().hasHeightForWidth());
        cBoxParity->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(cBoxParity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cBoxDataBits = new QComboBox(layoutWidget);
        cBoxDataBits->addItem(QString());
        cBoxDataBits->setObjectName(QString::fromUtf8("cBoxDataBits"));
        sizePolicy.setHeightForWidth(cBoxDataBits->sizePolicy().hasHeightForWidth());
        cBoxDataBits->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(cBoxDataBits);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        cBoxStopBits = new QComboBox(layoutWidget);
        cBoxStopBits->addItem(QString());
        cBoxStopBits->setObjectName(QString::fromUtf8("cBoxStopBits"));
        sizePolicy.setHeightForWidth(cBoxStopBits->sizePolicy().hasHeightForWidth());
        cBoxStopBits->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(cBoxStopBits);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnOpen = new QPushButton(layoutWidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        verticalLayout_2->addWidget(btnOpen);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        verticalLayout_2->addWidget(btnSend);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tEditRecv = new QTextEdit(layoutWidget);
        tEditRecv->setObjectName(QString::fromUtf8("tEditRecv"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(6);
        sizePolicy1.setHeightForWidth(tEditRecv->sizePolicy().hasHeightForWidth());
        tEditRecv->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(tEditRecv);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tEditSend = new QTextEdit(layoutWidget);
        tEditSend->setObjectName(QString::fromUtf8("tEditSend"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(tEditSend->sizePolicy().hasHeightForWidth());
        tEditSend->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(tEditSend);


        horizontalLayout_6->addLayout(verticalLayout_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        label->setText(QApplication::translate("Dialog", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207", nullptr));
        cBoxBaudRate->setItemText(0, QApplication::translate("Dialog", "9600", nullptr));
        cBoxBaudRate->setItemText(1, QApplication::translate("Dialog", "115200", nullptr));

        label_3->setText(QApplication::translate("Dialog", "\346\240\241\351\252\214\344\275\215", nullptr));
        cBoxParity->setItemText(0, QApplication::translate("Dialog", "NONE", nullptr));

        label_4->setText(QApplication::translate("Dialog", "\346\225\260\346\215\256\344\275\215", nullptr));
        cBoxDataBits->setItemText(0, QApplication::translate("Dialog", "8", nullptr));

        label_5->setText(QApplication::translate("Dialog", "\345\201\234\346\255\242\344\275\215", nullptr));
        cBoxStopBits->setItemText(0, QApplication::translate("Dialog", "1", nullptr));

        btnOpen->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200", nullptr));
        btnSend->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
