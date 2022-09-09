/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *lineEdit_17;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *lineEdit_18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLineEdit *lineEdit_19;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QLineEdit *lineEdit_20;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_21;
    QLineEdit *lineEdit_21;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *lineEdit_22;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(280, 430);
        SettingDialog->setMinimumSize(QSize(280, 430));
        SettingDialog->setMaximumSize(QSize(280, 430));
        buttonBox = new QDialogButtonBox(SettingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 390, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(SettingDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(22, 11, 241, 361));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEdit_5);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lineEdit_6);


        gridLayout->addLayout(horizontalLayout_6, 2, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lineEdit_7);


        gridLayout->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lineEdit_8);


        gridLayout->addLayout(horizontalLayout_8, 3, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(widget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lineEdit_9);


        gridLayout->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(widget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        sizePolicy.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lineEdit_10);


        gridLayout->addLayout(horizontalLayout_10, 4, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(widget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        sizePolicy.setHeightForWidth(lineEdit_12->sizePolicy().hasHeightForWidth());
        lineEdit_12->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(lineEdit_12);


        gridLayout->addLayout(horizontalLayout_12, 5, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 5, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit_13 = new QLineEdit(widget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        sizePolicy.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(lineEdit_13);


        gridLayout->addLayout(horizontalLayout_13, 5, 2, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        lineEdit_14 = new QLineEdit(widget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        sizePolicy.setHeightForWidth(lineEdit_14->sizePolicy().hasHeightForWidth());
        lineEdit_14->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(lineEdit_14);


        gridLayout->addLayout(horizontalLayout_14, 6, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 6, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        lineEdit_15 = new QLineEdit(widget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        sizePolicy.setHeightForWidth(lineEdit_15->sizePolicy().hasHeightForWidth());
        lineEdit_15->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(lineEdit_15);


        gridLayout->addLayout(horizontalLayout_15, 6, 2, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        lineEdit_17 = new QLineEdit(widget);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        sizePolicy.setHeightForWidth(lineEdit_17->sizePolicy().hasHeightForWidth());
        lineEdit_17->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(lineEdit_17);


        gridLayout->addLayout(horizontalLayout_17, 7, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 7, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18);

        lineEdit_18 = new QLineEdit(widget);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        sizePolicy.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy);

        horizontalLayout_18->addWidget(lineEdit_18);


        gridLayout->addLayout(horizontalLayout_18, 7, 2, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_19->addWidget(label_19);

        lineEdit_19 = new QLineEdit(widget);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        sizePolicy.setHeightForWidth(lineEdit_19->sizePolicy().hasHeightForWidth());
        lineEdit_19->setSizePolicy(sizePolicy);

        horizontalLayout_19->addWidget(lineEdit_19);


        gridLayout->addLayout(horizontalLayout_19, 8, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 8, 1, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_20->addWidget(label_20);

        lineEdit_20 = new QLineEdit(widget);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        sizePolicy.setHeightForWidth(lineEdit_20->sizePolicy().hasHeightForWidth());
        lineEdit_20->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(lineEdit_20);


        gridLayout->addLayout(horizontalLayout_20, 8, 2, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_21->addWidget(label_21);

        lineEdit_21 = new QLineEdit(widget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        sizePolicy.setHeightForWidth(lineEdit_21->sizePolicy().hasHeightForWidth());
        lineEdit_21->setSizePolicy(sizePolicy);

        horizontalLayout_21->addWidget(lineEdit_21);


        gridLayout->addLayout(horizontalLayout_21, 9, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 9, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);

        horizontalLayout_22->addWidget(label_22);

        lineEdit_22 = new QLineEdit(widget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        sizePolicy.setHeightForWidth(lineEdit_22->sizePolicy().hasHeightForWidth());
        lineEdit_22->setSizePolicy(sizePolicy);

        horizontalLayout_22->addWidget(lineEdit_22);


        gridLayout->addLayout(horizontalLayout_22, 9, 2, 1, 1);


        retranslateUi(SettingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "\344\273\267\346\240\274\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("SettingDialog", "60\346\255\246\345\231\250", nullptr));
        label_2->setText(QApplication::translate("SettingDialog", "60\350\243\205\345\244\207", nullptr));
        label_3->setText(QApplication::translate("SettingDialog", "70\346\255\246\345\231\250", nullptr));
        label_4->setText(QApplication::translate("SettingDialog", "70\350\243\205\345\244\207", nullptr));
        label_5->setText(QApplication::translate("SettingDialog", "80\346\255\246\345\231\250", nullptr));
        label_6->setText(QApplication::translate("SettingDialog", "80\350\243\205\345\244\207", nullptr));
        label_7->setText(QApplication::translate("SettingDialog", "\344\270\200  \345\256\266", nullptr));
        label_8->setText(QApplication::translate("SettingDialog", "\344\272\214  \345\256\266", nullptr));
        label_9->setText(QApplication::translate("SettingDialog", "\344\270\211  \350\215\257", nullptr));
        label_10->setText(QApplication::translate("SettingDialog", "\347\203\271  \351\245\252", nullptr));
        label_12->setText(QApplication::translate("SettingDialog", "\346\234\250  \351\261\274", nullptr));
        label_13->setText(QApplication::translate("SettingDialog", "\347\253\226  \347\220\264", nullptr));
        label_14->setText(QApplication::translate("SettingDialog", "\347\220\265  \347\220\266", nullptr));
        label_15->setText(QApplication::translate("SettingDialog", "\345\224\242  \345\221\220", nullptr));
        label_17->setText(QApplication::translate("SettingDialog", "\347\254\233  \345\255\220", nullptr));
        label_18->setText(QApplication::translate("SettingDialog", "\347\274\226  \351\222\237", nullptr));
        label_19->setText(QApplication::translate("SettingDialog", "\347\272\242\347\216\253\347\221\260", nullptr));
        label_20->setText(QApplication::translate("SettingDialog", "\347\231\276  \345\220\210", nullptr));
        label_21->setText(QApplication::translate("SettingDialog", "\345\272\267\344\271\203\351\246\250", nullptr));
        label_22->setText(QApplication::translate("SettingDialog", "\347\211\241  \344\270\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
