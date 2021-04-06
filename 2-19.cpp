#include <iostream>

using namespace std;
int main()
{
 int num1,num2,num3;
 int suma, promedio, producto,menor=32767, mayor=-32767;
 cout<<"Ingrese 3 numeros diferentes ";
 cin>>num1;
 cin>>num2;
 cin>>num3;
 suma=num1+num2+num3;
 promedio= suma/3;
 producto= num1*num2*num3;
 /*
  if num1>num2  and num1>num3
 */
 if(mayor<num1){
   mayor=num1;
   if(mayor<num2){
     mayor=num2;
     if(mayor<num3)
      {
        mayor=num3;
      }
   }
 }


 if(menor>num1){
   menor=num1;
   if(menor>num2){
     menor=num2;
     if(menor>num3)
      {
        menor=num3;
      }
   }
 }
 
 
 cout<<"la suma es "<<suma<<endl;
 cout<<"el promedio es "<<promedio<<endl;
 cout<<"el producto es "<<producto<<endl;
 cout<<"el menor es "<<menor<<endl;
 cout<<"el mayor es "<<mayor<<endl;

 
 return 0;
}