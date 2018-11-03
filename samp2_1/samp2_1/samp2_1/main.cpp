#include "samp2_1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);         //定义创建应用程序
	samp2_1 w;                          //定义并创建窗口
	w.show();                           //显示窗口
	return a.exec();                    //运行应用程序
}
