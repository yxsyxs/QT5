#include "samp2_1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);         //���崴��Ӧ�ó���
	samp2_1 w;                          //���岢��������
	w.show();                           //��ʾ����
	return a.exec();                    //����Ӧ�ó���
}
