#include "llenados.h"


double Llenados::getLitro() const
{
    return litro;
}

void Llenados::setLitro(double value)
{
    litro = value;
}

QDate Llenados::getFecha() const
{
    return fecha;
}

void Llenados::setFecha(const QDate &value)
{
    fecha = value;
}

double Llenados::getGalones() const
{
    return galones;
}

void Llenados::setGalones(double value)
{
    galones = value;
}

double Llenados::getKilometros() const
{
    return kilometros;
}

void Llenados::setKilometros(double value)
{
    kilometros = value;
}
Llenados::Llenados()
{

}
