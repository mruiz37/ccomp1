#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main(){
  array<int,20> n;
  int flag=0;
  int numero=-1;
  int k=0;
  
   //inicializa el array
  for(size_t i{0}; i < n.size(); ++i){
      n[i]=0;
  }

  cout<<"ingrese 20 numeros";
  
  for(int i=0; i<20; i++){
  cin>>numero;
  flag=0;
    if(numero>10 && numero<=100){
        //aqui verificar que el número no se encuentre en el 
        //arreglo
        for(int j=0;j<=k;j++)
           {
            //cout<<"entre al comparador de numeros iguales"<<j<<endl;
            if(n[j]==numero)
              flag=1;
            //tener en cuenta que se va a almacenar en
            //la ultima posicion del arreglo, no 
            //en el numero de iteracion   
           }

        if(!flag){ 
          n[k]=numero;
          k++;
          //cout<<"imprimo el valor de k"<<k<<endl;
          //ahora apago el flag para la sgte verificacion
          //flag=0;
        }
    }
  }
 
   
 //imprimo cada elemento del arreglo
 for(size_t j{0}; j < n.size(); ++j){
     cout<< setw(7) <<j <<setw(10) <<n[j]<<endl;
  }
 
 

}