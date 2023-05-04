#include "classerecursiva.h"
#include <QString>

namespace Artur{

    QString classeRecursiva::imprimirRecursivo(int valor, int n, QString res){
     if(n<=valor){
       res+=QString::number(n);
       if((n+1)<=valor){
         res+=",";
       }
       return imprimirRecursivo(valor, n+1, res);
     }else{
       return res;
     }
   }

  QString classeRecursiva::imprimirParRecursivo(int valor, int n, QString res){
    if(n%2!=0){
      n++;
    }
    if(n<=valor){
      res+=QString::number(n);
      if((n+2)<=valor){
        res+=",";
      }
      return imprimirParRecursivo(valor, n+1, res);
    }
    return res;
  }

  QString classeRecursiva::imprimirImparRecursivo(int valor, int n, QString res){
    if(n%2==0){
      n++;
    }
    if(n<=valor){
      res+=QString::number(n);
      if(n+2<=valor){
        res+=",";
      }
      return imprimirImparRecursivo(valor, n+1, res);
    }
    return res;
  }

  int classeRecursiva::imprimirSomaRecursiva(int valor, int n, int res){
    if(n<=valor){
        n++;
      return res + imprimirSomaRecursiva(valor, n, res+1);
    }else{
      return res;
    }
  }

  double classeRecursiva::imprimirPiRecursivoUm(double pi, double termo, int n){
    if(termo >= 0.0001){
      pi += termo;
      n += 2;
      termo = -(4.0 / n);
      pi += termo;
      n += 2;
      termo = 4.0 / n;
      return imprimirPiRecursivoUm(pi, termo, n);
    }
    return pi;
  }

  double classeRecursiva::imprimirPiRecursivoDois(double s, int n){
    if(n<=51){
      s+=pow(-1,n+1)*(1/(pow(2*n-1,3)));
      return imprimirPiRecursivoDois(s, n+1);
    }else{
      return pow((s*32),(1.0/3.0));
    }
  }


}  //namespace
