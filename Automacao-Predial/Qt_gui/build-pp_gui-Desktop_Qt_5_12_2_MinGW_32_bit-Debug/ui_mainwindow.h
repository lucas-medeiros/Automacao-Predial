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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
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
    QProgressBar *progressBar_cano1;
    QCheckBox *checkBox_b1;
    QProgressBar *progressBar_cano2;
    QProgressBar *progressBar_cano3;
    QCheckBox *checkBox_s21;
    QProgressBar *progressBar_tanque2;
    QCheckBox *checkBox_s22;
    QProgressBar *progressBar_tanque3;
    QCheckBox *checkBox_s32;
    QCheckBox *checkBox_s31;
    QCheckBox *checkBox_v2;
    QCheckBox *checkBox_r1;
    QLabel *label_temperatura;
    QLabel *label_text;
    QLabel *label_niveltanque2;
    QLabel *label_niveltanque3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1215, 557);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox_v1 = new QCheckBox(centralWidget);
        checkBox_v1->setObjectName(QString::fromUtf8("checkBox_v1"));
        checkBox_v1->setGeometry(QRect(10, 320, 70, 17));
        checkBox_s12 = new QCheckBox(centralWidget);
        checkBox_s12->setObjectName(QString::fromUtf8("checkBox_s12"));
        checkBox_s12->setGeometry(QRect(270, 190, 70, 17));
        checkBox_s11 = new QCheckBox(centralWidget);
        checkBox_s11->setObjectName(QString::fromUtf8("checkBox_s11"));
        checkBox_s11->setGeometry(QRect(270, 350, 70, 17));
        progressBar_tanque1 = new QProgressBar(centralWidget);
        progressBar_tanque1->setObjectName(QString::fromUtf8("progressBar_tanque1"));
        progressBar_tanque1->setGeometry(QRect(60, 180, 200, 200));
        progressBar_tanque1->setValue(24);
        progressBar_tanque1->setTextVisible(false);
        progressBar_tanque1->setOrientation(Qt::Vertical);
        progressBar_cano1 = new QProgressBar(centralWidget);
        progressBar_cano1->setObjectName(QString::fromUtf8("progressBar_cano1"));
        progressBar_cano1->setGeometry(QRect(140, 400, 261, 23));
        progressBar_cano1->setValue(24);
        progressBar_cano1->setTextVisible(false);
        checkBox_b1 = new QCheckBox(centralWidget);
        checkBox_b1->setObjectName(QString::fromUtf8("checkBox_b1"));
        checkBox_b1->setGeometry(QRect(410, 400, 83, 22));
        progressBar_cano2 = new QProgressBar(centralWidget);
        progressBar_cano2->setObjectName(QString::fromUtf8("progressBar_cano2"));
        progressBar_cano2->setGeometry(QRect(400, 190, 31, 201));
        progressBar_cano2->setValue(24);
        progressBar_cano2->setTextVisible(false);
        progressBar_cano2->setOrientation(Qt::Vertical);
        progressBar_cano3 = new QProgressBar(centralWidget);
        progressBar_cano3->setObjectName(QString::fromUtf8("progressBar_cano3"));
        progressBar_cano3->setGeometry(QRect(400, 160, 101, 23));
        progressBar_cano3->setValue(24);
        progressBar_cano3->setTextVisible(false);
        checkBox_s21 = new QCheckBox(centralWidget);
        checkBox_s21->setObjectName(QString::fromUtf8("checkBox_s21"));
        checkBox_s21->setGeometry(QRect(730, 350, 70, 17));
        progressBar_tanque2 = new QProgressBar(centralWidget);
        progressBar_tanque2->setObjectName(QString::fromUtf8("progressBar_tanque2"));
        progressBar_tanque2->setGeometry(QRect(520, 180, 200, 200));
        progressBar_tanque2->setValue(50);
        progressBar_tanque2->setTextVisible(false);
        progressBar_tanque2->setOrientation(Qt::Vertical);
        checkBox_s22 = new QCheckBox(centralWidget);
        checkBox_s22->setObjectName(QString::fromUtf8("checkBox_s22"));
        checkBox_s22->setGeometry(QRect(730, 180, 70, 17));
        progressBar_tanque3 = new QProgressBar(centralWidget);
        progressBar_tanque3->setObjectName(QString::fromUtf8("progressBar_tanque3"));
        progressBar_tanque3->setGeometry(QRect(820, 280, 100, 100));
        progressBar_tanque3->setMaximum(50);
        progressBar_tanque3->setValue(50);
        progressBar_tanque3->setTextVisible(false);
        progressBar_tanque3->setOrientation(Qt::Vertical);
        checkBox_s32 = new QCheckBox(centralWidget);
        checkBox_s32->setObjectName(QString::fromUtf8("checkBox_s32"));
        checkBox_s32->setGeometry(QRect(940, 290, 70, 17));
        checkBox_s31 = new QCheckBox(centralWidget);
        checkBox_s31->setObjectName(QString::fromUtf8("checkBox_s31"));
        checkBox_s31->setGeometry(QRect(940, 360, 70, 17));
        checkBox_v2 = new QCheckBox(centralWidget);
        checkBox_v2->setObjectName(QString::fromUtf8("checkBox_v2"));
        checkBox_v2->setGeometry(QRect(770, 310, 83, 22));
        checkBox_r1 = new QCheckBox(centralWidget);
        checkBox_r1->setObjectName(QString::fromUtf8("checkBox_r1"));
        checkBox_r1->setGeometry(QRect(870, 390, 83, 22));
        label_temperatura = new QLabel(centralWidget);
        label_temperatura->setObjectName(QString::fromUtf8("label_temperatura"));
        label_temperatura->setGeometry(QRect(870, 240, 55, 16));
        label_text = new QLabel(centralWidget);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setGeometry(QRect(850, 220, 81, 16));
        label_niveltanque2 = new QLabel(centralWidget);
        label_niveltanque2->setObjectName(QString::fromUtf8("label_niveltanque2"));
        label_niveltanque2->setGeometry(QRect(590, 90, 47, 13));
        label_niveltanque3 = new QLabel(centralWidget);
        label_niveltanque3->setObjectName(QString::fromUtf8("label_niveltanque3"));
        label_niveltanque3->setGeometry(QRect(860, 150, 47, 13));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1215, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_v1->setText(QApplication::translate("MainWindow", "v1", nullptr));
        checkBox_s12->setText(QApplication::translate("MainWindow", "s12", nullptr));
        checkBox_s11->setText(QApplication::translate("MainWindow", "s11", nullptr));
        checkBox_b1->setText(QApplication::translate("MainWindow", "b1", nullptr));
        checkBox_s21->setText(QApplication::translate("MainWindow", "s21", nullptr));
        checkBox_s22->setText(QApplication::translate("MainWindow", "s22", nullptr));
        checkBox_s32->setText(QApplication::translate("MainWindow", "s32", nullptr));
        checkBox_s31->setText(QApplication::translate("MainWindow", "s31", nullptr));
        checkBox_v2->setText(QApplication::translate("MainWindow", "v2", nullptr));
        checkBox_r1->setText(QApplication::translate("MainWindow", "R", nullptr));
        label_temperatura->setText(QApplication::translate("MainWindow", "25", nullptr));
        label_text->setText(QApplication::translate("MainWindow", "Temperatura:", nullptr));
        label_niveltanque2->setText(QString());
        label_niveltanque3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
