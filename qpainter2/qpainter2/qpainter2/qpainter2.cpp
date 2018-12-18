#include "qpainter2.h"
#include "Qpainter.h"
qpainter2::qpainter2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}


void qpainter2::paintEvent(QPaintEvent *event){
    
	QPainter painter(this);

	//set pen property
	QPen pen;
	pen.setColor(Qt::red);
	pen.setWidth(5);
	pen.setStyle(Qt::DotLine);
	painter.setPen(pen);
	
	//set brush property
	QBrush brush;
	brush.setColor(Qt::blue);
	brush.setStyle(Qt::SolidPattern);
	painter.setBrush(brush);

	//draw
	painter.drawRect(20, 20, 80, 80);
	painter.drawRect(40, 40, 80, 80);

}