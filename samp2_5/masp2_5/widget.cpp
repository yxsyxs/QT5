#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(add()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(dec()));
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

//void Widget::hex()
//{

//}

//void Widget::bin()
//{

//}
