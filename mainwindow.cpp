#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Artur::classeIterativa i;
Artur::classeRecursiva r;

void MainWindow::on_btn_imprimir_iterativo_clicked()
{
        QString resultado="";
        int valor=0;
        valor=ui->lineEdit_imprimir->text().toInt();
        if(valor<2){
            QMessageBox::critical(this,"","Valor inválido");
            return;
        }
        resultado=i.imprimirIterativo(valor);
        ui->textEdit_imprimir->setText(resultado);

}


void MainWindow::on_btn_imprimir_recursivo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_imprimir->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=r.imprimirRecursivo(valor, 1, "");
    ui->textEdit_imprimir->setText(resultado);
}


void MainWindow::on_btn_par_iterativo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_par->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=i.imprimirParIterativo(valor);
    ui->textEdit_par->setText(resultado);
}


void MainWindow::on_btn_par_recursivo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_par->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=r.imprimirParRecursivo(valor, 1, ""); //parametros:referencia de fim, referencia de inicio, string vazia
    ui->textEdit_par->setText(resultado);
}


void MainWindow::on_btn_impar_iterativo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_impar->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=i.imprimirImparIterativo(valor);
    ui->textEdit_impar->setText(resultado);
}


void MainWindow::on_btn_impar_recursivo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_impar->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=r.imprimirImparRecursivo(valor, 1, ""); //parametros:referencia de fim, referencia de inicio, string vazia
    ui->textEdit_impar->setText(resultado);
}


void MainWindow::on_btn_somar_iterativo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_somar->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=i.imprimirSomaIterativa(valor);
    ui->textEdit_somar->setText(resultado);
}


void MainWindow::on_btn_somar_recursivo_clicked()
{
    QString resultado="";
    int valor=0;
    valor=ui->lineEdit_somar->text().toInt();
    if(valor<2){
        QMessageBox::critical(this,"","Valor inválido");
        return;
    }
    resultado=QString::number(r.imprimirSomaRecursiva(valor, 1, 0)); //parametros:referencia de fim, referencia de inicio, inteiro que recebera o resultado, sempre iniciando com 0
    ui->textEdit_somar->setText(resultado);
}


void MainWindow::on_btn_pi_iterativo_1_clicked()
{
    QString resultado="";
    resultado=QString::number(i.imprimirPiIterativoUm());
    ui->textEdit_pi_1->setText(resultado);
}


void MainWindow::on_btn_pi_recursivo_1_clicked()
{
    QString resultado="";
    resultado=QString::number(r.imprimirPiRecursivoUm(0.0, 4.0, 1));
    ui->textEdit_pi_1->setText(resultado);
}


void MainWindow::on_btn_pi_iterativo_2_clicked()
{
    QString resultado="";
    resultado=QString::number(i.imprimirPiIterativoDois());
    ui->textEdit_pi_2->setText(resultado);
}


void MainWindow::on_btn_pi_recursivo_2_clicked()
{
    QString resultado="";
    resultado=QString::number(r.imprimirPiRecursivoDois(1.0, 2));
    ui->textEdit_pi_2->setText(resultado);
}

