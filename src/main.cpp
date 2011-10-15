#include <QApplication>
#include "flashkitimpl.h"
#include <QtGui>
#include "ui_Flashkit.h"
#define VERS = 1.2a

//
int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	FlashWindowimpl win;
	win.show(); 
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
