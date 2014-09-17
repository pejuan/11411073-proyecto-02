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

QString Llenados::getTipogasolina() const
{
    return tipogasolina;
}

void Llenados::setTipogasolina(const QString &value)
{
    tipogasolina = value;
}

double Llenados::getPrecioporlitro() const
{
    return precioporlitro;
}

void Llenados::setPrecioporlitro(double value)
{
    if(tipogasolina=="Super"){
        precioporlitro=20.0;

    }else{
        if(tipogasolina=="Regular"){
            precioporlitro=16.8;
        }else{
            precioporlitro=18.0;
        }
    }
}

double Llenados::getPrecioporgalon() const
{
    return precioporgalon;
}

void Llenados::setPrecioporgalon(double value)
{
    if(tipogasolina=="Super"){
        precioporgalon=20.0/0.2199;

    }else{
        if(tipogasolina=="Regular"){
            precioporgalon=16.8/0.2199;
        }else{
            precioporgalon=18.0/0.2199;
        }
    }
}
QString Llenados::toString()const{
    QString ss;
    ss="Fecha: "+fecha.toString("dd/MM/yyyy")+"\n"
       +"Litro:"+QString::number(litro)+"\n"
       +"Galones: "+QString::number(galones)+"\n"
       +"Kilómetros: "+QString::number(kilometros)+"\n _______________________________";
    return ss;
}
Llenados::Llenados()
{

}
