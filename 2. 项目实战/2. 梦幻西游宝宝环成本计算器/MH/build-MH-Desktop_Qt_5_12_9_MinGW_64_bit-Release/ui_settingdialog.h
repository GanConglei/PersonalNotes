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
    QDialogButtonBox *buttonBoxOk;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditWeapon_60;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditEquipment_60;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditWeapon_70;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditEquipment_70;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditWeapon_80;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditEquipment_80;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditFirFruniture;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditSecFruniture;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEditDrug;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEditCooking;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEditWoodblock;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEditHarp;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEditPipa;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEditSuona;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *lineEditFlute;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *lineEditChime;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLineEdit *lineEditRose;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QLineEdit *lineEditLily;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_21;
    QLineEdit *lineEditCarnation;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *lineEditPeony;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(300, 420);
        SettingDialog->setMinimumSize(QSize(300, 420));
        SettingDialog->setMaximumSize(QSize(300, 420));
        buttonBoxOk = new QDialogButtonBox(SettingDialog);
        buttonBoxOk->setObjectName(QString::fromUtf8("buttonBoxOk"));
        buttonBoxOk->setGeometry(QRect(100, 370, 91, 31));
        buttonBoxOk->setOrientation(Qt::Horizontal);
        buttonBoxOk->setStandardButtons(QDialogButtonBox::Ok);
        layoutWidget = new QWidget(SettingDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 11, 261, 351));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditWeapon_60 = new QLineEdit(layoutWidget);
        lineEditWeapon_60->setObjectName(QString::fromUtf8("lineEditWeapon_60"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditWeapon_60->sizePolicy().hasHeightForWidth());
        lineEditWeapon_60->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEditWeapon_60);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditEquipment_60 = new QLineEdit(layoutWidget);
        lineEditEquipment_60->setObjectName(QString::fromUtf8("lineEditEquipment_60"));
        sizePolicy.setHeightForWidth(lineEditEquipment_60->sizePolicy().hasHeightForWidth());
        lineEditEquipment_60->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEditEquipment_60);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditWeapon_70 = new QLineEdit(layoutWidget);
        lineEditWeapon_70->setObjectName(QString::fromUtf8("lineEditWeapon_70"));
        sizePolicy.setHeightForWidth(lineEditWeapon_70->sizePolicy().hasHeightForWidth());
        lineEditWeapon_70->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEditWeapon_70);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditEquipment_70 = new QLineEdit(layoutWidget);
        lineEditEquipment_70->setObjectName(QString::fromUtf8("lineEditEquipment_70"));
        sizePolicy.setHeightForWidth(lineEditEquipment_70->sizePolicy().hasHeightForWidth());
        lineEditEquipment_70->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEditEquipment_70);


        gridLayout->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditWeapon_80 = new QLineEdit(layoutWidget);
        lineEditWeapon_80->setObjectName(QString::fromUtf8("lineEditWeapon_80"));
        sizePolicy.setHeightForWidth(lineEditWeapon_80->sizePolicy().hasHeightForWidth());
        lineEditWeapon_80->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEditWeapon_80);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditEquipment_80 = new QLineEdit(layoutWidget);
        lineEditEquipment_80->setObjectName(QString::fromUtf8("lineEditEquipment_80"));
        sizePolicy.setHeightForWidth(lineEditEquipment_80->sizePolicy().hasHeightForWidth());
        lineEditEquipment_80->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lineEditEquipment_80);


        gridLayout->addLayout(horizontalLayout_6, 2, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEditFirFruniture = new QLineEdit(layoutWidget);
        lineEditFirFruniture->setObjectName(QString::fromUtf8("lineEditFirFruniture"));
        sizePolicy.setHeightForWidth(lineEditFirFruniture->sizePolicy().hasHeightForWidth());
        lineEditFirFruniture->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lineEditFirFruniture);


        gridLayout->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditSecFruniture = new QLineEdit(layoutWidget);
        lineEditSecFruniture->setObjectName(QString::fromUtf8("lineEditSecFruniture"));
        sizePolicy.setHeightForWidth(lineEditSecFruniture->sizePolicy().hasHeightForWidth());
        lineEditSecFruniture->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lineEditSecFruniture);


        gridLayout->addLayout(horizontalLayout_8, 3, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEditDrug = new QLineEdit(layoutWidget);
        lineEditDrug->setObjectName(QString::fromUtf8("lineEditDrug"));
        sizePolicy.setHeightForWidth(lineEditDrug->sizePolicy().hasHeightForWidth());
        lineEditDrug->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lineEditDrug);


        gridLayout->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEditCooking = new QLineEdit(layoutWidget);
        lineEditCooking->setObjectName(QString::fromUtf8("lineEditCooking"));
        sizePolicy.setHeightForWidth(lineEditCooking->sizePolicy().hasHeightForWidth());
        lineEditCooking->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lineEditCooking);


        gridLayout->addLayout(horizontalLayout_10, 4, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEditWoodblock = new QLineEdit(layoutWidget);
        lineEditWoodblock->setObjectName(QString::fromUtf8("lineEditWoodblock"));
        sizePolicy.setHeightForWidth(lineEditWoodblock->sizePolicy().hasHeightForWidth());
        lineEditWoodblock->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(lineEditWoodblock);


        gridLayout->addLayout(horizontalLayout_12, 5, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 5, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEditHarp = new QLineEdit(layoutWidget);
        lineEditHarp->setObjectName(QString::fromUtf8("lineEditHarp"));
        sizePolicy.setHeightForWidth(lineEditHarp->sizePolicy().hasHeightForWidth());
        lineEditHarp->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(lineEditHarp);


        gridLayout->addLayout(horizontalLayout_13, 5, 2, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        lineEditPipa = new QLineEdit(layoutWidget);
        lineEditPipa->setObjectName(QString::fromUtf8("lineEditPipa"));
        sizePolicy.setHeightForWidth(lineEditPipa->sizePolicy().hasHeightForWidth());
        lineEditPipa->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(lineEditPipa);


        gridLayout->addLayout(horizontalLayout_14, 6, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 6, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        lineEditSuona = new QLineEdit(layoutWidget);
        lineEditSuona->setObjectName(QString::fromUtf8("lineEditSuona"));
        sizePolicy.setHeightForWidth(lineEditSuona->sizePolicy().hasHeightForWidth());
        lineEditSuona->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(lineEditSuona);


        gridLayout->addLayout(horizontalLayout_15, 6, 2, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        lineEditFlute = new QLineEdit(layoutWidget);
        lineEditFlute->setObjectName(QString::fromUtf8("lineEditFlute"));
        sizePolicy.setHeightForWidth(lineEditFlute->sizePolicy().hasHeightForWidth());
        lineEditFlute->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(lineEditFlute);


        gridLayout->addLayout(horizontalLayout_17, 7, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 7, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18);

        lineEditChime = new QLineEdit(layoutWidget);
        lineEditChime->setObjectName(QString::fromUtf8("lineEditChime"));
        sizePolicy.setHeightForWidth(lineEditChime->sizePolicy().hasHeightForWidth());
        lineEditChime->setSizePolicy(sizePolicy);

        horizontalLayout_18->addWidget(lineEditChime);


        gridLayout->addLayout(horizontalLayout_18, 7, 2, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_19->addWidget(label_19);

        lineEditRose = new QLineEdit(layoutWidget);
        lineEditRose->setObjectName(QString::fromUtf8("lineEditRose"));
        sizePolicy.setHeightForWidth(lineEditRose->sizePolicy().hasHeightForWidth());
        lineEditRose->setSizePolicy(sizePolicy);

        horizontalLayout_19->addWidget(lineEditRose);


        gridLayout->addLayout(horizontalLayout_19, 8, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 8, 1, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_20->addWidget(label_20);

        lineEditLily = new QLineEdit(layoutWidget);
        lineEditLily->setObjectName(QString::fromUtf8("lineEditLily"));
        sizePolicy.setHeightForWidth(lineEditLily->sizePolicy().hasHeightForWidth());
        lineEditLily->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(lineEditLily);


        gridLayout->addLayout(horizontalLayout_20, 8, 2, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_21->addWidget(label_21);

        lineEditCarnation = new QLineEdit(layoutWidget);
        lineEditCarnation->setObjectName(QString::fromUtf8("lineEditCarnation"));
        sizePolicy.setHeightForWidth(lineEditCarnation->sizePolicy().hasHeightForWidth());
        lineEditCarnation->setSizePolicy(sizePolicy);

        horizontalLayout_21->addWidget(lineEditCarnation);


        gridLayout->addLayout(horizontalLayout_21, 9, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 9, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);

        horizontalLayout_22->addWidget(label_22);

        lineEditPeony = new QLineEdit(layoutWidget);
        lineEditPeony->setObjectName(QString::fromUtf8("lineEditPeony"));
        sizePolicy.setHeightForWidth(lineEditPeony->sizePolicy().hasHeightForWidth());
        lineEditPeony->setSizePolicy(sizePolicy);

        horizontalLayout_22->addWidget(lineEditPeony);


        gridLayout->addLayout(horizontalLayout_22, 9, 2, 1, 1);


        retranslateUi(SettingDialog);
        QObject::connect(buttonBoxOk, SIGNAL(accepted()), SettingDialog, SLOT(accept()));
        QObject::connect(buttonBoxOk, SIGNAL(rejected()), SettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "\344\273\267\346\240\274\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("SettingDialog", "60\346\255\246\345\231\250", nullptr));
        lineEditWeapon_60->setText(QApplication::translate("SettingDialog", "200000", nullptr));
        label_2->setText(QApplication::translate("SettingDialog", "60\350\243\205\345\244\207", nullptr));
        lineEditEquipment_60->setText(QApplication::translate("SettingDialog", "195000", nullptr));
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
