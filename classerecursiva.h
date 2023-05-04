#ifndef CLASSERECURSIVA_H
#define CLASSERECURSIVA_H
#include <iostream>
#include <cmath>
#include <QString>

namespace Artur{

class classeRecursiva{
public:
   QString imprimirRecursivo(int, int, QString);

  QString imprimirParRecursivo(int, int, QString);

  QString imprimirImparRecursivo(int, int, QString);

  int imprimirSomaRecursiva(int, int, int);

  double imprimirPiRecursivoUm(double, double, int);

  double imprimirPiRecursivoDois(double, int);


};  //classe

}  //namespace
#endif
