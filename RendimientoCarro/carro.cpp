#include "carro.h"
#include <QString>
#include <sstream>
using namespace std;
int Carro::getCilindraje() const
{
    return cilindraje;
}

void Carro::setCilindraje(int value)
{
    cilindraje = value;
}

QString Carro::getMarca() const
{
    return marca;
}

void Carro::setMarca(const QString &value)
{
    marca = value;
}

QString Carro::getOwner() const
{
    return owner;
}

void Carro::setOwner(const QString &value)
{
    owner = value;
}

QString Carro::getPlaca() const
{
    return placa;
}

void Carro::setPlaca(const QString &value)
{
    placa = value;
}

double Carro::getTanque() const
{
    return tanque;
}

void Carro::setTanque(double value)
{
    tanque = value;
}



QString Carro::getTipo() const
{
    return tipo;
}

void Carro::setTipo(const QString &value)
{
    tipo = value;
}

QList<Llenados> Carro::getLlenados() const
{
    return llenados;
}

void Carro::setLlenados(const QList<Llenados> &value)
{
    llenados = value;
}
Llenados Carro::getLlenadosAt(int index)const{

    return llenados[index];
}
void Carro::add_llenado(Llenados llenado){
    llenados.append(llenado);
}
QString Carro::toString()const{
    QString retval = "Carro Marca:"+marca+"  Placa:"+placa;
    return retval;

}


double Carro::getKmporlitro() const
{
    return kmporlitro;
}

void Carro::setKmporlitro(double value)
{
    kmporlitro = value;
}

double Carro::getKmporgal() const
{
    return kmporgal;
}

void Carro::setKmporgal(double value)
{
    kmporgal = value;
}



double Carro::getLempporkm() const
{
    return lempporkm;
}

void Carro::setLempporkm(double value)
{
    lempporkm = value;
}

double Carro::getLempaldia() const
{
    return lempaldia;
}

void Carro::setLempaldia(double value)
{
    lempaldia = value;
}

double Carro::getKmaldia() const
{
    return kmaldia;
}

void Carro::setKmaldia(double value)
{
    kmaldia = value;
}
Carro::Carro()
{
    
}

void Carro::calculos(){
    double kmporlitro=0.0;
    double kmporgal=0.0;
    double lempporkm=0.0;
    double lempaldia=0.0;
    double kmaldia=0.0;

    for(int i=0;i<llenados.size();i++){
        llenados[i].setTipogasolina(tipo);
        llenados[i].setPrecioporlitro(0);
        llenados[i].setPrecioporgalon(0);
    }
    for(int i=0;i<llenados.size();i++){
        kmporlitro += llenados[i].getKilometros()/llenados[i].getLitro();
        kmporgal += llenados[i].getKilometros()/llenados[i].getGalones();
        lempporkm =(llenados[i].getPrecioporlitro()*llenados[i].getLitro())/(llenados[i].getKilometros());

    }
    if(llenados.size()){
        int dias = llenados[0].getFecha().daysTo(llenados[llenados.size()-1].getFecha());
        for(int i = 0;i<llenados.size();i++){
            lempaldia += llenados[i].getPrecioporlitro()*llenados[i].getLitro();
            kmaldia += llenados[i].getKilometros();
        }
        if(dias){
            lempaldia = lempaldia/dias;
            kmaldia = kmaldia/dias;
        }
    }


    this->setKmaldia(kmaldia);
    this->setLempaldia(lempaldia);
    this->setKmporlitro(kmporlitro);
    this->setKmporgal(kmporgal);
    this->setLempporkm(lempporkm);

}
QString Carro::rendimientoString()const{
    QString ss;

    ss="Marca: "+marca+"\n"
      +"Placa: "+placa+"\n"
      +"Dueño: "+owner+"\n"
      +"Cilindraje: "+QString::number(cilindraje)+"\n"
      +"Tipo de combustible: "+tipo+"\n"
      +"Km por litro: "+QString::number(kmporlitro)+"\n"
      +"Km por galon: "+QString::number(kmporgal)+"\n"
      +"Lempiras por km: "+QString::number(lempporkm)+"\n"
      +"Lempiras al dia: "+QString::number(lempaldia)+"\n"
      +"Km al dia: "+QString::number(kmaldia)+"\n";
    return ss;
}
