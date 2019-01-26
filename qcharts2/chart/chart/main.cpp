#include "chart.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	chart w;
	w.setCentralWidget(w.creatChart());
	w.resize(400, 300);
	w.show();
	return a.exec();
}
