#ifndef __NVSUPPORT_H__
#define __NVSUPPORT_H__
#include <QMessageBox>
#include <QMainWindow>
#include <QStatusBar>

#include "downloader.h"
#include "defines.h"

void downloadAlert(const char* reason)
{
	qDebug("NvFlash needs to be downloaded from nVidia. REASON: %s", reason);
	QMessageBox msgBox;
	msgBox.setText("NvFlash needs to be downloaded from nVidia.");
	msgBox.setInformativeText("Would you like to download it now?");
	if(reason == "0x1")
	{
		msgBox.setDetailedText("NvFlash was found in /usr/share/OLiFE/ but its hash did not match those on file. If you believe this is an error contact lilstevie with both nvflash, and the md5sum for it");
	}
	else if(reason == "0x2")
	{
		msgBox.setDetailedText("NvFlash was not found in /usr/share/OLiFE/. NvFlash is required for OLiFE to work.");
	}
	else
	{
		msgBox.setDetailedText("This outcome should not be possible, something went horribly wrong, #blamexoomdev");
	}
	msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Ok);
	msgBox.setIcon(QMessageBox::Critical);
	int ret = msgBox.exec();
	
	switch(ret)
	{
		case QMessageBox::Ok:
		download(LDK_URL, LDK);
		break;
		
		case QMessageBox::Cancel:
		break;
		
		default:
		break;
	}
}

void setStatusBar(const char* status)
{
		QString qStatus = QString::fromAscii(status);
		qDebug("status should be set as %s", status);
		QMainWindow win;
		QStatusBar statusBar;
		QLabel *qState = new QLabel("Status: ");
		
		qState->setAlignment( Qt::AlignCenter );
		qState->setText("Status: " % qStatus);
		qState->setToolTip("Indicates the current status of the program");
		
		
		statusBar.addWidget( qState );
		
}

#endif // __NVSUPPORT_H__
