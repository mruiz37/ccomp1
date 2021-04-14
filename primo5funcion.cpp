#include <iostream>
#include <cmath>

void calculaPrimos(int limiteSuperior);
void imprimePrimos(int limiteSuperior);

 int arreglo[100000]{0};
 int arregloLogico[100000]{0};

int main(){

 using namespace std;

 int i,j, tope;
 int arreglo[100000]{0};
 int arregloLogico[100000]{0};

 cout<<"ingresar el tope para imprimir los primos ";
 cin>>tope;
 // invocamos a la función que calcula los 
 // numeros primos.
 calculaPrimos(tope);
 imprimePrimos(tope);
}

void calculaPrimos(int limiteSuperior){
int i, j;
int tope=limiteSuperior;

for(i=2;i<tope;i++)
  arreglo[i]=i;

//marco las posiciones pares 
for(i=2;i<=sqrt(tope);i++)
  if(!(arregloLogico[i]))
    {//solo va a entrar cuando la posicion no ha sido marcada
     for(j=i;j<=tope/i;j++){
         arregloLogico[i*j]=1;
     }
    }

}

void imprimePrimos(int limiteSuperior){
int i;
int tope=limiteSuperior;
 std::cout<<std::endl<<"numeros primos"<<std::endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
      std::cout<<arreglo[i]<<"-";   
}