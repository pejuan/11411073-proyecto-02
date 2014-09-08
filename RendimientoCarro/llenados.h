#ifndef LLENADOS_H
#define LLENADOS_H
#include <QDate>
#include <QString>
using namespace std;
class Llenados
{
    double litro;
    QDate fecha;
    double galones;
    double kilometros;

public:
    Llenados();

    double getLitro() const;
    void setLitro(double value);
    QDate getFecha() const;
    void setFecha(const QDate &value);
    double getGalones() const;
    void setGalones(double value);
    double getKilometros() const;
    void setKilometros(double value);
};

#endif // LLENADOS_H
