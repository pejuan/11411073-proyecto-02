#ifndef CARRO_H
#define CARRO_H
#include <QString>
#include <QList>
class Carro
{
    int cilindraje;
    QString marca;
    QString owner;
    QString placa;
    int tipo;
    double tanque;
    QList<double> llenados;//Debo hacer clase compuesta
    double kmporlitro;
    double kmporgalon;
    double litrosporkm;
    double litrosaldia;

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
    int getTipo() const;
    void setTipo(int value);
    double getTanque() const;
    void setTanque(double value);
    QList<double> getLlenados() const;
    void setLlenados(const QList<double> &value);
    double getKmporlitro() const;
    void setKmporlitro(double value);
    double getKmporgalon() const;
    void setKmporgalon(double value);
    double getLitrosporkm() const;
    void setLitrosporkm(double value);
    double getLitrosaldia() const;
    void setLitrosaldia(double value);
};

#endif // CARRO_H
