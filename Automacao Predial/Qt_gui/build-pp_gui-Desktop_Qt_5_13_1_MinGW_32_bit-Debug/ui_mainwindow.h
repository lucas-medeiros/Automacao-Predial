/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_v1;
    QCheckBox *checkBox_s12;
    QCheckBox *checkBox_s11;
    QProgressBar *progressBar_tanque1;
    QProgressBar *progressBar_tanque2;
    QCheckBox *checkBox_s22;
    QCheckBox *checkBox_s21;
    QCheckBox *checkBox_bomba;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox_v1 = new QCheckBox(centralWidget);
        checkBox_v1->setObjectName(QString::fromUtf8("checkBox_v1"));
        checkBox_v1->setGeometry(QRect(10, 110, 70, 17));
        checkBox_s12 = new QCheckBox(centralWidget);
        checkBox_s12->setObjectName(QString::fromUtf8("checkBox_s12"));
        checkBox_s12->setGeometry(QRect(160, 70, 70, 17));
        checkBox_s11 = new QCheckBox(centralWidget);
        checkBox_s11->setObjectName(QString::fromUtf8("checkBox_s11"));
        checkBox_s11->setGeometry(QRect(160, 140, 70, 17));
        progressBar_tanque1 = new QProgressBar(centralWidget);
        progressBar_tanque1->setObjectName(QString::fromUtf8("progressBar_tanque1"));
        progressBar_tanque1->setGeometry(QRect(60, 70, 91, 91));
        progressBar_tanque1->setValue(24);
        progressBar_tanque1->setOrientation(Qt::Vertical);
        progressBar_tanque2 = new QProgressBar(centralWidget);
        progressBar_tanque2->setObjectName(QString::fromUtf8("progressBar_tanque2"));
        progressBar_tanque2->setGeometry(QRect(240, 70, 91, 91));
        progressBar_tanque2->setValue(24);
        progressBar_tanque2->setOrientation(Qt::Vertical);
        checkBox_s22 = new QCheckBox(centralWidget);
        checkBox_s22->setObjectName(QString::fromUtf8("checkBox_s22"));
        checkBox_s22->setGeometry(QRect(340, 70, 70, 17));
        checkBox_s21 = new QCheckBox(centralWidget);
        checkBox_s21->setObjectName(QString::fromUtf8("checkBox_s21"));
        checkBox_s21->setGeometry(QRect(340, 150, 70, 17));
        checkBox_bomba = new QCheckBox(centralWidget);
        checkBox_bomba->setObjectName(QString::fromUtf8("checkBox_bomba"));
        checkBox_bomba->setGeometry(QRect(180, 110, 70, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_v1->setText(QCoreApplication::translate("MainWindow", "v1", nullptr));
        checkBox_s12->setText(QCoreApplication::translate("MainWindow", "s12", nullptr));
        checkBox_s11->setText(QCoreApplication::translate("MainWindow", "s11", nullptr));
        checkBox_s22->setText(QCoreApplication::translate("MainWindow", "s22", nullptr));
        checkBox_s21->setText(QCoreApplication::translate("MainWindow", "s21", nullptr));
        checkBox_bomba->setText(QCoreApplication::translate("MainWindow", "bomba", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
