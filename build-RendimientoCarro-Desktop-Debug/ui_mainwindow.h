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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QWidget *tab_4;
    QComboBox *cb_carroseliminar;
    QPushButton *boton_eliminar_carro;
    QTextEdit *ta_rendimientoeliminar;
    QWidget *tab_5;
    QComboBox *cb_carrosmodificar;
    QLineEdit *tf_marcamod;
    QLineEdit *tf_placamod;
    QSpinBox *sp_cilindrajemod;
    QLineEdit *tf_ownermod;
    QComboBox *cb_tipomod;
    QDoubleSpinBox *sp_tanquemod;
    QPushButton *pushButton;
    QPushButton *boton_modificar;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *tab_3;
    QComboBox *cb_carros;
    QDoubleSpinBox *sp_litrosallenar;
    QLabel *label_7;
    QPushButton *boton_llenar;
    QLabel *label_8;
    QDoubleSpinBox *sp_kmrecorridos;
    QLabel *label_9;
    QDateEdit *date_fecha;
    QLabel *label_10;
    QLineEdit *label_compratipo;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QFrame *line;
    QFrame *line_2;
    QWidget *tab_2;
    QComboBox *cb_listacarros2;
    QPushButton *boton_ver_rendimiento;
    QTextEdit *ta_rendimiento;
    QTextEdit *ta_llenados;
    QLabel *label_22;
    QPushButton *boton_descargardatos;
    QPushButton *boton_guardardatos;
    QMenuBar *menuBar;
    QMenu *menuPejuan_s_Vehicle_Examiner;
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
        tab_1->setGeometry(QRect(0, 30, 771, 441));
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
        label_4->setGeometry(QRect(390, 190, 61, 20));
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
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        cb_carroseliminar = new QComboBox(tab_4);
        cb_carroseliminar->setObjectName(QStringLiteral("cb_carroseliminar"));
        cb_carroseliminar->setGeometry(QRect(10, 110, 401, 27));
        boton_eliminar_carro = new QPushButton(tab_4);
        boton_eliminar_carro->setObjectName(QStringLiteral("boton_eliminar_carro"));
        boton_eliminar_carro->setGeometry(QRect(550, 90, 111, 61));
        ta_rendimientoeliminar = new QTextEdit(tab_4);
        ta_rendimientoeliminar->setObjectName(QStringLiteral("ta_rendimientoeliminar"));
        ta_rendimientoeliminar->setGeometry(QRect(480, 190, 271, 211));
        tab_1->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        cb_carrosmodificar = new QComboBox(tab_5);
        cb_carrosmodificar->setObjectName(QStringLiteral("cb_carrosmodificar"));
        cb_carrosmodificar->setGeometry(QRect(30, 50, 331, 27));
        tf_marcamod = new QLineEdit(tab_5);
        tf_marcamod->setObjectName(QStringLiteral("tf_marcamod"));
        tf_marcamod->setGeometry(QRect(570, 30, 151, 27));
        tf_placamod = new QLineEdit(tab_5);
        tf_placamod->setObjectName(QStringLiteral("tf_placamod"));
        tf_placamod->setGeometry(QRect(570, 80, 151, 27));
        sp_cilindrajemod = new QSpinBox(tab_5);
        sp_cilindrajemod->setObjectName(QStringLiteral("sp_cilindrajemod"));
        sp_cilindrajemod->setGeometry(QRect(570, 130, 48, 27));
        sp_cilindrajemod->setMinimum(2);
        sp_cilindrajemod->setMaximum(12);
        tf_ownermod = new QLineEdit(tab_5);
        tf_ownermod->setObjectName(QStringLiteral("tf_ownermod"));
        tf_ownermod->setGeometry(QRect(570, 180, 151, 27));
        cb_tipomod = new QComboBox(tab_5);
        cb_tipomod->setObjectName(QStringLiteral("cb_tipomod"));
        cb_tipomod->setGeometry(QRect(570, 240, 171, 27));
        sp_tanquemod = new QDoubleSpinBox(tab_5);
        sp_tanquemod->setObjectName(QStringLiteral("sp_tanquemod"));
        sp_tanquemod->setGeometry(QRect(570, 300, 69, 27));
        pushButton = new QPushButton(tab_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 360, 81, 31));
        boton_modificar = new QPushButton(tab_5);
        boton_modificar->setObjectName(QStringLiteral("boton_modificar"));
        boton_modificar->setGeometry(QRect(610, 350, 81, 41));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(480, 40, 67, 17));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(480, 90, 41, 17));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(466, 140, 71, 20));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(490, 190, 51, 17));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(500, 250, 41, 17));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(480, 310, 67, 17));
        tab_1->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        cb_carros = new QComboBox(tab_3);
        cb_carros->setObjectName(QStringLiteral("cb_carros"));
        cb_carros->setGeometry(QRect(10, 100, 401, 41));
        sp_litrosallenar = new QDoubleSpinBox(tab_3);
        sp_litrosallenar->setObjectName(QStringLiteral("sp_litrosallenar"));
        sp_litrosallenar->setGeometry(QRect(540, 270, 101, 27));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 270, 101, 21));
        boton_llenar = new QPushButton(tab_3);
        boton_llenar->setObjectName(QStringLiteral("boton_llenar"));
        boton_llenar->setGeometry(QRect(520, 360, 121, 41));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 60, 101, 21));
        sp_kmrecorridos = new QDoubleSpinBox(tab_3);
        sp_kmrecorridos->setObjectName(QStringLiteral("sp_kmrecorridos"));
        sp_kmrecorridos->setGeometry(QRect(540, 200, 111, 27));
        sp_kmrecorridos->setMaximum(999.99);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 200, 101, 31));
        date_fecha = new QDateEdit(tab_3);
        date_fecha->setObjectName(QStringLiteral("date_fecha"));
        date_fecha->setGeometry(QRect(540, 130, 110, 27));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 140, 41, 21));
        label_compratipo = new QLineEdit(tab_3);
        label_compratipo->setObjectName(QStringLiteral("label_compratipo"));
        label_compratipo->setGeometry(QRect(560, 30, 113, 27));
        label_compratipo->setReadOnly(true);
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(436, 30, 121, 20));
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(70, 230, 121, 17));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 270, 121, 17));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(50, 310, 131, 17));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 350, 111, 17));
        line = new QFrame(tab_3);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 210, 231, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 220, 20, 171));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
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
        ta_llenados = new QTextEdit(tab_2);
        ta_llenados->setObjectName(QStringLiteral("ta_llenados"));
        ta_llenados->setGeometry(QRect(50, 160, 311, 231));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(120, 130, 151, 17));
        tab_1->addTab(tab_2, QString());
        boton_descargardatos = new QPushButton(centralWidget);
        boton_descargardatos->setObjectName(QStringLiteral("boton_descargardatos"));
        boton_descargardatos->setGeometry(QRect(400, 0, 121, 27));
        boton_guardardatos = new QPushButton(centralWidget);
        boton_guardardatos->setObjectName(QStringLiteral("boton_guardardatos"));
        boton_guardardatos->setGeometry(QRect(540, 0, 111, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 780, 25));
        menuPejuan_s_Vehicle_Examiner = new QMenu(menuBar);
        menuPejuan_s_Vehicle_Examiner->setObjectName(QStringLiteral("menuPejuan_s_Vehicle_Examiner"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPejuan_s_Vehicle_Examiner->menuAction());

        retranslateUi(MainWindow);

        tab_1->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        boton_agregarcarro->setText(QApplication::translate("MainWindow", "Agregar Carro", 0));
        label->setText(QApplication::translate("MainWindow", "Marca de carro:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Placa:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Cilindraje", 0));
        label_4->setText(QApplication::translate("MainWindow", "Tanque:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Due\303\261o:", 0));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Super", 0)
         << QApplication::translate("MainWindow", "Regular", 0)
         << QApplication::translate("MainWindow", "Diesel", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Tipo:", 0));
        tab_1->setTabText(tab_1->indexOf(tab), QApplication::translate("MainWindow", "Agregar Carros", 0));
        boton_eliminar_carro->setText(QApplication::translate("MainWindow", "Eliminar", 0));
        tab_1->setTabText(tab_1->indexOf(tab_4), QApplication::translate("MainWindow", "Eliminar carro", 0));
        cb_tipomod->clear();
        cb_tipomod->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Super", 0)
         << QApplication::translate("MainWindow", "Regular", 0)
         << QApplication::translate("MainWindow", "Diesel", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Ver", 0));
        boton_modificar->setText(QApplication::translate("MainWindow", "Modificar", 0));
        label_11->setText(QApplication::translate("MainWindow", "Marca:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Placa:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Cilindraje:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Due\303\261o:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Tipo:", 0));
        label_16->setText(QApplication::translate("MainWindow", "Tanque:", 0));
        tab_1->setTabText(tab_1->indexOf(tab_5), QApplication::translate("MainWindow", "Modificar carro", 0));
        label_7->setText(QApplication::translate("MainWindow", "Litros a llenar", 0));
        boton_llenar->setText(QApplication::translate("MainWindow", "Llenar", 0));
        label_8->setText(QApplication::translate("MainWindow", "Lista de carros", 0));
        label_9->setText(QApplication::translate("MainWindow", "Km recorridos", 0));
        label_10->setText(QApplication::translate("MainWindow", "Fecha", 0));
        label_17->setText(QApplication::translate("MainWindow", "Tipo combustible:", 0));
        label_18->setText(QApplication::translate("MainWindow", "Precios por litro", 0));
        label_19->setText(QApplication::translate("MainWindow", "Super: Lps. 20", 0));
        label_20->setText(QApplication::translate("MainWindow", "Regular: Lps. 16.80", 0));
        label_21->setText(QApplication::translate("MainWindow", "Diesel: Lps. 18", 0));
        tab_1->setTabText(tab_1->indexOf(tab_3), QApplication::translate("MainWindow", "Llenar tanque", 0));
        boton_ver_rendimiento->setText(QApplication::translate("MainWindow", "Ver rendimiento", 0));
        label_22->setText(QApplication::translate("MainWindow", "Registro de llenados", 0));
        tab_1->setTabText(tab_1->indexOf(tab_2), QApplication::translate("MainWindow", "Ver Rendimientos", 0));
        boton_descargardatos->setText(QApplication::translate("MainWindow", "Descargar datos", 0));
        boton_guardardatos->setText(QApplication::translate("MainWindow", "Guardar datos", 0));
        menuPejuan_s_Vehicle_Examiner->setTitle(QApplication::translate("MainWindow", "Pejuan's Vehicle Examiner", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
