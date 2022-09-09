#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //初始化UI界面
    //禁止等级选择
    ui->comboBoxGrade->setEnabled(false);
    //禁止手动设置
    ui->checkBoxManualSetting->setEnabled(false);
    //禁止选择界面减操作
    ui->pushButtonLookForSomeoneMin->setEnabled(false);
    ui->pushButtonWeaponMin_60->setEnabled(false);
    ui->pushButtonWeaponMin_70->setEnabled(false);
    ui->pushButtonWeaponMin_80->setEnabled(false);
    ui->pushButtonEquipMin_60->setEnabled(false);
    ui->pushButtonEquipMin_70->setEnabled(false);
    ui->pushButtonEquipMin_80->setEnabled(false);
    ui->pushButtonFirFurnitureMin->setEnabled(false);
    ui->pushButtonSecFurnitureMin->setEnabled(false);
    ui->pushButtonDrugMin->setEnabled(false);
    ui->pushButtonCookingMin->setEnabled(false);
    ui->pushButtonPetMin->setEnabled(false);
    ui->pushButtonFloMisMin->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

//单价设置
void Dialog::on_pushButtonSetting_clicked()
{
    settingDialog.show();
}

//清零
void Dialog::on_pushButtonClear_clicked()
{
    Total.CurStep = 0;
    Total.CurGrade = 0;
    Total.RemainStep = 100;
    Total.RemainGrade_150 = 222;
    Total.RemainGrade_140 = 212;
    Total.RemainGrade_130 = 202;
    Total.RemainGrade_120 = 192;
    Total.WeaEquCnt_60 = 0;
    Total.WeaEquCnt_70 = 0;
    Total.WeaEquCnt_80 = 0;
    Total.cost = 0;
}
