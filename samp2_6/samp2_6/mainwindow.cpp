#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(jisuan()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(dec()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(bin()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(hex()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::jisuan()
{

    int val = ui->spinBox->value();
    float val1 = ui->doubleSpinBox->value();
    float val2 = val*val1;
    ui->doubleSpinBox_2->setValue(val2);
}


void MainWindow::dec()
{
    int val = ui->spinBox_2->value();
    ui->spinBox_3->setValue(val);
    ui->spinBox_4->setValue(val);
}


void MainWindow::bin()
{
    int val = ui->spinBox_3->value();
    ui->spinBox_2->setValue(val);
    ui->spinBox_4->setValue(val);
}

void MainWindow::hex()
{
    int val = ui->spinBox_4->value();
    ui->spinBox_3->setValue(val);
    ui->spinBox_2->setValue(val);
}
