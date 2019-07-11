
 #include <QWidget>

 class Arrow : public QWidget
 {
     Q_OBJECT

 public:
	 explicit Arrow(QWidget *p = 0):QWidget(p)
	 {
		 	 
	 }

 protected:
     void paintEvent(QPaintEvent *event);
 };
