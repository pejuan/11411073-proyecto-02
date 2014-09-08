/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_1;
    QWidget *tab;
    QPushButton *pushButton;
    QLineEdit *tf_marca;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *tf_placa;
    QLabel *label_3;
    QDoubleSpinBox *sp_tanque;
    QLabel *label_4;
    QSpinBox *sp_cilindraje;
    QLineEdit *tf_owner;
    QLabel *label_5;
    QComboBox *cb_tipo;
    QLabel *label_6;
    QWidget *tab_2;
    QTableWidget *Tabla_carros;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(780, 551);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_1 = new QTabWidget(centralWidget);
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tab_1->setGeometry(QRect(0, 0, 771, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 330, 151, 61));
        tf_marca = new QLineEdit(tab);
        tf_marca->setObjectName(QStringLiteral("tf_marca"));
        tf_marca->setGeometry(QRect(120, 80, 141, 27));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 111, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 150, 41, 17));
        tf_placa = new QLineEdit(tab);
        tf_placa->setObjectName(QStringLiteral("tf_placa"));
        tf_placa->setGeometry(QRect(120, 140, 113, 27));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 200, 67, 17));
        sp_tanque = new QDoubleSpinBox(tab);
        sp_tanque->setObjectName(QStringLiteral("sp_tanque"));
        sp_tanque->setGeometry(QRect(470, 190, 101, 27));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 190, 111, 20));
        sp_cilindraje = new QSpinBox(tab);
        sp_cilindraje->setObjectName(QStringLiteral("sp_cilindraje"));
        sp_cilindraje->setGeometry(QRect(120, 190, 71, 27));
        tf_owner = new QLineEdit(tab);
        tf_owner->setObjectName(QStringLiteral("tf_owner"));
        tf_owner->setGeometry(QRect(120, 260, 161, 27));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 270, 67, 17));
        cb_tipo = new QComboBox(tab);
        cb_tipo->setObjectName(QStringLiteral("cb_tipo"));
        cb_tipo->setGeometry(QRect(460, 80, 211, 27));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 80, 41, 17));
        tab_1->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Tabla_carros = new QTableWidget(tab_2);
        Tabla_carros->setObjectName(QStringLiteral("Tabla_carros"));
        Tabla_carros->setGeometry(QRect(25, 20, 701, 401));
        tab_1->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 780, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tab_1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Agregar Carro", 0));
        label->setText(QApplication::translate("MainWindow", "Marca de carro:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Placa:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Cilindraje", 0));
        label_4->setText(QApplication::translate("MainWindow", "Litros a llenar:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Due\303\261o:", 0));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1) Super (22.50 Lps.)", 0)
         << QApplication::translate("MainWindow", "2) Regular (17.80 Lps.)", 0)
         << QApplication::translate("MainWindow", "3) Diesel (19.00 Lps.)", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Tipo:", 0));
        tab_1->setTabText(tab_1->indexOf(tab), QApplication::translate("MainWindow", "Agregar Carros", 0));
        tab_1->setTabText(tab_1->indexOf(tab_2), QApplication::translate("MainWindow", "Ver Rendimientos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
