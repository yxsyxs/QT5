#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnOpen_clicked();
    void readComDataSlot();
    void on_btnSend_clicked();
private:
    QTimer *timer;
    QSerialPort *my_serialport;
    Ui::Widget *ui;

};

#endif // WIDGET_H
