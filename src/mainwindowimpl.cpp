#include <QMainWindow>
#include <QPushButton>
#include "uibuttons.h"
#include "mainwindowimpl.h"

//
MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);
	QPushButton *bkpBtn = new QPushButton("&Backup", this);
	bkpBtn->setGeometry(85, 85, 115, 115);
}
//
