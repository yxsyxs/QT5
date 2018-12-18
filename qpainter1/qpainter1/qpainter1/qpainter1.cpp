#include "qpainter1.h"
#include "QPainter.h"

qpainter1::qpainter1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	resize(800, 600);
	setWindowTitle(tr("Paint Demo"));
}



void qpainter1::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	painter.drawLine(80, 100, 650, 500);
	painter.setPen(Qt::red);
	painter.drawRect(10, 10, 100, 400);
	painter.setPen(QPen(Qt::green, 5));
	painter.setBrush(Qt::blue);
	painter.drawEllipse(50, 150, 400, 200);
	
}