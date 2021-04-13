#include <iostream>
#include <cmath>

int main(){

 using namespace std;

 int i,j, tope;
 int arreglo[100000]{0};
 int arregloLogico[100000]{0};

 cout<<"ingresar el tope para imprimir los primos ";
 cin>>tope;
 //numero=2;

 for(i=2;i<tope;i++)
  arreglo[i]=i;

//marco las posiciones pares 
for(i=2;i<=sqrt(tope);i++)
  if(!(arregloLogico[i]))
    {//solo va a entrar cuando la posicion no ha sido marcada
     for(j=i;j<=tope/i;j++){
         //cout<<"posicion marcada" <<i;
         arregloLogico[i*j]=1;
     }
    }

cout<<endl<<"numeros primos"<<endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
      cout<<arreglo[i]<<"-";

}