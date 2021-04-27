#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;
void outputVector(const vector<int> &items);



int main(){

  vector<int> n2;  

  int flag=0;
  int numero=-1;
  //int k=0;
  
  cout<<"ingrese 20 numeros";
  
  for(int i=0; i<20; i++){
  cin>>numero;
  flag=0;
    if(numero>10 && numero<=100){
        //aqui verificar que el número no se encuentre en el 
        //arreglo
        for(int item : n2)
            if(item == numero)
              flag=1;

        if(!flag)
          n2.push_back(numero); 
    }
  }
 

 
 cout<<"ahora imprimo mi vector ";
 outputVector(n2);
 

}

void outputVector(const vector<int> &items){
 for(int item : items){
     cout<<item<<" ";
 }

}