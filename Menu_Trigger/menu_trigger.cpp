#include "stdafx.h"
#include "menu_trigger.h"



Menu_Trigger::Menu_Trigger(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{

	ui.setupUi(this);
	
	int duracion = 2000;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(99,78,5,5));
	animation_trigger->setEndValue(QRect(148,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo1()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(99,158,5,5));
	animation_iout->setEndValue(QRect(148,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();


}

Menu_Trigger::~Menu_Trigger()
{

}

void Menu_Trigger::Fin_Tramo1()
{
	int duracion = 428;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(148,38,5,5));
	animation_trigger->setEndValue(QRect(163,38,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo2()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(148,158,5,5));
	animation_iout->setEndValue(QRect(163,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo2()
{
	int duracion = 428;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(163,78,5,5));
	animation_trigger->setEndValue(QRect(178,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo3()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(163,158,5,5));
	animation_iout->setEndValue(QRect(178,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo3()
{
	int duracion = 1028;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(178,78,5,5));
	animation_trigger->setEndValue(QRect(214,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo4()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(178,118,5,5));
	animation_iout->setEndValue(QRect(214,118,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo4()
{
	int duracion = 400;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(214,38,5,5));
	animation_trigger->setEndValue(QRect(228,38,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo5()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(214,118,5,5));
	animation_iout->setEndValue(QRect(228,118,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo5()
{
	int duracion = 1143;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(228,78,5,5));
	animation_trigger->setEndValue(QRect(268,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo6()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(228,118,5,5));
	animation_iout->setEndValue(QRect(268,118,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo6()
{
	int duracion = 285;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(268,78,5,5));
	animation_trigger->setEndValue(QRect(278,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo7()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(268,158,5,5));
	animation_iout->setEndValue(QRect(278,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo7()
{
	int duracion = 428;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(278,38,5,5));
	animation_trigger->setEndValue(QRect(293,38,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo8()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(278,158,5,5));
	animation_iout->setEndValue(QRect(293,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo8()
{
	int duracion = 1428;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(293,78,5,5));
	animation_trigger->setEndValue(QRect(344,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo9()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(293,158,5,5));
	animation_iout->setEndValue(QRect(344,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}

void Menu_Trigger::Fin_Tramo9()
{
	int duracion = 2000;

	QPropertyAnimation * animation_trigger = new QPropertyAnimation(ui.Punto_trigger,"geometry");
	animation_trigger->setDuration(duracion);
	animation_trigger->setStartValue(QRect(99,78,5,5));
	animation_trigger->setEndValue(QRect(148,78,5,5));
	animation_trigger->setLoopCount(1);
	animation_trigger->connect(animation_trigger,SIGNAL(finished()),this,SLOT(Fin_Tramo1()));
	animation_trigger->start();

	QPropertyAnimation * animation_iout = new QPropertyAnimation(ui.Punto_iout,"geometry");
	animation_iout->setDuration(duracion);
	animation_iout->setStartValue(QRect(99,158,5,5));
	animation_iout->setEndValue(QRect(148,158,5,5));
	animation_iout->setLoopCount(1);
	animation_iout->start();
}