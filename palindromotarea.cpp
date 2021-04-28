#include<iostream>
using namespace std;

int isPalNoRec(int arreglo1[], int numelem);
void imprimir(int arregloX[], int numelem); 
bool isPal(int arr[], int , int );

int main(){
 int arregloA[5]={1,2,3,2,1};
 int arregloB[5]={1,2,3,4,5};
 int arregloC[10]={2,4,6,8,10,12,14,16,18,20};
 int arregloD[11]={2,4,6,8,10,12,14,16,18,20,22};


  cout<<"****verifico palindromo con la funcion no recursiva"<<endl;
  cout<<"probando con el arreglo A"<<endl;
  if(isPalNoRec(arregloA,5)){ 
    imprimir(arregloA,5);
    cout<<"es palindromo"<<endl;
  }
  else {
    imprimir(arregloA,5);
    cout<<"no es palindromo"<<endl;
  }
 
 cout<<"probando con el arreglo  B"<<endl;
 if(isPalNoRec(arregloB,5)){ 
    imprimir(arregloB,5);
    cout<<"es palindromo"<<endl;
  }
  else {
    imprimir(arregloB,5);
    cout<<"no es palindromo"<<endl;
  }


 cout<<endl<<"****verifico palindromo con la funcion recursiva"<<endl;
 cout<<"probando con el arreglo A"<<endl;
  if(isPal(arregloA,5,0)){ 
    imprimir(arregloA,5);
    cout<<"es palindromo"<<endl;
  }
  else {
    imprimir(arregloA,5);
    cout<<"no es palindromo"<<endl;
  }
 
 cout<<"probando con el arreglo  B"<<endl;
 if(isPal(arregloB,5,0)){ 
    imprimir(arregloB,5);
    cout<<"es palindromo"<<endl;
  }
  else {
    imprimir(arregloB,5);
    cout<<"no es palindromo"<<endl;
  }
  

//return 0;
}

int isPalNoRec(int arreglo1[], int numelem){

for(int i=0; i < numelem/2 ; i++){
    if( !(arreglo1[i]==arreglo1[numelem-i-1])) 
        return 0;
   }
return 1;
}



void imprimir(int arregloX[], int numelem){ 
for(int i=0; i<numelem; i++)
     cout<<arregloX[i]<<" ";
}


bool isPal(int arr[], int tam, int i=0){
   if(arr[i]!=arr[tam-1])
      return false;
   else{
      if(i>=tam-1)
         return true;
      else
         return true && isPal(arr,--tam, ++i);  
   }
}


