#include "chart.h"
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

chart::chart(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}


QChartView* chart::creatChart(void)
{
	//![1]
	QLineSeries *series = new QLineSeries();
	//![1]

	//![2]
	series->append(0, 1);
	series->append(2, 3);
	series->append(3, 5);
	series->append(7, 7);
	series->append(10, 8);
	*series << QPointF(11, 9) << QPointF(13, 12) << QPointF(17, 18) << QPointF(18, 19) << QPointF(20, 20);
	//![2]

	//![3]
	QChart *chart = new QChart();
	chart->legend()->hide();
	chart->addSeries(series);
	chart->createDefaultAxes();
	chart->setTitle("Simple line chart example");
	//![3]

	//![4]
	QChartView *chartView = new QChartView(chart);
	chartView->setRenderHint(QPainter::Antialiasing);
	//![4]

	return chartView;
	////![5]
	//QMainWindow window;
	//window.setCentralWidget(chartView);
	//window.resize(400, 300);
	//window.show();
	////![5]
}