#include "stdafx.h"
#include "menu_trigger.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Menu_Trigger w;
	w.show();
	return a.exec();
}
