#include <QStatusBar>
#include <QPushButton>
#include <QMainWindow>
#include "mainwindowimpl.h"

//
MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);
	m_button = new QPushButton("&Backup", this);
	m_button->setGeometry(QRect(QPoint(110,110),
								QSize(200, 200)));
	m_button->setEnabled(true);
}
//
