#include "gaztcorrection.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GaztCorrection w;
	w.show();
	
	return a.exec();
}
