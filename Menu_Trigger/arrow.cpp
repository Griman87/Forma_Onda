#include "stdafx.h"
#include <QtGui>

#include "arrow.h"


 void Arrow::paintEvent(QPaintEvent *)
 {

	 static const QPoint hourHand[3] = {
        QPoint(2, 4),
        QPoint(-2, 4),
        QPoint(0, -70)
    };

 QPainter painter(this);
	 QPixmap pixmap;
        // Set up a convenient path

		/*
        qreal nActualDiameter = 2 * 100.0;
        pixmap = QPixmap( nActualDiameter, nActualDiameter );
        pixmap.fill( Qt::transparent );
        QPainter p( &pixmap );
*/
		painter.drawLine(151,20,332,20);
		

		painter.drawPixmap( 100.0, 100.0, pixmap );

		


 }