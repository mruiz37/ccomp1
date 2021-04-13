#include <iostream>
#include <cmath>
#include<ctime>
int main(){

 using namespace std;

 int i,j, tope,numero, cuenta=0;
 int resultado;
 int resultado2;
 unsigned t0, t1;
 int arreglo[100000]{0};
 int arregloLogico[100000]{0};

 cout<<"ingresar el tope para imprimir los primos ";
 cin>>tope;

 t0=clock();
 numero=2;

 for(i=2;i<tope;i++)
  arreglo[i]=i;

 //for(i=2;i<tope;i++)
  //cout<<arreglo[i]<<" ";

//marco las posiciones pares 
for(i=2;i<=sqrt(tope);i++)
  if(!(arregloLogico[i]))
    {//solo va a entrar cuando la posicion no ha sido marcada
    for(j=i;j<=tope/i;j++){
        //cout<<"posicion marcada" <<i;
        arregloLogico[i*j]=1;
        //cout<<"posicion marcada "<<i*j;
    }
    }

/*cout<<endl<<"arreglo luego de marcar las posiciones";
 for(i=2;i<tope;i++)
   if(arregloLogico[i]) 
      cout<<i<<" ";
*/
cout<<endl<<"numeros primos"<<endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
      cout<<arreglo[i]<<"-";


 t1 = clock();
 double time = (double(t1-t0)/CLOCKS_PER_SEC); 
 cout  <<endl<< "Tiempo de ejecución: " << time << endl;
}