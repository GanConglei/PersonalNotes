#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "settingdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

typedef struct
{
    int quantity; //数量
    int price; //单价
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
    Property_t FirFruniture; //一家
    Property_t SecFruniture; //二家
    Property_t cooking; //烹饪
    Property_t drug; //炼药
} Skill_t; //体活


typedef struct
{
    WeaEqu_t WeaEqu;
    Flower_t Flower;
    Music_t Music;
    Skill_t Skill;
} Variety_t;

typedef  struct
{
    int CurStep; //当前环数
    int CurGrade; //当前分数
    int RemainStep; //剩余环数
    int RemainGrade_150; //距离150分数
    int RemainGrade_140; //距离140分数
    int RemainGrade_130; //距离130分数
    int RemainGrade_120; //距离120分数
    int WeaEquCnt_60; //60
    int WeaEquCnt_70; //70
    int WeaEquCnt_80; //80
    int cost; //成本
} Total_t;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButtonSetting_clicked();

    void on_pushButtonClear_clicked();

private:
    Ui::Dialog *ui;

    SettingDialog settingDialog;

    Variety_t Variety;
    Total_t Total;
};


#endif // DIALOG_H
