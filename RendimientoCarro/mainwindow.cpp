#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "carro.h"
#include <QList>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QMessageBox>

QList<Carro> ListaCarros;
QStringList Listastrings;
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


void MainWindow::on_boton_llenar_clicked()
{
    Llenados llenado;
    int index = ui->cb_listacarros2->currentIndex();
    llenado.setLitro(ui->sp_litrosallenar->value());
    llenado.setTipogasolina(ListaCarros[index].getTipo());
    llenado.setKilometros(ui->sp_kmrecorridos->value());
    llenado.setPrecioporlitro(0);
    llenado.setPrecioporgalon(0);
    llenado.setGalones((ui->sp_litrosallenar->value())/0.2199);
    llenado.setFecha(ui->date_fecha->date());
    ListaCarros[index].add_llenado(llenado);
    ui->sp_litrosallenar->setValue(0.00);
    ui->sp_kmrecorridos->setValue(0.00);

}

void MainWindow::on_boton_agregarcarro_clicked()
{
    QString owner = ui->tf_owner->text();
    QString marca = ui->tf_marca->text();
    QString placa = ui->tf_placa->text();
    QString tipo = ui->cb_tipo->currentText();
    double tanque = ui->sp_tanque->value();
    int cilindraje = ui->sp_cilindraje->value();
    Carro objcarro;
    objcarro.setCilindraje(cilindraje);
    objcarro.setMarca(marca);
    objcarro.setOwner(owner);
    objcarro.setPlaca(placa);
    objcarro.setTanque(tanque);
    objcarro.setTipo(tipo);
    ListaCarros.append(objcarro);
    Listastrings.append(objcarro.toString());
    ui->tf_marca->setText("");
    ui->tf_owner->setText("");
    ui->tf_placa->setText("");
    for(int i=0;i<ui->cb_carros->count();i++){
        ui->cb_carros->removeItem(i);
    }
    for(int i=0;i<ui->cb_listacarros2->count();i++){
        ui->cb_listacarros2->removeItem(i);
    }
    for(int i=0;i<ui->cb_carroseliminar->count();i++){
        ui->cb_carroseliminar->removeItem(i);
    }
    ui->cb_carros->addItems(Listastrings);
    ui->cb_listacarros2->addItems(Listastrings);
    ui->cb_carroseliminar->addItems(Listastrings);
}

void MainWindow::on_boton_ver_rendimiento_clicked()
{
    int indice = ui->cb_listacarros2->currentIndex();
    ListaCarros[indice].calculos();
    ui->ta_rendimiento->setText(ListaCarros[indice].rendimientoString());

}

void MainWindow::on_boton_eliminar_carro_clicked()
{
    int index = ui->cb_carroseliminar->currentIndex();
    ListaCarros[index].calculos();
    ui->ta_rendimientoeliminar->setText(ListaCarros[index].rendimientoString());
    QMessageBox::StandardButton respuesta;
    respuesta = QMessageBox::question(this,"Warning","Seguro que quiere eliminar el "+ListaCarros[index].toString(),QMessageBox::Yes|QMessageBox::No);
    if(respuesta==QMessageBox::Yes){
        ListaCarros.removeAt(index);
        Listastrings.removeAt(index);
        ui->cb_carros->clear();
        ui->cb_carroseliminar->clear();
        ui->cb_listacarros2->clear();
        ui->cb_carros->addItems(Listastrings);
        ui->cb_listacarros2->addItems(Listastrings);
        ui->cb_carroseliminar->addItems(Listastrings);
        QMessageBox::about(this,"Mensaje","Eliminado con éxito");
    }
    ui->ta_rendimientoeliminar->setText("");



}

void MainWindow::on_boton_guardardatos_clicked()
{
    QFile file("/home/pejuan/11411073-proyecto-02/carros.dat");

    file.open(QIODevice::WriteOnly);
    QDataStream qdstream(&file);
    qdstream.writeRawData(reinterpret_cast<char *>(&ListaCarros),sizeof(ListaCarros));
    file.close();
    QMessageBox::about(this,"Mensaje","Guardado con exito");

}

void MainWindow::on_boton_descargardatos_clicked()
{
    /*
    QFile file("/home/pejuan/11411073-proyecto-02/carros.dat");
    file.open(QIODevice::ReadOnly);
    QDataStream stream(&file);
    stream.readRawData(reinterpret_cast<char *>(&ListaCarros), sizeof(ListaCarros));

    file.close();
    */
}
