#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_boton_llenar_clicked();

    void on_boton_agregarcarro_clicked();

    void on_boton_ver_rendimiento_clicked();

    void on_boton_eliminar_carro_clicked();

    void on_boton_guardardatos_clicked();

    void on_boton_descargardatos_clicked();

    void on_pushButton_clicked();

    void on_cb_carrosmodificar_currentIndexChanged(int index);

    void on_boton_modificar_clicked();

    void on_cb_carros_currentIndexChanged(int index);

    void on_cb_carroseliminar_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
