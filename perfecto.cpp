#include <iostream>
#include <cmath>




bool esPrimo(int valorRecibido);
void calculaPrimos(int limiteSuperior);
void calculaPerfectos(int limiteSuperior);
void imprimePrimos(int limiteSuperior);
void imprimePerfectos(int limiteSuperior);

//int arreglo[100000]{0};
int arreglo[100000]{0};
int arregloLogico[100000]{0};
long long  arregloCasiPerf[100000]{0};


int main(){

 using namespace std;

 int i,j,z{0} ,tope,primo;
 long numPerfecto;
 long factor,cuenta;

 cout<<"ingresar tope de los números perfectos ";
 cin>>tope;
 
 //calculaPrimos(tope);

 for(i=2;i<tope;i++)
  arreglo[i]=i;

//marco las posiciones pares 
for(i=2;i<=sqrt(tope);i++)
  if(!(arregloLogico[i]))
    {//solo va a entrar cuando la posicion no ha sido marcada
     for(j=i;j<=tope/i;j++){
         arregloLogico[i*j]=1;
     }
    }

 //imprimePrimos(tope);
 std::cout<<std::endl<<"numeros primos"<<std::endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
      std::cout<<arreglo[i]<<"-"; 

 //calculaPerfectos(tope);
 z=0;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
     {
      // aqui va la para validar 
      int valor=1;
      int cuentaDivisiones=0;
      int valorRecibido=pow(2,arreglo[i])-1;
      //codigo para revisar si el número recibido es primo 
      while(valor<=valorRecibido){
    
      if(!(valorRecibido%valor))
      {
      cuentaDivisiones++;
       if(cuentaDivisiones>2 && valor<valorRecibido)
          break;
      } 
     valor++;
     }
         


      if( cuentaDivisiones==2)
      {
      arregloCasiPerf[z] = pow(2,arreglo[i]-1) * (pow(2,arreglo[i]) - 1);
      z++;
      }
     } 

 
 //imprimePerfectos(tope);
 cout<<endl<<"numeros perfectos"<<endl;
 for(i=0;i<tope;i++)
    std::cout<<arregloCasiPerf[i]<<"-";   
}


 
