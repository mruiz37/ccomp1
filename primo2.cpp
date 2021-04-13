#include <iostream>
#include<ctime>
int main(){

 using namespace std;

 int i,j, tope,numero, cuenta=0;
 int resultado;
 int resultado2;
 unsigned t0, t1;

 cout<<"ingresar el tope para imprimir los primos ";
 cin>>tope;

 t0=clock();
 numero=2;
 while(numero<=tope){
 //resultado=numero>>1;
 //resultado2=resultado<<1;
 //cout<<resultado<<" ";
 //cout<<resultado2<<" ";
   if( !(numero%2==0 )  && !(numero%3==0) && !(numero%5==0) && !(numero%7==0)   )
      cout<<numero<<" ";
    if(numero==2 || numero==3 || numero==5 || numero==7)
      cout<<numero<<" ";
   //else
   //   cout<<numero<<"es primo ";

 numero++;
 }
 t1 = clock();
 double time = (double(t1-t0)/CLOCKS_PER_SEC); 
 cout  <<endl<< "Tiempo de ejecución: " << time << endl;
}