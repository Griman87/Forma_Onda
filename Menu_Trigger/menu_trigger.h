#ifndef MENU_TRIGGER_H
#define MENU_TRIGGER_H

#include <QtGui/QMainWindow>
#include "ui_menu_trigger.h"

class Menu_Trigger : public QMainWindow
{
	Q_OBJECT

public:
	Menu_Trigger(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Menu_Trigger();

private:
	Ui::Menu_TriggerClass ui;

	public slots:
		void Fin_Tramo1();
		void Fin_Tramo2();
		void Fin_Tramo3();
		void Fin_Tramo4();
		void Fin_Tramo5();
		void Fin_Tramo6();
		void Fin_Tramo7();
		void Fin_Tramo8();
		void Fin_Tramo9();
};

#endif // MENU_TRIGGER_H
