#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    QStringList baudList;//波特率
    QStringList parityList;//校验位
    QStringList dataBitsList;//数据位
    QStringList stopBitsList;//停止位


    ui->setupUi(this);

    //扫描当前串口列表并添加到显示列表
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos){
        ui->serialPortcomboBox->addItem(info.portName());}

    //波特率列表及默认选择
    baudList<<"50"<<"75"<<"100"<<"134"<<"150"<<"200"<<"300"
           <<"600"<<"1200"<<"1800"<<"2400"<<"4800"<<"9600"
          <<"14400"<<"19200"<<"38400"<<"56000"<<"57600"
         <<"76800"<<"115200"<<"128000"<<"256000";
    ui->comboBox_2->addItems(baudList);
    ui->comboBox_2->setCurrentIndex(12);

    //数据位选择列表
    dataBitsList<<"5"<<"6"<<"7"<<"8";
    ui->comboBox_3->addItems(dataBitsList);
    ui->comboBox_3->setCurrentIndex(3);

    //校验位选择列表
    parityList<<"无"<<"奇"<<"偶";
    parityList<<"标志";
    parityList<<"空格";
    ui->comboBox_4->addItems(parityList);
    ui->comboBox_4->setCurrentIndex(0);

    //停止位选择列表
    stopBitsList<<"1";
    stopBitsList<<"1.5";
    stopBitsList<<"2";
    ui->comboBox_5->addItems(stopBitsList);
    ui->comboBox_5->setCurrentIndex(0);

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_btnOpen_clicked()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_btnSend_clicked()));

}

Widget::~Widget()
{
    delete ui;
}


/****************************串口设置******************************/
void Widget::on_btnOpen_clicked()
{
    if(ui->pushButton_2->text() == "打开串口")
    {
        my_serialport = new QSerialPort(this);

        //设置串口号
        my_serialport->setPortName(ui->serialPortcomboBox->currentText());
        //以读写方式打开串口
        if(my_serialport->open(QIODevice::ReadWrite))
        {
            //设置波特率
            my_serialport->setBaudRate(ui->comboBox_2->currentText().toInt());
            //设置数据位
            my_serialport->setDataBits(QSerialPort::Data8);
            //设置校验位
            my_serialport->setParity(QSerialPort::NoParity);
            //设置流控制
            my_serialport->setFlowControl(QSerialPort::NoFlowControl);
            //设置停止位
            my_serialport->setStopBits(QSerialPort::OneStop);

            //每秒读一次
            timer = new QTimer(this);
            connect(timer, SIGNAL(timeout()), this, SLOT(readComDataSlot()));
            timer->start(100);

          //  setNonSelectable();
             ui->pushButton_2->setText("关闭串口");
        }
        else
        {
           // QMessageBox::about(NULL, "提示", "串口没有打开！");
            return;
        }
    }
    else
    {
        timer->stop();
        //setSelectable();
        ui->pushButton_2->setText("打开串口");
        my_serialport->close();
    }
}


/****************************数据传输******************************/
void Widget::readComDataSlot()
{
    //读取串口数据
    QByteArray readComData = my_serialport->readAll();

    //将读到的数据显示到数据接收区的te中
    if(readComData != NULL)
    {
        ui->textEdit->append(readComData);
    }

    //清除缓冲区
    readComData.clear();
}


void Widget::on_btnSend_clicked()
{
    //获取发送区的数据
    QString sendData = ui->textEdit_2->toPlainText();
    QByteArray sendData_2 = sendData.toLatin1();

    //写入缓冲区
    my_serialport->write(sendData_2);
}
