#include <iostream>
#include<ctime>
int main(){

 using namespace std;

 int i,j, tope,numero, cuenta=0;
 int resultado;
 int resultado2;
 unsigned t0, t1;
 int arreglo[100];
 int arregloLogico[100];

 cout<<"ingresar el tope para imprimir los primos ";
 cin>>tope;

 t0=clock();
 numero=2;

 for(i=0;i<tope;i++)
  arreglo[i]=i+2;

 for(i=0;i<tope-1;i++)
  cout<<arreglo[i]<<" ";

//marco las posiciones pares 
for(i=0;i<tope-1;i++)
  if(!(arreglo[i]%2))
    {
        cout<<"posicion marcada" <<i;
        arregloLogico[i]=1;
    }

cout<<endl<<"arreglo luego de marcar las posiciones";
 for(i=0;i<tope-1;i++)
   if(arregloLogico[i]) 
      cout<<i<<" ";


 t1 = clock();
 double time = (double(t1-t0)/CLOCKS_PER_SEC); 
 cout  <<endl<< "Tiempo de ejecución: " << time << endl;
}