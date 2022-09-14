#include "settingdialog.h"
#include "ui_settingdialog.h"
#include "dialog.h"
#include <QFile>
#include <QLineEdit>

#define file "config.txt"

SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);

    //判断是否存在config文件，如果不存在则创建config文件
    if(QFile::exists(file))
    {
        QFile filenew(file);
        filenew.open(QIODevice::ReadOnly);
        QDataStream in(&filenew); // 从文件读取序列化数据
        in >> Variety.WeaEqu.weapon_60.price >> Variety.WeaEqu.equipment_60.price
                >> Variety.WeaEqu.weapon_70.price >> Variety.WeaEqu.equipment_70.price
                >> Variety.WeaEqu.weapon_80.price >> Variety.WeaEqu.equipment_80.price
                >> Variety.Skill.firFruniture.price >> Variety.Skill.secFruniture.price
                >> Variety.Skill.drug.price >> Variety.Skill.cooking.price
                >> Variety.Music.desolate.price >> Variety.Music.cymbals.price
                >> Variety.Music.woodblock.price >> Variety.Music.harp.price
                >> Variety.Music.pipa.price >> Variety.Music.suona.price
                >> Variety.Music.flute.price >> Variety.Music.chime.price
                >> Variety.Flower.rose.price >> Variety.Flower.lily.price
                >> Variety.Flower.carnation.price >> Variety.Flower.peony.price; //提取写入的数据
        filenew.close();
        //设置界面值
        ui->lineEditWeapon_60->setText(QString::number(Variety.WeaEqu.weapon_60.price));
        ui->lineEditEquipment_60->setText(QString::number(Variety.WeaEqu.equipment_60.price));
        ui->lineEditWeapon_70->setText(QString::number(Variety.WeaEqu.weapon_70.price));
        ui->lineEditEquipment_70->setText(QString::number(Variety.WeaEqu.equipment_70.price));
        ui->lineEditWeapon_80->setText(QString::number(Variety.WeaEqu.weapon_80.price));
        ui->lineEditEquipment_80->setText(QString::number(Variety.WeaEqu.equipment_80.price));
        ui->lineEditFirFruniture->setText(QString::number(Variety.Skill.firFruniture.price));
        ui->lineEditSecFruniture->setText(QString::number(Variety.Skill.secFruniture.price));
        ui->lineEditDrug->setText(QString::number(Variety.Skill.drug.price));
        ui->lineEditCooking->setText(QString::number(Variety.Skill.cooking.price));
        ui->lineEditWoodblock->setText(QString::number(Variety.Music.woodblock.price));
        ui->lineEditHarp->setText(QString::number(Variety.Music.harp.price));
        ui->lineEditPipa->setText(QString::number(Variety.Music.pipa.price));
        ui->lineEditSuona->setText(QString::number(Variety.Music.suona.price));
        ui->lineEditFlute->setText(QString::number(Variety.Music.flute.price));
        ui->lineEditChime->setText(QString::number(Variety.Music.chime.price));
        ui->lineEditPeony->setText(QString::number(Variety.Flower.peony.price));
        ui->lineEditRose->setText(QString::number(Variety.Flower.rose.price));
        ui->lineEditCarnation->setText(QString::number(Variety.Flower.carnation.price));
        ui->lineEditLily->setText(QString::number(Variety.Flower.lily.price));
    }
}

SettingDialog::~SettingDialog()
{
    delete ui;
}

void SettingDialog::on_buttonBoxOk_accepted()
{
    //获取数据
    Variety.WeaEqu.weapon_60.price = ui->lineEditWeapon_60->text().toInt();
    Variety.WeaEqu.equipment_60.price = ui->lineEditEquipment_60->text().toInt();
    Variety.WeaEqu.weapon_70.price = ui->lineEditWeapon_70->text().toInt();
    Variety.WeaEqu.equipment_70.price = ui->lineEditEquipment_70->text().toInt();
    Variety.WeaEqu.weapon_80.price = ui->lineEditWeapon_80->text().toInt();
    Variety.WeaEqu.equipment_80.price = ui->lineEditEquipment_80->text().toInt();
    Variety.Skill.firFruniture.price = ui->lineEditFirFruniture->text().toInt();
    Variety.Skill.secFruniture.price = ui->lineEditSecFruniture->text().toInt();
    Variety.Skill.drug.price = ui->lineEditDrug->text().toInt();
    Variety.Skill.cooking.price =  ui->lineEditCooking->text().toInt();
    Variety.Music.desolate.price = 1000;
    Variety.Music.cymbals.price = 1000;
    Variety.Music.woodblock.price = ui->lineEditWoodblock->text().toInt();
    Variety.Music.harp.price = ui->lineEditHarp->text().toInt();
    Variety.Music.pipa.price = ui->lineEditPipa->text().toInt();
    Variety.Music.suona.price = ui->lineEditSuona->text().toInt();
    Variety.Music.flute.price = ui->lineEditFlute->text().toInt();
    Variety.Music.chime.price = ui->lineEditChime->text().toInt();
    Variety.Flower.peony.price = ui->lineEditPeony->text().toInt();
    Variety.Flower.rose.price = ui->lineEditRose->text().toInt();
    Variety.Flower.carnation.price = ui->lineEditCarnation->text().toInt();
    Variety.Flower.lily.price = ui->lineEditLily->text().toInt();

    QFile filesrc(file);
    filesrc.open(QIODevice::WriteOnly);
    QDataStream out(&filesrc);
    out << Variety.WeaEqu.weapon_60.price << Variety.WeaEqu.equipment_60.price
        << Variety.WeaEqu.weapon_70.price << Variety.WeaEqu.equipment_70.price
        << Variety.WeaEqu.weapon_80.price << Variety.WeaEqu.equipment_80.price
        << Variety.Skill.firFruniture.price << Variety.Skill.secFruniture.price
        << Variety.Skill.drug.price << Variety.Skill.cooking.price
        << Variety.Music.desolate.price << Variety.Music.cymbals.price
        << Variety.Music.woodblock.price << Variety.Music.harp.price
        << Variety.Music.pipa.price << Variety.Music.suona.price
        << Variety.Music.flute.price << Variety.Music.chime.price
        << Variety.Flower.rose.price << Variety.Flower.lily.price
        << Variety.Flower.carnation.price << Variety.Flower.peony.price; //写入数据
    filesrc.flush();
    filesrc.close();
}
