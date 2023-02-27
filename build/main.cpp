#include <qgldockable.h>
#include <QtWidgets/qapplication.h>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);

	QSurfaceFormat format;
	format.setMajorVersion(3);
	format.setMinorVersion(3);
	format.setProfile(QSurfaceFormat::CoreProfile);
	QSurfaceFormat::setDefaultFormat(format);

	mymainwindow w;
	w.show();
	return a.exec();
}