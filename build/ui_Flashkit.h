/********************************************************************************
** Form generated from reading UI file 'Flashkit.ui'
**
** Created: Mon Oct 10 23:44:56 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASHKIT_H
#define UI_FLASHKIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlashWindow
{
public:
    QAction *actionAbout;
    QAction *actionQuit;
    QWidget *centralwidget;
    QComboBox *aDeviceBox;
    QLabel *aDevice;
    QLabel *aROM;
    QComboBox *aROMBox;
    QLabel *aBootT;
    QComboBox *aBootTBox;
    QLabel *aBootO;
    QComboBox *aBootOBox;
    QLabel *aLinuxFS;
    QComboBox *aLinuxFSBox;
    QPushButton *pushAdvanve;
    QPushButton *pushNext1;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FlashWindow)
    {
        if (FlashWindow->objectName().isEmpty())
            FlashWindow->setObjectName(QString::fromUtf8("FlashWindow"));
        FlashWindow->resize(927, 587);
        actionAbout = new QAction(FlashWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionQuit = new QAction(FlashWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(FlashWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        aDeviceBox = new QComboBox(centralwidget);
        aDeviceBox->setObjectName(QString::fromUtf8("aDeviceBox"));
        aDeviceBox->setGeometry(QRect(100, 70, 291, 31));
        aDevice = new QLabel(centralwidget);
        aDevice->setObjectName(QString::fromUtf8("aDevice"));
        aDevice->setGeometry(QRect(20, 70, 61, 31));
        aROM = new QLabel(centralwidget);
        aROM->setObjectName(QString::fromUtf8("aROM"));
        aROM->setGeometry(QRect(20, 130, 41, 17));
        aROMBox = new QComboBox(centralwidget);
        aROMBox->setObjectName(QString::fromUtf8("aROMBox"));
        aROMBox->setGeometry(QRect(100, 120, 291, 31));
        aBootT = new QLabel(centralwidget);
        aBootT->setObjectName(QString::fromUtf8("aBootT"));
        aBootT->setGeometry(QRect(20, 180, 71, 17));
        aBootTBox = new QComboBox(centralwidget);
        aBootTBox->setObjectName(QString::fromUtf8("aBootTBox"));
        aBootTBox->setGeometry(QRect(100, 170, 291, 31));
        aBootO = new QLabel(centralwidget);
        aBootO->setObjectName(QString::fromUtf8("aBootO"));
        aBootO->setGeometry(QRect(20, 230, 81, 17));
        aBootOBox = new QComboBox(centralwidget);
        aBootOBox->setObjectName(QString::fromUtf8("aBootOBox"));
        aBootOBox->setGeometry(QRect(100, 220, 291, 31));
        aLinuxFS = new QLabel(centralwidget);
        aLinuxFS->setObjectName(QString::fromUtf8("aLinuxFS"));
        aLinuxFS->setGeometry(QRect(20, 280, 81, 17));
        aLinuxFSBox = new QComboBox(centralwidget);
        aLinuxFSBox->setObjectName(QString::fromUtf8("aLinuxFSBox"));
        aLinuxFSBox->setGeometry(QRect(100, 270, 291, 31));
        pushAdvanve = new QPushButton(centralwidget);
        pushAdvanve->setObjectName(QString::fromUtf8("pushAdvanve"));
        pushAdvanve->setGeometry(QRect(20, 500, 98, 27));
        pushNext1 = new QPushButton(centralwidget);
        pushNext1->setObjectName(QString::fromUtf8("pushNext1"));
        pushNext1->setGeometry(QRect(800, 500, 98, 27));
        FlashWindow->setCentralWidget(centralwidget);
        aLinuxFSBox->raise();
        aDeviceBox->raise();
        aDevice->raise();
        aROM->raise();
        aROMBox->raise();
        aBootT->raise();
        aBootTBox->raise();
        aBootO->raise();
        aBootOBox->raise();
        aLinuxFS->raise();
        pushAdvanve->raise();
        pushNext1->raise();
        menubar = new QMenuBar(FlashWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 927, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        FlashWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FlashWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FlashWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAbout);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(FlashWindow);

        QMetaObject::connectSlotsByName(FlashWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FlashWindow)
    {
        FlashWindow->setWindowTitle(QApplication::translate("FlashWindow", "Linux Flashkit ${VERS}", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("FlashWindow", "About", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("FlashWindow", "Quit", 0, QApplication::UnicodeUTF8));
        aDeviceBox->clear();
        aDeviceBox->insertItems(0, QStringList()
         << QApplication::translate("FlashWindow", "Asus Transformer TF101", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Samsung Galaxy Tab 10.1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Samsung Galaxy Tab 7\"", 0, QApplication::UnicodeUTF8)
        );
        aDevice->setText(QApplication::translate("FlashWindow", "Device", 0, QApplication::UnicodeUTF8));
        aROM->setText(QApplication::translate("FlashWindow", "ROM", 0, QApplication::UnicodeUTF8));
        aROMBox->clear();
        aROMBox->insertItems(0, QStringList()
         << QApplication::translate("FlashWindow", "Prime", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Revolver", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Other <Please Specify Path>", 0, QApplication::UnicodeUTF8)
        );
        aBootT->setText(QApplication::translate("FlashWindow", "Boot Type", 0, QApplication::UnicodeUTF8));
        aBootTBox->clear();
        aBootTBox->insertItems(0, QStringList()
         << QApplication::translate("FlashWindow", "Dual Boot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Android Only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Linux Only", 0, QApplication::UnicodeUTF8)
        );
        aBootO->setText(QApplication::translate("FlashWindow", "Boot Order", 0, QApplication::UnicodeUTF8));
        aBootOBox->clear();
        aBootOBox->insertItems(0, QStringList()
         << QApplication::translate("FlashWindow", "Android Primary; Linux Secondary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Linux Primary; Android Secondary", 0, QApplication::UnicodeUTF8)
        );
        aLinuxFS->setText(QApplication::translate("FlashWindow", "Linux FS", 0, QApplication::UnicodeUTF8));
        aLinuxFSBox->clear();
        aLinuxFSBox->insertItems(0, QStringList()
         << QApplication::translate("FlashWindow", "Ubuntu Natty 11.04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Ubuntu Oneiric 11.10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FlashWindow", "Other/User Supplied", 0, QApplication::UnicodeUTF8)
        );
        pushAdvanve->setText(QApplication::translate("FlashWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        pushNext1->setText(QApplication::translate("FlashWindow", "Next", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("FlashWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FlashWindow: public Ui_FlashWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHKIT_H
