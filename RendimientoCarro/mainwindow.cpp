#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "carro.h"
#include "QList"
QList<Carro> ListaCarros;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sp_cilindraje->setRange(2,12);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString owner = ui->tf_owner->text();
    QString marca = ui->tf_marca->text();
    QString placa = ui->tf_placa->text();
    QString tipo = ui->cb_tipo->itemText();
    double tanque = ui->sp_tanque->value();
    int cilindraje = ui->sp_cilindraje->value();
    Carro objcarro;
    objcarro.setCilindraje(cilindraje);

}
