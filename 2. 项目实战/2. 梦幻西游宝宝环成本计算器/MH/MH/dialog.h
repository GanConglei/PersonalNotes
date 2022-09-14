#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "settingdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

typedef struct
{
    unsigned int quantity; //数量
    unsigned int price; //单价
} Property_t;

typedef struct
{
    Property_t weapon_60; //60武器
    Property_t equipment_60; //60装备
    Property_t weapon_70; //70武器
    Property_t equipment_70; //70装备
    Property_t weapon_80; //80武器
    Property_t equipment_80; //80装备
} WeaEqu_t; //环装类

typedef struct
{
    Property_t peony; //牡丹
    Property_t rose; //玫瑰
    Property_t carnation; //康乃馨
    Property_t lily; //百合
} Flower_t; //花卉类

typedef struct
{
    Property_t desolate; //萧
    Property_t cymbals; //钹
    Property_t woodblock; //木鱼
    Property_t harp; //竖琴
    Property_t pipa; //琵琶
    Property_t suona; //唢呐
    Property_t flute; //笛子
    Property_t chime; //编钟
} Music_t; //乐器类

typedef struct
{
    Property_t firFruniture; //一家
    Property_t secFruniture; //二家
    Property_t cooking; //烹饪
    Property_t drug; //炼药
} Skill_t; //体活

typedef struct
{
    Property_t noAssign; //非指定
    Property_t assign; //指定
    Property_t garbage; //垃圾
} Pet_t;

typedef struct
{
    WeaEqu_t WeaEqu;
    Flower_t Flower;
    Music_t Music;
    Skill_t Skill;
    Pet_t Pet;
} Variety_t;

typedef  struct
{
    int CurStep; //当前环数
    int CurGrade; //当前分数
    int WeaEquCnt_60; //60
    int WeaEquCnt_70; //70
    int WeaEquCnt_80; //80
    unsigned long Cost; //成本
} Total_t;

 extern Variety_t Variety;
 extern Total_t Total;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButtonSetting_clicked();

    void on_pushButtonClear_clicked();

    void on_DisplayUpdate();

    void on_spinBoxCurStep_valueChanged(int arg1);

    void on_spinBoxCurGrade_valueChanged(int arg1);

    void on_pushButtonLookForSomeoneMin_clicked();

    void on_pushButtonLookForSomeoneAdd_clicked();

    void on_pushButtonWeaponMin_60_clicked();

    void on_pushButtonWeaponAdd_60_clicked();

    void on_pushButtonEquipMin_60_clicked();

    void on_pushButtonEquipAdd_60_clicked();

    void on_pushButtonWeaponMin_70_clicked();

    void on_pushButtonWeaponAdd_70_clicked();

    void on_pushButtonEquipMin_70_clicked();

    void on_pushButtonEquipAdd_70_clicked();

    void on_pushButtonWeaponMin_80_clicked();

    void on_pushButtonWeaponAdd_80_clicked();

    void on_pushButtonEquipMin_80_clicked();

    void on_pushButtonEquipAdd_80_clicked();

    void on_pushButtonFirFurnitureMin_clicked();

    void on_pushButtonFirFurnitureAdd_clicked();

    void on_pushButtonSecFurnitureMin_clicked();

    void on_pushButtonSecFurnitureAdd_clicked();

    void on_pushButtonDrugMin_clicked();

    void on_pushButtonDrugAdd_clicked();

    void on_pushButtonCookingMin_clicked();

    void on_pushButtonCookingAdd_clicked();

    void on_pushButtonPetMin_clicked();

    void on_pushButtonPetAdd_clicked();

    void on_pushButtonFloMisMin_clicked();

    void on_pushButtonFloMisAdd_clicked();

private:
    Ui::Dialog *ui;

    SettingDialog settingDialog;

    void DateInit();

//    Variety_t Variety;
//    Total_t Total;
};


#endif // DIALOG_H
