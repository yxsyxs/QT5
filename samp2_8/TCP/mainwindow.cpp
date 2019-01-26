#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpServer>
#include <QTcpSocket>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mServer = new QTcpServer();

    mServer->listen(QHostAddress::Any,9988);

    connect(mServer,SIGNAL(newConnection()),this,SLOT(new_client()));
}

MainWindow::~MainWindow()
{
    delete ui;
}




