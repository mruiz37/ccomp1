#include<iostream>
using namespace std;

void invertir(int arreglo1[], int numelem);
void imprimir(int arregloX[], int numelem); 
void invertirR(int arr[], int , int );
void intercambio(int &a, int &b);

int main(){
 int arregloA[5]={1,2,3,2,1};
 int arregloB[5]={1,2,3,4,5};
 int arregloC[10]={2,4,6,8,10,12,14,16,18,20};
 int arregloD[11]={2,4,6,8,10,12,14,16,18,20,22};

 int tamArreglo=11;

  
  cout<<endl<<"****ahora verifico la inversion del arreglo no recursiva"<<endl;
  cout<<"imprimo el arreglo antes de invertir"<<endl;
  imprimir(arregloD,tamArreglo);
  invertir(arregloD,tamArreglo);
  cout<<endl<<" arreglo despues de ser invertido"<<endl;
  imprimir(arregloD,tamArreglo);

  cout<<endl<<"****ahora verifico la inversion del arreglo recursiva"<<endl;
  cout<<"imprimo el arreglo antes de invertir"<<endl;
  imprimir(arregloD,tamArreglo);
  invertirR(arregloD,tamArreglo,0);
  cout<<endl<<" arreglo despues de ser invertido"<<endl;
  imprimir(arregloD,tamArreglo);
  
  

return 0;
}




void invertir(int arreglo1[], int numelem){
int tempo=0;
for(int i=0; i < numelem/2 ; i++){
    tempo=arreglo1[i];
    arreglo1[i]=arreglo1[numelem-i-1]; 
    arreglo1[numelem-i-1]=tempo;
   }

}

void imprimir(int arregloX[], int numelem){ 
for(int i=0; i<numelem; i++)
     cout<<arregloX[i]<<" ";
}


void invertirR(int arr[], int tam, int i=0){
   if(i>=tam-1)
      return;
      intercambio(arr[i], arr[tam-1]);
      invertirR(arr, --tam, ++i);
   

}

void intercambio(int &a, int &b){
   int tmp=a;
   a=b;
   b=tmp;

}