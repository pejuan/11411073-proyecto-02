#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "carro.h"
#include <iostream>
#include <QList>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

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
    int index = ui->cb_carros->currentIndex();
    llenado.setLitro(ui->sp_litrosallenar->value());
    llenado.setTipogasolina(ListaCarros[index].getTipo());
    llenado.setKilometros(ui->sp_kmrecorridos->value());
    llenado.setPrecioporlitro(0);
    llenado.setPrecioporgalon(0);
    llenado.setGalones((ui->sp_litrosallenar->value())/0.2199);
    llenado.setFecha(ui->date_fecha->date());
    ListaCarros[index].add_llenado(llenado);

    ListaCarros[index].calculos();

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

    ui->cb_carros->clear();
    ui->cb_listacarros2->clear();
    ui->cb_carroseliminar->clear();
    ui->cb_carrosmodificar->clear();

    ui->cb_carros->addItems(Listastrings);
    ui->cb_listacarros2->addItems(Listastrings);
    ui->cb_carroseliminar->addItems(Listastrings);
    ui->cb_carrosmodificar->addItems(Listastrings);
}

void MainWindow::on_boton_ver_rendimiento_clicked()
{
    int indice = ui->cb_listacarros2->currentIndex();

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
        ui->cb_carrosmodificar->clear();

        ui->cb_carros->addItems(Listastrings);
        ui->cb_listacarros2->addItems(Listastrings);
        ui->cb_carroseliminar->addItems(Listastrings);
        ui->cb_carrosmodificar->addItems(Listastrings);
        QMessageBox::about(this,"Mensaje","Eliminado con éxito");
    }
    ui->ta_rendimientoeliminar->setText("");



}

void MainWindow::on_boton_guardardatos_clicked()
{
    for(int i=0;i<ListaCarros.size();i++){
        ListaCarros[i].calculos();
    }
    QJsonDocument doc;
    QJsonObject root;
    QFile file("./ArchivoCarros.json");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Can not export the file");
    }else{
        for(int i=0;i<ListaCarros.size();i++){
            Carro objcarro = ListaCarros[i];
            QJsonObject nodo;
            nodo.insert(QString::fromStdString(string("Cilindraje")),QJsonValue(QString::number(objcarro.getCilindraje())));
            nodo.insert(QString::fromStdString(string("Marca")),QJsonValue(objcarro.getMarca()));
            nodo.insert(QString::fromStdString(string("Owner")),QJsonValue(objcarro.getOwner()));
            nodo.insert(QString::fromStdString(string("Placa")),QJsonValue(objcarro.getPlaca()));
            nodo.insert(QString::fromStdString(string("Tipo")),QJsonValue(objcarro.getTipo()));
            nodo.insert(QString::fromStdString(string("Tanque")),QJsonValue(QString::number(objcarro.getTanque())));
            nodo.insert(QString::fromStdString(string("Kmporlitro")),QJsonValue(QString::number(objcarro.getKmporlitro())));
            nodo.insert(QString::fromStdString(string("Kmporgalon")),QJsonValue(QString::number(objcarro.getKmporgal())));
            nodo.insert(QString::fromStdString(string("Lempporkm")),QJsonValue(QString::number(objcarro.getLempporkm())));
            nodo.insert(QString::fromStdString(string("Lempaldia")),QJsonValue(QString::number(objcarro.getLempaldia())));

            root.insert(QString::fromStdString(string("Carro"))+QString::number(i),QJsonValue(nodo));


        }
        doc.setObject(root);
        QString result(doc.toJson());
        QTextStream out(&file);
        out << result;
        QMessageBox::about(this,"Mensaje de guardado","Guardado con éxito!");
    }
}

