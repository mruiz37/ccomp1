#include <iostream>
#include <math.h>
#include"punto.h"
using namespace std;

int main(){

Punto Punto1(1,2);
Punto Punto2(4,5);
//Punto1.imprimePunto();
cout<<Punto1.calculaDistancia(Punto2);

return 0;
}