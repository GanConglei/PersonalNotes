#include "dialog.h"
#include "ui_dialog.h"
#include <QTimer>
#include <QLCDNumber>
#include <QMessageBox>

Variety_t Variety;
Total_t Total;

#define TOTAL(A) ((A.quantity) * (A.price))

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //初始化UI界面
    //禁止等级选择
    ui->comboBoxGrade->setEnabled(false);

    //创建定时器
    QTimer *DisTimer = new QTimer(this); //创建定时器，用于刷新显示
    //设置信号和槽
    connect(DisTimer, SIGNAL(timeout()), this, SLOT(on_DisplayUpdate()));
    //启动定时器
    DisTimer->start(100);

    //设置环数分数范围
    ui->spinBoxCurStep->setMinimum(0);
    ui->spinBoxCurStep->setMaximum(100);
    ui->spinBoxCurStep->setSingleStep(1);
    ui->spinBoxCurStep->setValue(0);

    ui->spinBoxCurGrade->setMinimum(0);
    ui->spinBoxCurGrade->setMaximum(250);
    ui->spinBoxCurGrade->setSingleStep(1);
    ui->spinBoxCurGrade->setValue(0);

    //设置lcd类型
    ui->lcdNumberRemainStep->setDecMode();
    ui->lcdNumberRemainGrade_120->setDecMode();
    ui->lcdNumberRemainGrade_130->setDecMode();
    ui->lcdNumberRemainGrade_140->setDecMode();
    ui->lcdNumberRemainGrade_150->setDecMode();

    //数据初始化
    DateInit();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::DateInit()
{
    Variety.WeaEqu.weapon_60.quantity = 0;
    Variety.WeaEqu.weapon_70.quantity = 0;
    Variety.WeaEqu.weapon_80.quantity = 0;
    Variety.WeaEqu.equipment_60.quantity = 0;
    Variety.WeaEqu.equipment_70.quantity = 0;
    Variety.WeaEqu.equipment_80.quantity = 0;
    Variety.Pet.noAssign.quantity = 0;
    Variety.Pet.assign.quantity = 0;
    Variety.Pet.garbage.quantity = 0;

    Variety.Flower.peony.quantity = 0;
    Variety.Flower.rose.quantity = 0;
    Variety.Flower.carnation.quantity = 0;
    Variety.Flower.lily.quantity = 0;

    Variety.Music.desolate.quantity = 0;
    Variety.Music.cymbals.quantity = 0;
    Variety.Music.woodblock.quantity = 0;
    Variety.Music.harp.quantity = 0;
    Variety.Music.pipa.quantity = 0;
    Variety.Music.suona.quantity = 0;
    Variety.Music.flute.quantity = 0;
    Variety.Music.chime.quantity = 0;

    Variety.Skill.firFruniture.quantity = 0;
    Variety.Skill.secFruniture.quantity = 0;
    Variety.Skill.cooking.quantity = 0;
    Variety.Skill.drug.quantity= 0 ;

    Total.CurStep = 0;
    Total.CurGrade = 0;
    Total.WeaEquCnt_60 = 0;
    Total.WeaEquCnt_70 = 0;
    Total.WeaEquCnt_80 = 0;
    Total.Cost = 0;
}

//单价设置
void Dialog::on_pushButtonSetting_clicked()
{
    settingDialog.show();
}

//清零
void Dialog::on_pushButtonClear_clicked()
{
    DateInit();
}