void MainWindow::on_boton_descargardatos_clicked()
{

    QFile file("./ArchivoCarros.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Can not import this file");
        return;
    }
    QTextStream in(&file);
    QString content = in.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(content.toUtf8());
    QJsonObject root = doc.object();
    if (root.isEmpty()) {
        QMessageBox::warning(this, "Error", "No se pudo importar este archivo");
        return;
    }
    ListaCarros.clear();
    Listastrings.clear();
    for(int i=0;i<ui->cb_carros->count();i++){
        ui->cb_carros->removeItem(i);
    }
    for(int i=0;i<ui->cb_listacarros2->count();i++){
        ui->cb_listacarros2->removeItem(i);
    }
    for(int i=0;i<ui->cb_carroseliminar->count();i++){
        ui->cb_carroseliminar->removeItem(i);
    }
    QStringList objects = root.keys();
    for(int i=0;i<objects.size();i++){
        QJsonObject nodo = root[objects[i]].toObject();
        QStringList attr = nodo.keys();
        Carro objcarro;
        for(int j=0;j<attr.size();j++){
            if(attr[j]=="Cilindraje"){
                objcarro.setCilindraje(nodo[attr[j]].toString().toInt());

            }else if(attr[j]=="Marca"){
                objcarro.setMarca(nodo[attr[j]].toString());
            }else if(attr[j]=="Owner"){
                objcarro.setOwner(nodo[attr[j]].toString());
            }else if(attr[j]=="Placa"){
                objcarro.setPlaca(nodo[attr[j]].toString());
            }else if(attr[j]=="Tipo"){
                objcarro.setTipo(nodo[attr[j]].toString());
            }else if(attr[j]=="Tanque"){
                objcarro.setTanque(nodo[attr[j]].toString().toDouble());
            }else if(attr[j]=="Kmporlitro"){
                objcarro.setKmporlitro(nodo[attr[j]].toString().toDouble());
            }else if(attr[j]=="Kmporgalon"){
                objcarro.setKmporgal(nodo[attr[j]].toString().toDouble());
            }else if(attr[j]=="Lempporkm"){
                objcarro.setLempporkm(nodo[attr[j]].toString().toDouble());
            }else if(attr[j]=="Lempaldia"){
                objcarro.setLempaldia(nodo[attr[j]].toString().toDouble());
            }else{
                QMessageBox::warning(this, "Error", "No se pudo importar un atributo");
                return;
            }
        }
        ListaCarros.append(objcarro);
        Listastrings.append(objcarro.toString());

    }

    ui->cb_carros->addItems(Listastrings);
    ui->cb_listacarros2->addItems(Listastrings);
    ui->cb_carroseliminar->addItems(Listastrings);
    ui->cb_carrosmodificar->addItems(Listastrings);
    QMessageBox::about(this,"Mensaje de descarga","Descargado con éxito!");


}

void MainWindow::on_pushButton_clicked()
{
    int index = ui->cb_carrosmodificar->currentIndex();
    ui->tf_marcamod->setText(ListaCarros[index].getMarca());
    ui->tf_ownermod->setText(ListaCarros[index].getOwner());
    ui->tf_placamod->setText(ListaCarros[index].getPlaca());
    int tip=0;
    if(ListaCarros[index].getTipo()=="Regular"){
        tip=1;
    }else if(ListaCarros[index].getTipo()=="Diesel"){
        tip=2;
    }
    ui->cb_tipomod->setCurrentIndex(tip);
    ui->sp_cilindrajemod->setValue(ListaCarros[index].getCilindraje());
    ui->sp_tanquemod->setValue(ListaCarros[index].getTanque());

}

void MainWindow::on_cb_carrosmodificar_currentIndexChanged(int index)
{
    if(index>=0){
        ui->tf_marcamod->setText(ListaCarros[index].getMarca());
        ui->tf_ownermod->setText(ListaCarros[index].getOwner());
        ui->tf_placamod->setText(ListaCarros[index].getPlaca());
        int tip=0;
        if(ListaCarros[index].getTipo()=="Regular"){
            tip=1;
        }else if(ListaCarros[index].getTipo()=="Diesel"){
            tip=2;
        }
        ui->cb_tipomod->setCurrentIndex(tip);
        ui->sp_cilindrajemod->setValue(ListaCarros[index].getCilindraje());
        ui->sp_tanquemod->setValue(ListaCarros[index].getTanque());
    }
}



void MainWindow::on_boton_modificar_clicked()
{
    int index = ui->cb_carrosmodificar->currentIndex();
    ListaCarros[index].setCilindraje(ui->sp_cilindrajemod->value());
    ListaCarros[index].setMarca(ui->tf_marcamod->text());
    ListaCarros[index].setPlaca(ui->tf_placamod->text());
    ListaCarros[index].setTanque(ui->sp_tanquemod->value());
    ListaCarros[index].setOwner(ui->tf_ownermod->text());
    ListaCarros[index].setTipo(ui->cb_tipomod->currentText());

    Listastrings.clear();
    Listastrings.clear();
    for(int i=0;i<ListaCarros.size();i++){
        Listastrings.append(ListaCarros[i].toString());
    }

    ui->cb_carros->clear();
    ui->cb_carroseliminar->clear();
    ui->cb_listacarros2->clear();
    ui->cb_carrosmodificar->clear();

    ui->cb_carros->addItems(Listastrings);
    ui->cb_listacarros2->addItems(Listastrings);
    ui->cb_carroseliminar->addItems(Listastrings);
    ui->cb_carrosmodificar->addItems(Listastrings);
}
