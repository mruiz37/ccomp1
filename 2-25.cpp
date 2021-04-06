#include <iostream>

using namespace std;
int main()
{
 int num1,num2,num3;
 cout<<"Ingrese 3 numeros diferentes ";
 cin>>num1;
 cin>>num2;
 cin>>num3;

 if(num3%num2==0 & num3%num1==0){
     cout<<"los dos primeros son factores del último";
 }
 else 
    cout<<"los dos primeros no  son factores del último";
 
 
 return 0;
}