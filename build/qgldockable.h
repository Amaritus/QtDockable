#ifndef QGLDOCKABLE_H
#define QGLDOCKABLE_H

#include <qmainwindow.h>
#include <qwidget.h>
#include <qopengl.h>
#include <qopenglfunctions.h>
#include <qopenglextrafunctions.h>
#include <qopenglfunctions_3_3_core.h>
#include <qdockwidget.h>
#include <qopenglwidget.h>
#include <qlistwidget.h>
#include <qlayout.h>
#include <qpushbutton.h>

#include <ui_qgldockable.h>

class mymainwindow : public QMainWindow
{

public:
	explicit mymainwindow(QMainWindow* parent = NULL);
	~mymainwindow();

private:
	void createDockWindow();
	Ui::mymainwindow* ui;
	QGridLayout* myGrid;
	QWidget* centerWidget;
	QOpenGLWidget* canvas;
	QListWidget* lister;


protected:

	void initializeGL();
	void resizeGL();
	void paintGL();
};


#endif