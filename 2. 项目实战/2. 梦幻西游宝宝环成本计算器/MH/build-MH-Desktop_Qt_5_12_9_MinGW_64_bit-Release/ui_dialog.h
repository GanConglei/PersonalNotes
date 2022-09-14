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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelGrade;
    QComboBox *comboBoxGrade;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSetting;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonClear;
    QFrame *frame_2;
    QFrame *frame_3;
    QCheckBox *checkBoxManualSetting;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBoxCurStep;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBoxCurGrade;
    QFrame *frame_4;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLCDNumber *lcdNumberRemainStep;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLCDNumber *lcdNumberRemainGrade_150;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLCDNumber *lcdNumberRemainGrade_140;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLCDNumber *lcdNumberRemainGrade_130;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLCDNumber *lcdNumberRemainGrade_120;
    QFrame *frame_5;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_48;
    QPushButton *pushButtonLookForSomeoneMin;
    QLabel *label_9;
    QPushButton *pushButtonLookForSomeoneAdd;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxAmend;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *pushButtonWeaponMin_60;
    QLabel *label_27;
    QPushButton *pushButtonWeaponAdd_60;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_35;
    QPushButton *pushButtonEquipMin_60;
    QLabel *label_28;
    QPushButton *pushButtonEquipAdd_60;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *pushButtonWeaponMin_70;
    QLabel *label_29;
    QPushButton *pushButtonWeaponAdd_70;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pushButtonEquipMin_70;
    QLabel *label_30;
    QPushButton *pushButtonEquipAdd_70;
    QHBoxLayout *horizontalLayout_40;
    QPushButton *pushButtonWeaponMin_80;
    QLabel *label_31;
    QPushButton *pushButtonWeaponAdd_80;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_41;
    QPushButton *pushButtonEquipMin_80;
    QLabel *label_32;
    QPushButton *pushButtonEquipAdd_80;
    QHBoxLayout *horizontalLayout_43;
    QPushButton *pushButtonFirFurnitureMin;
    QLabel *label_33;
    QPushButton *pushButtonFirFurnitureAdd;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_44;
    QPushButton *pushButtonSecFurnitureMin;
    QLabel *label_34;
    QPushButton *pushButtonSecFurnitureAdd;
    QHBoxLayout *horizontalLayout_46;
    QPushButton *pushButtonDrugMin;
    QLabel *label_35;
    QPushButton *pushButtonDrugAdd;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_47;
    QPushButton *pushButtonCookingMin;
    QLabel *label_36;
    QPushButton *pushButtonCookingAdd;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButtonPetMin;
    QComboBox *comboBoxPet;
    QPushButton *pushButtonPetAdd;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButtonFloMisMin;
    QComboBox *comboBoxFloMis;
    QPushButton *pushButtonFloMisAdd;
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTotal;
    QLabel *labelCost;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(755, 555);
        Dialog->setMinimumSize(QSize(755, 555));
        Dialog->setMaximumSize(QSize(755, 555));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 711, 61));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 15, 371, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelGrade = new QLabel(layoutWidget);
        labelGrade->setObjectName(QString::fromUtf8("labelGrade"));

        horizontalLayout->addWidget(labelGrade);

        comboBoxGrade = new QComboBox(layoutWidget);
        comboBoxGrade->addItem(QString());
        comboBoxGrade->setObjectName(QString::fromUtf8("comboBoxGrade"));

        horizontalLayout->addWidget(comboBoxGrade);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSetting = new QPushButton(layoutWidget);
        pushButtonSetting->setObjectName(QString::fromUtf8("pushButtonSetting"));

        horizontalLayout->addWidget(pushButtonSetting);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout->addWidget(pushButtonClear);

        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 100, 281, 351));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 261, 81));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        checkBoxManualSetting = new QCheckBox(frame_3);
        checkBoxManualSetting->setObjectName(QString::fromUtf8("checkBoxManualSetting"));
        checkBoxManualSetting->setGeometry(QRect(160, 30, 91, 19));
        layoutWidget_3 = new QWidget(frame_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 141, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        spinBoxCurStep = new QSpinBox(layoutWidget_3);
        spinBoxCurStep->setObjectName(QString::fromUtf8("spinBoxCurStep"));

        horizontalLayout_2->addWidget(spinBoxCurStep);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBoxCurGrade = new QSpinBox(layoutWidget_3);
        spinBoxCurGrade->setObjectName(QString::fromUtf8("spinBoxCurGrade"));

        horizontalLayout_3->addWidget(spinBoxCurGrade);


        verticalLayout_3->addLayout(horizontalLayout_3);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 110, 261, 231));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_4->setLineWidth(1);
        frame_4->setMidLineWidth(0);
        layoutWidget_4 = new QWidget(frame_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 10, 231, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lcdNumberRemainStep = new QLCDNumber(layoutWidget_4);
        lcdNumberRemainStep->setObjectName(QString::fromUtf8("lcdNumberRemainStep"));
        lcdNumberRemainStep->setFrameShape(QFrame::Box);
        lcdNumberRemainStep->setFrameShadow(QFrame::Raised);
        lcdNumberRemainStep->setLineWidth(1);
        lcdNumberRemainStep->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumberRemainStep);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lcdNumberRemainGrade_150 = new QLCDNumber(layoutWidget_4);
        lcdNumberRemainGrade_150->setObjectName(QString::fromUtf8("lcdNumberRemainGrade_150"));
        lcdNumberRemainGrade_150->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumberRemainGrade_150);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lcdNumberRemainGrade_140 = new QLCDNumber(layoutWidget_4);
        lcdNumberRemainGrade_140->setObjectName(QString::fromUtf8("lcdNumberRemainGrade_140"));
        lcdNumberRemainGrade_140->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumberRemainGrade_140);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lcdNumberRemainGrade_130 = new QLCDNumber(layoutWidget_4);
        lcdNumberRemainGrade_130->setObjectName(QString::fromUtf8("lcdNumberRemainGrade_130"));
        lcdNumberRemainGrade_130->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_7->addWidget(lcdNumberRemainGrade_130);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lcdNumberRemainGrade_120 = new QLCDNumber(layoutWidget_4);
        lcdNumberRemainGrade_120->setObjectName(QString::fromUtf8("lcdNumberRemainGrade_120"));
        lcdNumberRemainGrade_120->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(lcdNumberRemainGrade_120);


        verticalLayout_2->addLayout(horizontalLayout_8);

        frame_5 = new QFrame(Dialog);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(310, 100, 421, 351));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(5);
        frame_5->setMidLineWidth(0);
        layoutWidget_5 = new QWidget(frame_5);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 20, 381, 311));
        gridLayout = new QGridLayout(layoutWidget_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        pushButtonLookForSomeoneMin = new QPushButton(layoutWidget_5);
        pushButtonLookForSomeoneMin->setObjectName(QString::fromUtf8("pushButtonLookForSomeoneMin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonLookForSomeoneMin->sizePolicy().hasHeightForWidth());
        pushButtonLookForSomeoneMin->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/src/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLookForSomeoneMin->setIcon(icon);

        horizontalLayout_48->addWidget(pushButtonLookForSomeoneMin);

        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_48->addWidget(label_9);

        pushButtonLookForSomeoneAdd = new QPushButton(layoutWidget_5);
        pushButtonLookForSomeoneAdd->setObjectName(QString::fromUtf8("pushButtonLookForSomeoneAdd"));
        sizePolicy.setHeightForWidth(pushButtonLookForSomeoneAdd->sizePolicy().hasHeightForWidth());
        pushButtonLookForSomeoneAdd->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/src/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLookForSomeoneAdd->setIcon(icon1);

        horizontalLayout_48->addWidget(pushButtonLookForSomeoneAdd);


        gridLayout->addLayout(horizontalLayout_48, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        checkBoxAmend = new QCheckBox(layoutWidget_5);
        checkBoxAmend->setObjectName(QString::fromUtf8("checkBoxAmend"));

        gridLayout->addWidget(checkBoxAmend, 0, 2, 1, 1);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        pushButtonWeaponMin_60 = new QPushButton(layoutWidget_5);
        pushButtonWeaponMin_60->setObjectName(QString::fromUtf8("pushButtonWeaponMin_60"));
        sizePolicy.setHeightForWidth(pushButtonWeaponMin_60->sizePolicy().hasHeightForWidth());
        pushButtonWeaponMin_60->setSizePolicy(sizePolicy);
        pushButtonWeaponMin_60->setIcon(icon);

        horizontalLayout_34->addWidget(pushButtonWeaponMin_60);

        label_27 = new QLabel(layoutWidget_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_34->addWidget(label_27);

        pushButtonWeaponAdd_60 = new QPushButton(layoutWidget_5);
        pushButtonWeaponAdd_60->setObjectName(QString::fromUtf8("pushButtonWeaponAdd_60"));
        sizePolicy.setHeightForWidth(pushButtonWeaponAdd_60->sizePolicy().hasHeightForWidth());
        pushButtonWeaponAdd_60->setSizePolicy(sizePolicy);
        pushButtonWeaponAdd_60->setIcon(icon1);

        horizontalLayout_34->addWidget(pushButtonWeaponAdd_60);


        gridLayout->addLayout(horizontalLayout_34, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        pushButtonEquipMin_60 = new QPushButton(layoutWidget_5);
        pushButtonEquipMin_60->setObjectName(QString::fromUtf8("pushButtonEquipMin_60"));
        sizePolicy.setHeightForWidth(pushButtonEquipMin_60->sizePolicy().hasHeightForWidth());
        pushButtonEquipMin_60->setSizePolicy(sizePolicy);
        pushButtonEquipMin_60->setIcon(icon);

        horizontalLayout_35->addWidget(pushButtonEquipMin_60);

        label_28 = new QLabel(layoutWidget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_35->addWidget(label_28);

        pushButtonEquipAdd_60 = new QPushButton(layoutWidget_5);
        pushButtonEquipAdd_60->setObjectName(QString::fromUtf8("pushButtonEquipAdd_60"));
        sizePolicy.setHeightForWidth(pushButtonEquipAdd_60->sizePolicy().hasHeightForWidth());
        pushButtonEquipAdd_60->setSizePolicy(sizePolicy);
        pushButtonEquipAdd_60->setIcon(icon1);

        horizontalLayout_35->addWidget(pushButtonEquipAdd_60);


        gridLayout->addLayout(horizontalLayout_35, 1, 2, 1, 1);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        pushButtonWeaponMin_70 = new QPushButton(layoutWidget_5);
        pushButtonWeaponMin_70->setObjectName(QString::fromUtf8("pushButtonWeaponMin_70"));
        sizePolicy.setHeightForWidth(pushButtonWeaponMin_70->sizePolicy().hasHeightForWidth());
        pushButtonWeaponMin_70->setSizePolicy(sizePolicy);
        pushButtonWeaponMin_70->setIcon(icon);

        horizontalLayout_37->addWidget(pushButtonWeaponMin_70);

        label_29 = new QLabel(layoutWidget_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_37->addWidget(label_29);

        pushButtonWeaponAdd_70 = new QPushButton(layoutWidget_5);
        pushButtonWeaponAdd_70->setObjectName(QString::fromUtf8("pushButtonWeaponAdd_70"));
        sizePolicy.setHeightForWidth(pushButtonWeaponAdd_70->sizePolicy().hasHeightForWidth());
        pushButtonWeaponAdd_70->setSizePolicy(sizePolicy);
        pushButtonWeaponAdd_70->setIcon(icon1);

        horizontalLayout_37->addWidget(pushButtonWeaponAdd_70);


        gridLayout->addLayout(horizontalLayout_37, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        pushButtonEquipMin_70 = new QPushButton(layoutWidget_5);
        pushButtonEquipMin_70->setObjectName(QString::fromUtf8("pushButtonEquipMin_70"));
        sizePolicy.setHeightForWidth(pushButtonEquipMin_70->sizePolicy().hasHeightForWidth());
        pushButtonEquipMin_70->setSizePolicy(sizePolicy);
        pushButtonEquipMin_70->setIcon(icon);

        horizontalLayout_38->addWidget(pushButtonEquipMin_70);

        label_30 = new QLabel(layoutWidget_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_38->addWidget(label_30);

        pushButtonEquipAdd_70 = new QPushButton(layoutWidget_5);
        pushButtonEquipAdd_70->setObjectName(QString::fromUtf8("pushButtonEquipAdd_70"));
        sizePolicy.setHeightForWidth(pushButtonEquipAdd_70->sizePolicy().hasHeightForWidth());
        pushButtonEquipAdd_70->setSizePolicy(sizePolicy);
        pushButtonEquipAdd_70->setIcon(icon1);

        horizontalLayout_38->addWidget(pushButtonEquipAdd_70);


        gridLayout->addLayout(horizontalLayout_38, 2, 2, 1, 1);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        pushButtonWeaponMin_80 = new QPushButton(layoutWidget_5);
        pushButtonWeaponMin_80->setObjectName(QString::fromUtf8("pushButtonWeaponMin_80"));
        sizePolicy.setHeightForWidth(pushButtonWeaponMin_80->sizePolicy().hasHeightForWidth());
        pushButtonWeaponMin_80->setSizePolicy(sizePolicy);
        pushButtonWeaponMin_80->setIcon(icon);

        horizontalLayout_40->addWidget(pushButtonWeaponMin_80);

        label_31 = new QLabel(layoutWidget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_40->addWidget(label_31);

        pushButtonWeaponAdd_80 = new QPushButton(layoutWidget_5);
        pushButtonWeaponAdd_80->setObjectName(QString::fromUtf8("pushButtonWeaponAdd_80"));
        sizePolicy.setHeightForWidth(pushButtonWeaponAdd_80->sizePolicy().hasHeightForWidth());
        pushButtonWeaponAdd_80->setSizePolicy(sizePolicy);
        pushButtonWeaponAdd_80->setIcon(icon1);

        horizontalLayout_40->addWidget(pushButtonWeaponAdd_80);


        gridLayout->addLayout(horizontalLayout_40, 3, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 1, 1, 1);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        pushButtonEquipMin_80 = new QPushButton(layoutWidget_5);
        pushButtonEquipMin_80->setObjectName(QString::fromUtf8("pushButtonEquipMin_80"));
        sizePolicy.setHeightForWidth(pushButtonEquipMin_80->sizePolicy().hasHeightForWidth());
        pushButtonEquipMin_80->setSizePolicy(sizePolicy);
        pushButtonEquipMin_80->setIcon(icon);

        horizontalLayout_41->addWidget(pushButtonEquipMin_80);

        label_32 = new QLabel(layoutWidget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_41->addWidget(label_32);

        pushButtonEquipAdd_80 = new QPushButton(layoutWidget_5);
        pushButtonEquipAdd_80->setObjectName(QString::fromUtf8("pushButtonEquipAdd_80"));
        sizePolicy.setHeightForWidth(pushButtonEquipAdd_80->sizePolicy().hasHeightForWidth());
        pushButtonEquipAdd_80->setSizePolicy(sizePolicy);
        pushButtonEquipAdd_80->setIcon(icon1);

        horizontalLayout_41->addWidget(pushButtonEquipAdd_80);


        gridLayout->addLayout(horizontalLayout_41, 3, 2, 1, 1);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        pushButtonFirFurnitureMin = new QPushButton(layoutWidget_5);
        pushButtonFirFurnitureMin->setObjectName(QString::fromUtf8("pushButtonFirFurnitureMin"));
        sizePolicy.setHeightForWidth(pushButtonFirFurnitureMin->sizePolicy().hasHeightForWidth());
        pushButtonFirFurnitureMin->setSizePolicy(sizePolicy);
        pushButtonFirFurnitureMin->setIcon(icon);

        horizontalLayout_43->addWidget(pushButtonFirFurnitureMin);

        label_33 = new QLabel(layoutWidget_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_43->addWidget(label_33);

        pushButtonFirFurnitureAdd = new QPushButton(layoutWidget_5);
        pushButtonFirFurnitureAdd->setObjectName(QString::fromUtf8("pushButtonFirFurnitureAdd"));
        sizePolicy.setHeightForWidth(pushButtonFirFurnitureAdd->sizePolicy().hasHeightForWidth());
        pushButtonFirFurnitureAdd->setSizePolicy(sizePolicy);
        pushButtonFirFurnitureAdd->setIcon(icon1);

        horizontalLayout_43->addWidget(pushButtonFirFurnitureAdd);


        gridLayout->addLayout(horizontalLayout_43, 4, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 1, 1, 1);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        pushButtonSecFurnitureMin = new QPushButton(layoutWidget_5);
        pushButtonSecFurnitureMin->setObjectName(QString::fromUtf8("pushButtonSecFurnitureMin"));
        sizePolicy.setHeightForWidth(pushButtonSecFurnitureMin->sizePolicy().hasHeightForWidth());
        pushButtonSecFurnitureMin->setSizePolicy(sizePolicy);
        pushButtonSecFurnitureMin->setIcon(icon);

        horizontalLayout_44->addWidget(pushButtonSecFurnitureMin);

        label_34 = new QLabel(layoutWidget_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_44->addWidget(label_34);

        pushButtonSecFurnitureAdd = new QPushButton(layoutWidget_5);
        pushButtonSecFurnitureAdd->setObjectName(QString::fromUtf8("pushButtonSecFurnitureAdd"));
        sizePolicy.setHeightForWidth(pushButtonSecFurnitureAdd->sizePolicy().hasHeightForWidth());
        pushButtonSecFurnitureAdd->setSizePolicy(sizePolicy);
        pushButtonSecFurnitureAdd->setIcon(icon1);

        horizontalLayout_44->addWidget(pushButtonSecFurnitureAdd);


        gridLayout->addLayout(horizontalLayout_44, 4, 2, 1, 1);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        pushButtonDrugMin = new QPushButton(layoutWidget_5);
        pushButtonDrugMin->setObjectName(QString::fromUtf8("pushButtonDrugMin"));
        sizePolicy.setHeightForWidth(pushButtonDrugMin->sizePolicy().hasHeightForWidth());
        pushButtonDrugMin->setSizePolicy(sizePolicy);
        pushButtonDrugMin->setIcon(icon);

        horizontalLayout_46->addWidget(pushButtonDrugMin);

        label_35 = new QLabel(layoutWidget_5);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_46->addWidget(label_35);

        pushButtonDrugAdd = new QPushButton(layoutWidget_5);
        pushButtonDrugAdd->setObjectName(QString::fromUtf8("pushButtonDrugAdd"));
        sizePolicy.setHeightForWidth(pushButtonDrugAdd->sizePolicy().hasHeightForWidth());
        pushButtonDrugAdd->setSizePolicy(sizePolicy);
        pushButtonDrugAdd->setIcon(icon1);

        horizontalLayout_46->addWidget(pushButtonDrugAdd);


        gridLayout->addLayout(horizontalLayout_46, 5, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 5, 1, 1, 1);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        pushButtonCookingMin = new QPushButton(layoutWidget_5);
        pushButtonCookingMin->setObjectName(QString::fromUtf8("pushButtonCookingMin"));
        sizePolicy.setHeightForWidth(pushButtonCookingMin->sizePolicy().hasHeightForWidth());
        pushButtonCookingMin->setSizePolicy(sizePolicy);
        pushButtonCookingMin->setIcon(icon);

        horizontalLayout_47->addWidget(pushButtonCookingMin);

        label_36 = new QLabel(layoutWidget_5);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_47->addWidget(label_36);

        pushButtonCookingAdd = new QPushButton(layoutWidget_5);
        pushButtonCookingAdd->setObjectName(QString::fromUtf8("pushButtonCookingAdd"));
        sizePolicy.setHeightForWidth(pushButtonCookingAdd->sizePolicy().hasHeightForWidth());
        pushButtonCookingAdd->setSizePolicy(sizePolicy);
        pushButtonCookingAdd->setIcon(icon1);

        horizontalLayout_47->addWidget(pushButtonCookingAdd);


        gridLayout->addLayout(horizontalLayout_47, 5, 2, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pushButtonPetMin = new QPushButton(layoutWidget_5);
        pushButtonPetMin->setObjectName(QString::fromUtf8("pushButtonPetMin"));
        sizePolicy.setHeightForWidth(pushButtonPetMin->sizePolicy().hasHeightForWidth());
        pushButtonPetMin->setSizePolicy(sizePolicy);
        pushButtonPetMin->setIcon(icon);

        horizontalLayout_14->addWidget(pushButtonPetMin);

        comboBoxPet = new QComboBox(layoutWidget_5);
        comboBoxPet->addItem(QString());
        comboBoxPet->addItem(QString());
        comboBoxPet->addItem(QString());
        comboBoxPet->setObjectName(QString::fromUtf8("comboBoxPet"));
        sizePolicy.setHeightForWidth(comboBoxPet->sizePolicy().hasHeightForWidth());
        comboBoxPet->setSizePolicy(sizePolicy);
        comboBoxPet->setFocusPolicy(Qt::WheelFocus);

        horizontalLayout_14->addWidget(comboBoxPet);

        pushButtonPetAdd = new QPushButton(layoutWidget_5);
        pushButtonPetAdd->setObjectName(QString::fromUtf8("pushButtonPetAdd"));
        sizePolicy.setHeightForWidth(pushButtonPetAdd->sizePolicy().hasHeightForWidth());
        pushButtonPetAdd->setSizePolicy(sizePolicy);
        pushButtonPetAdd->setIcon(icon1);

        horizontalLayout_14->addWidget(pushButtonPetAdd);


        gridLayout->addLayout(horizontalLayout_14, 6, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 6, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButtonFloMisMin = new QPushButton(layoutWidget_5);
        pushButtonFloMisMin->setObjectName(QString::fromUtf8("pushButtonFloMisMin"));
        sizePolicy.setHeightForWidth(pushButtonFloMisMin->sizePolicy().hasHeightForWidth());
        pushButtonFloMisMin->setSizePolicy(sizePolicy);
        pushButtonFloMisMin->setIcon(icon);

        horizontalLayout_13->addWidget(pushButtonFloMisMin);

        comboBoxFloMis = new QComboBox(layoutWidget_5);
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->addItem(QString());
        comboBoxFloMis->setObjectName(QString::fromUtf8("comboBoxFloMis"));
        sizePolicy.setHeightForWidth(comboBoxFloMis->sizePolicy().hasHeightForWidth());
        comboBoxFloMis->setSizePolicy(sizePolicy);
        comboBoxFloMis->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_13->addWidget(comboBoxFloMis);

        pushButtonFloMisAdd = new QPushButton(layoutWidget_5);
        pushButtonFloMisAdd->setObjectName(QString::fromUtf8("pushButtonFloMisAdd"));
        sizePolicy.setHeightForWidth(pushButtonFloMisAdd->sizePolicy().hasHeightForWidth());
        pushButtonFloMisAdd->setSizePolicy(sizePolicy);
        pushButtonFloMisAdd->setIcon(icon1);

        horizontalLayout_13->addWidget(pushButtonFloMisAdd);


        gridLayout->addLayout(horizontalLayout_13, 6, 2, 1, 1);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(380, 470, 331, 71));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/image/src/pic.jpg")));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 480, 271, 41));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));

        verticalLayout->addWidget(labelTotal);

        labelCost = new QLabel(widget);
        labelCost->setObjectName(QString::fromUtf8("labelCost"));

        verticalLayout->addWidget(labelCost);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\256\235\345\256\235\347\216\257\346\210\220\346\234\254\350\256\241\347\256\227\345\231\250 by \345\270\202\344\272\225\345\260\217\346\260\221", nullptr));
        labelGrade->setText(QApplication::translate("Dialog", "\347\255\211\347\272\247", nullptr));
        comboBoxGrade->setItemText(0, QApplication::translate("Dialog", "175", nullptr));

        pushButtonSetting->setText(QApplication::translate("Dialog", "\345\215\225\344\273\267\350\256\276\347\275\256", nullptr));
        pushButtonClear->setText(QApplication::translate("Dialog", "\346\270\205\351\233\266", nullptr));
        checkBoxManualSetting->setText(QApplication::translate("Dialog", "\346\211\213\345\212\250\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\347\216\257\346\225\260", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\347\247\257\345\210\206\346\225\260", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\345\211\251\344\275\231\347\216\257\346\225\260", nullptr));
        label_4->setText(QApplication::translate("Dialog", "\350\267\235\347\246\273150", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\350\267\235\347\246\273140", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\350\267\235\347\246\273130", nullptr));
        label_7->setText(QApplication::translate("Dialog", "\350\267\235\347\246\273120", nullptr));
        pushButtonLookForSomeoneMin->setText(QString());
        label_9->setText(QApplication::translate("Dialog", "\346\211\276  \344\272\272", nullptr));
        pushButtonLookForSomeoneAdd->setText(QString());
        checkBoxAmend->setText(QApplication::translate("Dialog", "\347\272\240\351\224\231", nullptr));
        pushButtonWeaponMin_60->setText(QString());
        label_27->setText(QApplication::translate("Dialog", "  60\346\255\246\345\231\250", nullptr));
        pushButtonWeaponAdd_60->setText(QString());
        pushButtonEquipMin_60->setText(QString());
        label_28->setText(QApplication::translate("Dialog", "  60\350\243\205\345\244\207", nullptr));
        pushButtonEquipAdd_60->setText(QString());
        pushButtonWeaponMin_70->setText(QString());
        label_29->setText(QApplication::translate("Dialog", "  70\346\255\246\345\231\250", nullptr));
        pushButtonWeaponAdd_70->setText(QString());
        pushButtonEquipMin_70->setText(QString());
        label_30->setText(QApplication::translate("Dialog", "  70\350\243\205\345\244\207", nullptr));
        pushButtonEquipAdd_70->setText(QString());
        pushButtonWeaponMin_80->setText(QString());
        label_31->setText(QApplication::translate("Dialog", "  80\346\255\246\345\231\250", nullptr));
        pushButtonWeaponAdd_80->setText(QString());
        pushButtonEquipMin_80->setText(QString());
        label_32->setText(QApplication::translate("Dialog", "  80\350\243\205\345\244\207", nullptr));
        pushButtonEquipAdd_80->setText(QString());
        pushButtonFirFurnitureMin->setText(QString());
        label_33->setText(QApplication::translate("Dialog", "  \344\270\200  \345\256\266", nullptr));
        pushButtonFirFurnitureAdd->setText(QString());
        pushButtonSecFurnitureMin->setText(QString());
        label_34->setText(QApplication::translate("Dialog", "  \344\272\214  \345\256\266", nullptr));
        pushButtonSecFurnitureAdd->setText(QString());
        pushButtonDrugMin->setText(QString());
        label_35->setText(QApplication::translate("Dialog", "  \344\270\211  \350\215\257", nullptr));
        pushButtonDrugAdd->setText(QString());
        pushButtonCookingMin->setText(QString());
        label_36->setText(QApplication::translate("Dialog", "  \347\203\271  \351\245\252", nullptr));
        pushButtonCookingAdd->setText(QString());
        pushButtonPetMin->setText(QString());
        comboBoxPet->setItemText(0, QApplication::translate("Dialog", "\351\235\236\346\214\207\345\256\232", nullptr));
        comboBoxPet->setItemText(1, QApplication::translate("Dialog", "\346\214\207\345\256\232", nullptr));
        comboBoxPet->setItemText(2, QApplication::translate("Dialog", "\345\236\203\345\234\276", nullptr));

        pushButtonPetAdd->setText(QString());
        pushButtonFloMisMin->setText(QString());
        comboBoxFloMis->setItemText(0, QApplication::translate("Dialog", "\350\220\247", nullptr));
        comboBoxFloMis->setItemText(1, QApplication::translate("Dialog", "\351\222\271", nullptr));
        comboBoxFloMis->setItemText(2, QApplication::translate("Dialog", "\346\234\250\351\261\274", nullptr));
        comboBoxFloMis->setItemText(3, QApplication::translate("Dialog", "\347\253\226\347\220\264", nullptr));
        comboBoxFloMis->setItemText(4, QApplication::translate("Dialog", "\347\220\265\347\220\266", nullptr));
        comboBoxFloMis->setItemText(5, QApplication::translate("Dialog", "\345\224\242\345\221\220", nullptr));
        comboBoxFloMis->setItemText(6, QApplication::translate("Dialog", "\347\254\233\345\255\220", nullptr));
        comboBoxFloMis->setItemText(7, QApplication::translate("Dialog", "\347\274\226\351\222\237", nullptr));
        comboBoxFloMis->setItemText(8, QApplication::translate("Dialog", "\347\272\242\347\216\253\347\221\260", nullptr));
        comboBoxFloMis->setItemText(9, QApplication::translate("Dialog", "\347\231\276\345\220\210", nullptr));
        comboBoxFloMis->setItemText(10, QApplication::translate("Dialog", "\345\272\267\344\271\203\351\246\250", nullptr));
        comboBoxFloMis->setItemText(11, QApplication::translate("Dialog", "\347\211\241\344\270\271", nullptr));

        pushButtonFloMisAdd->setText(QString());
        label_8->setText(QString());
        labelTotal->setText(QApplication::translate("Dialog", "total", nullptr));
        labelCost->setText(QApplication::translate("Dialog", "cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
