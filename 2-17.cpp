#include <iostream>

using namespace std;
int main(){
  int i=0;    
  //caracter comillas simples
  char c;
  //comillas dobles cadena
  //cout<<"Character"<<c<<endl;

  int valor = static_cast<int>(c);
  int letra=0;
  //cout<<"el valor entero de "<<c<<"es"<<valor; 

  for(i=86;i<=90;i++){
      letra=i;
      c= static_cast<char>(letra);
      cout<<c;
      if(i%2==0)cout<<" ";

  } 

}