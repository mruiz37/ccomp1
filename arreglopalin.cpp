#include<iostream>
using namespace std;

int verificar(int arreglo1[], int numelem);
void invertir(int arreglo1[], int numelem);
void imprimir(int arregloX[], int numelem); 
int esPalindroRec(int arreglo1[], int numelem, int pos);
int main(){
 int arregloA[5]={1,2,3,2,1};
 int arregloB[5]={1,2,3,4,5};
 int arregloC[10]={2,4,6,8,10,12,14,16,18,20};
 int arregloD[11]={2,4,6,8,10,12,14,16,18,20,22};

 int tamArreglo=11;

  //if(verificar(arregloA,5)){
  if(esPalindroRec(arregloA,5,0)){
    imprimir(arregloA,5);
    cout<<"es palindromo"<<endl;
  }
  else {
    imprimir(arregloA,5);
    cout<<"no es palindromo"<<endl;
  }
 
  /*
  cout<<endl<<"ahora verifico la inversion del arreglo"<<endl;
  cout<<"imprimo el arreglo antes de invertir"<<endl;
  imprimir(arregloD,tamArreglo);
  invertir(arregloD,tamArreglo);
  cout<<endl<<" arreglo despues de ser invertido"<<endl;
  imprimir(arregloD,tamArreglo);
  */

//return 0;
}

int verificar(int arreglo1[], int numelem){

for(int i=0; i < numelem/2 ; i++){
    if( !(arreglo1[i]==arreglo1[numelem-i-1])) 
        return 0;
   }
return 1;
}

int esPalindroRec(int arreglo1[], int numelem, int pos){
//int arregloTempo[];
   if(pos<numelem/2){
      if(arreglo1[pos]==arreglo1[numelem-pos-1]){
         pos--;
         esPalindroRec(arreglo1 , numelem ,pos);
        
      }
      else
         return 0;

   }
  return 1;
}

int esPalindroRec2(int arreglo1[], int numelem, int pos){
//int arregloTempo[];
//int pos
   if(pos<numelem/2){
      if(arreglo1[pos]==arreglo1[numelem-pos-1]){
         pos--;
         esPalindroRec(arreglo1 , numelem ,pos);
        
      }
      else
         return 0;

   }
  return 1;
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