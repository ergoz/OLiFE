#include <QApplication>
#include <QtGui>
#include <QWidget>
#include <QStatusBar>
#include "mainwindowimpl.h"
#include "nvsupport.h"
#include "nvhash.h"
#include "file.h"
#include "downloader.h"

#include "defines.h"

void NvSupport()
{
	
	if(FileTest(NVFLASH_PATH) == true)
	{
		if(HashCmp(NVFLASH_PATH) != true )
		{
			downloadAlert("0x1");
		}
		else;
		{
		setStatusBar("Ready");
		}
	}
	else
	{
		setStatusBar("NvFlash not found");
		downloadAlert("0x2");
	}
}

int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	MainWindowImpl win;
	QString qver = QString::fromAscii(vers);
	QString qWin = QString("OLiFE " % qver);
	win.setWindowTitle(qWin);
	win.show(); 
	NvSupport();
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
