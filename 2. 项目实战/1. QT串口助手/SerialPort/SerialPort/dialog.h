#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnOpen_clicked();

    void on_btnSend_clicked();

    void on_serialPort_readData();

private:
    Ui::Dialog *ui;

    QSerialPort mSerialPort;

    bool isOpen;
};
#endif // DIALOG_H
