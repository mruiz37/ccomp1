#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main(){
  array<int,5> n;
  //inicializa el array
  for(size_t i{0}; i < n.size(); ++i){
      n[i]=0;
  }
   
 cout<<" Elemento "<<setw(10)<< "Valor"<< endl;

 //imprimo cada elemento del arreglo
 for(size_t j{0}; j < n.size(); ++j){
     cout<< setw(7) <<j <<setw(10) <<n[j]<<endl;
  }
 

}