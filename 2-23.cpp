#include <iostream>

using namespace std;
int main()
{
 int num1,num2,num3,num4,num5;
 int mayor=-32767;
 int menor=32767;
 cout<<"Ingrese 5 numeros diferentes ";
 cin>>num1;
 cin>>num2;
 cin>>num3;
 cin>>num4;
 cin>>num5;

 

 if (mayor<num1){
     mayor=num1;
     if(mayor<num2)
     {
        mayor=num2; 
     }
     if(mayor<num3){
         mayor=num3;
     }
     if(mayor<num4){
         mayor=num4;
     }
     if(mayor<num5){
         mayor=num5;
     }
    
 }

 if (menor>num1){
     menor=num1;
     if(menor>num2)
     {
        menor=num2; 
     }
     if(menor>num3){
         menor=num3;
     }
     if(menor>num4){
         menor=num4;
     }
     if(menor>num5){
         menor=num5;
     }
    
 }

 cout<<"el número mayor es "<<mayor<<endl;
 cout<<"el número menor es "<<menor<<endl;
 
 return 0;
}