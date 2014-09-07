#include "carro.h"
#include <QString>

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

int Carro::getTipo() const
{
    return tipo;
}

void Carro::setTipo(int value)
{
    tipo = value;
}

double Carro::getTanque() const
{
    return tanque;
}

void Carro::setTanque(double value)
{
    tanque = value;
}

QList<double> Carro::getLlenados() const
{
    return llenados;
}

void Carro::setLlenados(const QList<double> &value)
{
    llenados = value;
}

double Carro::getKmporlitro() const
{
    return kmporlitro;
}

void Carro::setKmporlitro(double value)
{
    kmporlitro = value;
}

double Carro::getKmporgalon() const
{
    return kmporgalon;
}

void Carro::setKmporgalon(double value)
{
    kmporgalon = value;
}

double Carro::getLitrosporkm() const
{
    return litrosporkm;
}

void Carro::setLitrosporkm(double value)
{
    litrosporkm = value;
}

double Carro::getLitrosaldia() const
{
    return litrosaldia;
}

void Carro::setLitrosaldia(double value)
{
    litrosaldia = value;
}
Carro::Carro()
{

}
