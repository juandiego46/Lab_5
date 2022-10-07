/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *cronometro;
    QPushButton *botonInicio;
    QLabel *temporizador;
    QLCDNumber *puntosNum;
    QLabel *puntosLit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(false);
        MainWindow->setTabletTracking(false);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(20, 20, 510, 510));
        cronometro = new QLabel(centralwidget);
        cronometro->setObjectName(QString::fromUtf8("cronometro"));
        cronometro->setGeometry(QRect(650, 40, 81, 20));
        botonInicio = new QPushButton(centralwidget);
        botonInicio->setObjectName(QString::fromUtf8("botonInicio"));
        botonInicio->setGeometry(QRect(660, 170, 83, 29));
        temporizador = new QLabel(centralwidget);
        temporizador->setObjectName(QString::fromUtf8("temporizador"));
        temporizador->setGeometry(QRect(660, 40, 91, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        temporizador->setFont(font);
        puntosNum = new QLCDNumber(centralwidget);
        puntosNum->setObjectName(QString::fromUtf8("puntosNum"));
        puntosNum->setEnabled(true);
        puntosNum->setGeometry(QRect(720, 250, 71, 71));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        puntosNum->setFont(font1);
        puntosNum->setContextMenuPolicy(Qt::DefaultContextMenu);
        puntosLit = new QLabel(centralwidget);
        puntosLit->setObjectName(QString::fromUtf8("puntosLit"));
        puntosLit->setGeometry(QRect(630, 270, 81, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        puntosLit->setFont(font2);
        puntosLit->setTextFormat(Qt::AutoText);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        cronometro->setText(QString());
        botonInicio->setText(QApplication::translate("MainWindow", "Inicio", nullptr));
        temporizador->setText(QApplication::translate("MainWindow", "C.regresiva", nullptr));
        puntosLit->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
