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
Carro::Carro()
{

}
