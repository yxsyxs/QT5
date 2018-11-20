#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(add()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(dec()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(hex()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(bin()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::add()
{
    QString str = ui->lineEdit->text();     //读取“数字”
    int num = str.toInt();
    str = ui->lineEdit_2->text();
    float price = str.toFloat();
    float total = num*price;
    str = str.sprintf("%.2f",total);
    ui->lineEdit_3->setText(str);
}

void Widget::dec()
{
    QString str = ui->lineEdit_4->text();
    int num = str.toInt();

    str = str.setNum(num,16);
    ui->lineEdit_5->setText(str);

    str = str.setNum(num,2);
    ui->lineEdit_6->setText(str);

}

void Widget::hex()
{
    bool ok;
    QString str = ui->lineEdit_5->text();
    int val = str.toInt(&ok,16);

    str = str.setNum(val,10);
    ui->lineEdit_4->setText(str);

    str = str.setNum(val,2);
    ui->lineEdit_6->setText(str);
}

void Widget::bin()
{
    bool ok;
    QString str = ui->lineEdit_6->text();
    int val = str.toInt(&ok,2);

    str = str.setNum(val,10);
    ui->lineEdit_4->setText(str);

    str = str.setNum(val,16);
    ui->lineEdit_5->setText(str);
}
