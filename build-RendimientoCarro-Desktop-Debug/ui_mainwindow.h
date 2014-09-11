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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_1;
    QWidget *tab;
    QPushButton *boton_agregarcarro;
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
    QWidget *tab_3;
    QComboBox *cb_carros;
    QDoubleSpinBox *sp_litrosallenar;
    QLabel *label_7;
    QPushButton *boton_llenar;
    QLabel *label_8;
    QDoubleSpinBox *sp_kmrecorridos;
    QLabel *label_9;
    QWidget *tab_2;
    QComboBox *cb_listacarros2;
    QPushButton *boton_ver_rendimiento;
    QTextEdit *ta_rendimiento;
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
        boton_agregarcarro = new QPushButton(tab);
        boton_agregarcarro->setObjectName(QStringLiteral("boton_agregarcarro"));
        boton_agregarcarro->setGeometry(QRect(460, 330, 151, 61));
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
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        cb_carros = new QComboBox(tab_3);
        cb_carros->setObjectName(QStringLiteral("cb_carros"));
        cb_carros->setGeometry(QRect(10, 100, 401, 41));
        sp_litrosallenar = new QDoubleSpinBox(tab_3);
        sp_litrosallenar->setObjectName(QStringLiteral("sp_litrosallenar"));
        sp_litrosallenar->setGeometry(QRect(580, 140, 69, 27));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 146, 101, 21));
        boton_llenar = new QPushButton(tab_3);
        boton_llenar->setObjectName(QStringLiteral("boton_llenar"));
        boton_llenar->setGeometry(QRect(530, 210, 121, 41));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 60, 101, 21));
        sp_kmrecorridos = new QDoubleSpinBox(tab_3);
        sp_kmrecorridos->setObjectName(QStringLiteral("sp_kmrecorridos"));
        sp_kmrecorridos->setGeometry(QRect(580, 80, 69, 27));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(456, 80, 101, 31));
        tab_1->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        cb_listacarros2 = new QComboBox(tab_2);
        cb_listacarros2->setObjectName(QStringLiteral("cb_listacarros2"));
        cb_listacarros2->setGeometry(QRect(10, 40, 341, 27));
        boton_ver_rendimiento = new QPushButton(tab_2);
        boton_ver_rendimiento->setObjectName(QStringLiteral("boton_ver_rendimiento"));
        boton_ver_rendimiento->setGeometry(QRect(520, 20, 131, 41));
        ta_rendimiento = new QTextEdit(tab_2);
        ta_rendimiento->setObjectName(QStringLiteral("ta_rendimiento"));
        ta_rendimiento->setEnabled(true);
        ta_rendimiento->setGeometry(QRect(430, 90, 331, 321));
        ta_rendimiento->setReadOnly(true);
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

        tab_1->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        boton_agregarcarro->setText(QApplication::translate("MainWindow", "Agregar Carro", 0));
        label->setText(QApplication::translate("MainWindow", "Marca de carro:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Placa:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Cilindraje", 0));
        label_4->setText(QApplication::translate("MainWindow", "Litros a llenar:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Due\303\261o:", 0));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Super", 0)
         << QApplication::translate("MainWindow", "Regular", 0)
         << QApplication::translate("MainWindow", "Diesel", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Tipo:", 0));
        tab_1->setTabText(tab_1->indexOf(tab), QApplication::translate("MainWindow", "Agregar Carros", 0));
        label_7->setText(QApplication::translate("MainWindow", "Litros a llenar", 0));
        boton_llenar->setText(QApplication::translate("MainWindow", "Llenar", 0));
        label_8->setText(QApplication::translate("MainWindow", "Lista de carros", 0));
        label_9->setText(QApplication::translate("MainWindow", "Km recorridos", 0));
        tab_1->setTabText(tab_1->indexOf(tab_3), QApplication::translate("MainWindow", "Llenar tanque", 0));
        boton_ver_rendimiento->setText(QApplication::translate("MainWindow", "Ver rendimiento", 0));
        tab_1->setTabText(tab_1->indexOf(tab_2), QApplication::translate("MainWindow", "Ver Rendimientos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