void Dialog::on_DisplayUpdate()
{
    char buf[256];

    Total.WeaEquCnt_60 = Variety.WeaEqu.weapon_60.quantity + Variety.WeaEqu.equipment_60.quantity;
    Total.WeaEquCnt_70 = Variety.WeaEqu.weapon_70.quantity + Variety.WeaEqu.equipment_70.quantity;
    Total.WeaEquCnt_80 = Variety.WeaEqu.weapon_80.quantity + Variety.WeaEqu.equipment_80.quantity;

    Total.Cost = TOTAL(Variety.WeaEqu.weapon_60) + TOTAL(Variety.WeaEqu.equipment_60)
            + TOTAL(Variety.WeaEqu.weapon_70) + TOTAL(Variety.WeaEqu.equipment_70)
            + TOTAL(Variety.WeaEqu.weapon_80) + TOTAL(Variety.WeaEqu.equipment_80)
            + TOTAL(Variety.Flower.peony) + TOTAL(Variety.Flower.rose)
            + TOTAL(Variety.Flower.carnation) + TOTAL(Variety.Flower.lily)
            + TOTAL(Variety.Music.desolate) + TOTAL(Variety.Music.cymbals)
            + TOTAL(Variety.Music.woodblock) + TOTAL(Variety.Music.harp)
            + TOTAL(Variety.Music.pipa) + TOTAL(Variety.Music.suona)
            + TOTAL(Variety.Music.flute) + TOTAL(Variety.Music.chime)
            + TOTAL(Variety.Skill.firFruniture) + TOTAL(Variety.Skill.secFruniture)
            + TOTAL(Variety.Skill.cooking) + TOTAL(Variety.Skill.drug)
            + TOTAL(Variety.Pet.noAssign) + TOTAL(Variety.Pet.assign);

    if (true == ui->checkBoxManualSetting->isChecked())
    {
        //手动设置被勾选，释放当前环数和分数设置
        ui->spinBoxCurStep->setEnabled(true);
        ui->spinBoxCurGrade->setEnabled(true);
    }
    else
    {
        //手动设置未勾选，禁止当前环数和分数设置
        ui->spinBoxCurStep->setEnabled(false);
        ui->spinBoxCurGrade->setEnabled(false);
    }

    if (true == ui->checkBoxAmend->isChecked())
    {
        //纠错被勾选，释放"减"设置
        ui->pushButtonLookForSomeoneMin->setEnabled(true);
        ui->pushButtonWeaponMin_60->setEnabled(true);
        ui->pushButtonWeaponMin_70->setEnabled(true);
        ui->pushButtonWeaponMin_80->setEnabled(true);
        ui->pushButtonEquipMin_60->setEnabled(true);
        ui->pushButtonEquipMin_70->setEnabled(true);
        ui->pushButtonEquipMin_80->setEnabled(true);
        ui->pushButtonFirFurnitureMin->setEnabled(true);
        ui->pushButtonSecFurnitureMin->setEnabled(true);
        ui->pushButtonDrugMin->setEnabled(true);
        ui->pushButtonCookingMin->setEnabled(true);
        ui->pushButtonPetMin->setEnabled(true);
        ui->pushButtonFloMisMin->setEnabled(true);
    }
    else
    {
        //纠错未勾选，禁止"减"设置
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

    //当前环数
    ui->spinBoxCurStep->setValue(Total.CurStep);
    //当前分数
    ui->spinBoxCurGrade->setValue(Total.CurGrade);
    //剩余环数
    ui->lcdNumberRemainStep->display(100 - Total.CurStep);
    //距离150分数
    ui->lcdNumberRemainGrade_150->display(222 - Total.CurGrade);
    //距离140分数
    ui->lcdNumberRemainGrade_140->display(212 - Total.CurGrade);
    //距离130分数
    ui->lcdNumberRemainGrade_130->display(202 - Total.CurGrade);
    //距离120分数
    ui->lcdNumberRemainGrade_120->display(192 - Total.CurGrade);
    //总计
    sprintf(buf, "总计：60:%d  70:%d   80:%d", Total.WeaEquCnt_60, Total.WeaEquCnt_70, Total.WeaEquCnt_80);
    ui->labelTotal->setText(buf);
    //成本
    sprintf(buf, "花费：%ld", Total.Cost);
    ui->labelCost ->setText(buf);
}

void Dialog::on_spinBoxCurStep_valueChanged(int arg1)
{
    if (true == ui->checkBoxManualSetting->isChecked())
    {
        Total.CurStep = arg1;
    }
}

void Dialog::on_spinBoxCurGrade_valueChanged(int arg1)
{
    if (true == ui->checkBoxManualSetting->isChecked())
    {
        Total.CurGrade = arg1;
    }
}

//找人-
void Dialog::on_pushButtonLookForSomeoneMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && Total.CurGrade)
        {
            Total.CurStep--;
            Total.CurGrade--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//找人+
void Dialog::on_pushButtonLookForSomeoneAdd_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//60武器-
void Dialog::on_pushButtonWeaponMin_60_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 2) && Variety.WeaEqu.weapon_60.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 2;
            Variety.WeaEqu.weapon_60.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//60武器+
void Dialog::on_pushButtonWeaponAdd_60_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 2;
        Variety.WeaEqu.weapon_60.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//60装备-
void Dialog::on_pushButtonEquipMin_60_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 2) && Variety.WeaEqu.equipment_60.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 2;
            Variety.WeaEqu.equipment_60.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//60装备+
void Dialog::on_pushButtonEquipAdd_60_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 2;
        Variety.WeaEqu.equipment_60.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//70武器-
void Dialog::on_pushButtonWeaponMin_70_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 3) && Variety.WeaEqu.weapon_70.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 3;
            Variety.WeaEqu.weapon_70.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//70武器+
void Dialog::on_pushButtonWeaponAdd_70_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 3;
        Variety.WeaEqu.weapon_70.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//70装备-
void Dialog::on_pushButtonEquipMin_70_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 3) && Variety.WeaEqu.equipment_70.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 3;
            Variety.WeaEqu.equipment_70.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//70装备+
void Dialog::on_pushButtonEquipAdd_70_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 3;
        Variety.WeaEqu.equipment_70.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//80武器-
void Dialog::on_pushButtonWeaponMin_80_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 5) && Variety.WeaEqu.weapon_80.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 5;
            Variety.WeaEqu.weapon_80.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//80武器+
void Dialog::on_pushButtonWeaponAdd_80_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 5;
        Variety.WeaEqu.weapon_80.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//80装备-
