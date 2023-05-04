#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "classeiterativa.h"
#include "classerecursiva.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_imprimir_iterativo_clicked();

    void on_btn_imprimir_recursivo_clicked();

    void on_btn_par_iterativo_clicked();

    void on_btn_par_recursivo_clicked();

    void on_btn_impar_iterativo_clicked();

    void on_btn_impar_recursivo_clicked();

    void on_btn_somar_iterativo_clicked();

    void on_btn_somar_recursivo_clicked();

    void on_btn_pi_iterativo_1_clicked();

    void on_btn_pi_recursivo_1_clicked();

    void on_btn_pi_iterativo_2_clicked();

    void on_btn_pi_recursivo_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
