#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //显示可用的串口
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->cBoxSerialPort->addItem(info.portName());
    }
    //屏蔽数据位、校验位、停止位设置
    ui->cBoxParity->setEnabled(false);
    ui->cBoxDataBits->setEnabled(false);
    ui->cBoxStopBits->setEnabled(false);

    //屏蔽发送按键
    ui->btnSend->setEnabled(false);

    //连接信号和槽
    connect(&mSerialPort, SIGNAL(readyRead()), this, SLOT(on_serialPort_readData()));
}

Dialog::~Dialog()
{
    delete ui;
}




void Dialog::on_btnOpen_clicked()
{
    if (true == isOpen)
    {
        //关闭串口
        mSerialPort.close();
        //打开设置菜单
        ui->cBoxSerialPort->setEnabled(true);
        ui->cBoxBaudRate->setEnabled(true);
        //切换到"打开"
        ui->btnOpen->setText("打开");
        //禁止发送按键
        ui->btnSend->setEnabled(false);
        //切换状态标志
        isOpen = false;
    }
    else
    {
        //获取串口名
        QString portName = ui->cBoxSerialPort->currentText();
        //设置串口名
        mSerialPort.setPortName(ui->cBoxSerialPort->currentText());
        //设置波特率
        mSerialPort.setBaudRate(ui->cBoxBaudRate->currentText().toInt());
        //设置数据位
        mSerialPort.setDataBits(QSerialPort::Data8);
        //设置校验位
        mSerialPort.setParity(QSerialPort::NoParity);
        //设置停止位
        mSerialPort.setStopBits(QSerialPort::OneStop);
        //设置流控制
        mSerialPort.setFlowControl(QSerialPort::NoFlowControl); //设置为无流控制

        //打开串口
        mSerialPort.open(QIODevice::ReadWrite);
        if (true == mSerialPort.isOpen())
        {
            //关闭设置菜单
            ui->cBoxSerialPort->setEnabled(false);
            ui->cBoxBaudRate->setEnabled(false);
            //切换到"关闭"
            ui->btnOpen->setText("关闭");
            //使能发送按键
            ui->btnSend->setEnabled(true);
            //切换状态标志
            isOpen = true;
        }
        else
        {
            //未能打开提示
            QMessageBox::critical(this, tr("打开失败"), tr("未能打开串口 ") + portName + tr("\n该串口设备不存在或已被占用"), QMessageBox::Ok);
        }
    }
}

void Dialog::on_btnSend_clicked()
{
    if (true == isOpen)
    {
        mSerialPort.write(ui->tEditSend->toPlainText().toLatin1());
    }
}

void Dialog::on_serialPort_readData()
{
    if (true == isOpen)
    {
        QByteArray recvData = mSerialPort.readAll();

        ui->tEditRecv->append(QString(recvData));
    }
}
