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
    QString tipo;
    double tanque;
    QList<double> llenados;//Debo hacer clase compuesta

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
};

#endif // CARRO_H
