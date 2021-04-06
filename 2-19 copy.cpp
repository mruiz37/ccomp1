#include <iostream>

using namespace std;
int main()
{
 int num1,num2,num3;
 int suma, promedio, producto,menor, mayor;
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

 if(num1>num2)
  { 
    if(num1>num3)
      {
       mayor=num1;

       if(num3<num2) 
        {
         menor=num3;    
        }   
       else
        {
         menor=num2;   
        }
      }
    else 
      {
       mayor=num3;
       //ahora calculo el menor
       //num1 
       if(num2<num1) 
        {
         menor=num2;    
        }   
       else
        {
         menor=num1;   
        }
      }
  }
 else 
  { 
      if(num2>num3)
       {
         mayor=num2; 
         if(num1<num3) 
         {
          menor=num1;    
         }   
        else
         {
          menor=num3;   
         } 
       }
       else
       {
         mayor=num3;
         if(num2<num1) 
         {
          menor=num2;    
         }   
        else
         {
          menor=num1;   
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