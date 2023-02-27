#include "qgldockable.h"

mymainwindow::mymainwindow(QMainWindow* parent)
	: QMainWindow(parent)
	, ui(new Ui::mymainwindow)
{

	//QWidget* centerWidget = new QWidget;
	//setCentralWidget(centerWidget);
	//QDockWidget* dock = new QDockWidget;
	//QPushButton* btn1 = new QPushButton("Button 01");
	QOpenGLWidget* mainCanvas = new QOpenGLWidget(this);
	mainCanvas->setMinimumSize(400, 600);

	createDockWindow();
	setWindowTitle(tr("POA OpenGL"));
	QGridLayout* layout = new QGridLayout();
	layout->addWidget(mainCanvas);
	//layout->addWidget(dock);
	//layout->addWidget(btn1);
	this->setLayout(layout);
	ui->setupUi(this);
}


mymainwindow::~mymainwindow()
{
	delete ui;
}

void mymainwindow::createDockWindow()
{
	//myGrid = new QGridLayout();

	QDockWidget* dock = new QDockWidget(tr("Canvas"), this);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	canvas = new QOpenGLWidget(dock);

	//canvas->setMinimumSize(400, 600);
	canvas->setMinimumWidth(250);
	dock->setWidget(canvas);
	addDockWidget(Qt::RightDockWidgetArea, dock);
	

	QDockWidget* dock2 = new QDockWidget(tr("Lister"), this);
	dock2->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	lister = new QListWidget(dock2);
	lister->addItems(QStringList()
		<< "Lister item 1"
		<< "Lister item 2"
		<< "Lister item 3"
		<< "Lister item 4"
		<< "Lister item 5");
	dock2->setWidget(lister);
	addDockWidget(Qt::RightDockWidgetArea, dock2);

}

void mymainwindow::initializeGL()
{

}

void mymainwindow::resizeGL()
{

}

void mymainwindow::paintGL()
{

}