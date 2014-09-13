#ifndef CARRO_H
#define CARRO_H
#include <QString>
#include <QList>
#include "llenados.h"
using namespace std;
class Carro
{
    int cilindraje;
    QString marca;
    QString owner;
    QString placa;
    QString tipo;
    double tanque;
    QList<Llenados> llenados;//Debo hacer clase compuesta

    double kmporlitro;
    double kmporgal;
    double lempporkm;
    double litroaldia;

public:
    Carro();
    int getCilindraje() const;
    void setCilindraje(int value);
    QString getMarca() const;
    void setMarca(const QString &value);
    QString getOwner() const;
    void setOwner(const QString &value);
    QString getPlaca() const;
    void setPlaca(const QString &value);
    double getTanque() const;
    void setTanque(double value);
    QString getTipo() const;
    void setTipo(const QString &value);
    void add_llenado(Llenados);
    Llenados getLlenadosAt(int)const;
    QList<Llenados> getLlenados() const;
    void setLlenados(const QList<Llenados> &value);

    QString toString()const;
    double getKmporlitro() const;
    void setKmporlitro(double value);
    double getKmporgal() const;
    void setKmporgal(double value);

    double getLitroaldia() const;
    void setLitroaldia(double value);

    void calculos();
    double getLempporkm() const;
    void setLempporkm(double value);

    QString rendimientoString()const;
};

#endif // CARRO_H
