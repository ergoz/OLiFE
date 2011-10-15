#ifndef FLASHKITIMPL_H
#define FLASHKITIMPL_H
//
#include <QMainWindow>
#include "ui_Flashkit.h"
//
class FlashWindowimpl : public QMainWindow, public Ui::FlashWindow
{
Q_OBJECT
public:
	FlashWindowimpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private slots:
	};
#endif




