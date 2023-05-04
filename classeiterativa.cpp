#include "classeiterativa.h"

namespace Artur{

QString classeIterativa::imprimirIterativo(int valor){
    if(valor<=1){
        throw QString ("Valor inválido - imprimirIterativo");
    }
    QString res="";
    for(int n=1; n<=valor; n++){
      res+=QString::number(n);
      if((n+1)<=valor)
        res+=",";
    }
    return res;
  }

  QString classeIterativa::imprimirParIterativo(int valor){
      QString res="";
    for(int n=1; n<=valor; n++){
      if(n%2==0){
        res+=QString::number(n);
      if((n+2)<=valor)
        res+=",";
      }
    }
    return res;
  }

  QString classeIterativa::imprimirImparIterativo(int valor){
      QString res="";
    for(int n=1; n<=valor; n++){
      if(n%2!=0){
        res+=QString::number(n);
      if((n+2)<=valor)
        res+=",";
      }
    }
    return res;
  }

  QString classeIterativa::imprimirSomaIterativa(int valor){
    int resultado=0;
    for(int n=1; n<=valor; n++){
      resultado+=n;
    }
    QString r=QString::number(resultado);
    return r;
  }

  double classeIterativa::imprimirPiIterativoUm(){
    double pi = 0.0;
    double termo = 4.0;
    double precisao = 0.0001;
    int n = 1;

    while(termo>=precisao) {
        pi += termo;
        n += 2;
        termo = -(4.0 / n);
        pi += termo;
        n += 2;
        termo = 4.0 / n;
    }
    return pi;
  }

  double classeIterativa::imprimirPiIterativoDois(){
    double s=1.0;
    for(int n=2; n<=50; n++){
      s+=pow(-1,n+1)*(1/(pow(2*n-1,3)));
    }
    return pow((s*32),(1.0/3.0));
  }

}   //namespace