void Dialog::on_pushButtonEquipMin_80_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 5) && Variety.WeaEqu.equipment_80.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 5;
            Variety.WeaEqu.equipment_80.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//80装备+
void Dialog::on_pushButtonEquipAdd_80_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 5;
        Variety.WeaEqu.equipment_80.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//一家-
void Dialog::on_pushButtonFirFurnitureMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 2) && Variety.Skill.firFruniture.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 2;
            Variety.Skill.firFruniture.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//一家+
void Dialog::on_pushButtonFirFurnitureAdd_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 2;
        Variety.Skill.firFruniture.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//二家-
void Dialog::on_pushButtonSecFurnitureMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 5) && Variety.Skill.secFruniture.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 5;
            Variety.Skill.secFruniture.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//二家+
void Dialog::on_pushButtonSecFurnitureAdd_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 5;
        Variety.Skill.secFruniture.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//三药-
void Dialog::on_pushButtonDrugMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 2) && Variety.Skill.drug.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 2;
            Variety.Skill.drug.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//三药+
void Dialog::on_pushButtonDrugAdd_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 2;
        Variety.Skill.drug.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//烹饪-
void Dialog::on_pushButtonCookingMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        if (Total.CurStep && (Total.CurGrade >= 2) && Variety.Skill.cooking.quantity)
        {
            Total.CurStep--;
            Total.CurGrade -= 2;
            Variety.Skill.cooking.quantity--;
        }
        else
        {
            QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
        }
    }
}

//烹饪+
void Dialog::on_pushButtonCookingAdd_clicked()
{
    if (Total.CurStep < 100)
    {
        Total.CurStep++;
        Total.CurGrade += 2;
        Variety.Skill.cooking.quantity++;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
    }
}

//变异-
void Dialog::on_pushButtonPetMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        switch (ui->comboBoxPet->currentIndex())
        {
            case 0:
                if (Total.CurStep && (Total.CurGrade >= 5) && Variety.Pet.noAssign.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 5;
                    Variety.Pet.noAssign.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 1:
                if (Total.CurStep && (Total.CurGrade >= 10) && Variety.Pet.assign.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 10;
                    Variety.Pet.assign.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 2:
                if (Total.CurStep && Variety.Pet.garbage.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade += 15;
                    Variety.Pet.garbage.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

        default:break;
        }
    }
}

//变异+
void Dialog::on_pushButtonPetAdd_clicked()
{
    switch (ui->comboBoxPet->currentIndex())
    {
        case 0:
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 5;
                Variety.Pet.noAssign.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 1:
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 10;
                Variety.Pet.assign.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 2:
            if ((Total.CurStep < 100) && (Total.CurGrade >= 15))
            {
                Total.CurStep++;
                Total.CurGrade -= 15;
                Variety.Pet.garbage.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

    default:break;
    }
}

//花乐-
void Dialog::on_pushButtonFloMisMin_clicked()
{
    if (true == ui->checkBoxAmend->isChecked())
    {
        switch (ui->comboBoxFloMis->currentIndex())
        {
            case 0: //萧
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.desolate.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.desolate.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 1: //钹
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.cymbals.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.cymbals.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 2: //木鱼
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.woodblock.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.woodblock.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 3: //竖琴
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.harp.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.harp.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 4: //琵琶
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.pipa.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.pipa.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 5: //唢呐
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.suona.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.suona.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 6: //笛子
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.flute.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.flute.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 7: //编钟
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Music.chime.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Music.chime.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 8: //木鱼
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Flower.rose.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Flower.rose.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 9: //百合
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Flower.lily.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Flower.lily.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 10: //康乃馨
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Flower.carnation.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Flower.carnation.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

            case 11: //牡丹
                if (Total.CurStep && (Total.CurGrade >= 4) && Variety.Flower.peony.quantity)
                {
                    Total.CurStep--;
                    Total.CurGrade -= 4;
                    Variety.Flower.peony.quantity--;
                }
                else
                {
                    QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
                }
            break;

        default:break;
        }
    }
}

//花乐+
void Dialog::on_pushButtonFloMisAdd_clicked()
{
    switch (ui->comboBoxFloMis->currentIndex())
    {
        case 0: //萧
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.desolate.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 1: //钹
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.cymbals.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 2: //木鱼
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.woodblock.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 3: //竖琴
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.harp.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 4: //琵琶
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.pipa.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 5: //唢呐
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.suona.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 6: //笛子
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.flute.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 7: //编钟
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Music.chime.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 8: //木鱼
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Flower.rose.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 9: //百合
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Flower.lily.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 10: //康乃馨
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Flower.carnation.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

        case 11: //牡丹
            if (Total.CurStep < 100)
            {
                Total.CurStep++;
                Total.CurGrade += 4;
                Variety.Flower.peony.quantity++;
            }
            else
            {
                QMessageBox::critical(this, tr("错误"), tr("数据发生错误 "), QMessageBox::Ok);
            }
        break;

    default:break;
    }
}
