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
 
 calculaPrimos(tope);
 imprimePrimos(tope);
 calculaPerfectos(tope);
 imprimePerfectos(tope); 
}

bool esPrimo(int valorRecibido)
{
  int valor=1;
  int cuentaDivisiones=0;
 while(valor<=valorRecibido){
    
    if(!(valorRecibido%valor))
    {
     cuentaDivisiones++;
     if(cuentaDivisiones>2 && valor<valorRecibido)
        return false;
    }
  valor++;
  }
  if (cuentaDivisiones==2)
     {
     return true;
     }
  else{
    return false;
  }   
}



void calculaPrimos(int limiteSuperior){
int i, j;
int tope=limiteSuperior;

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

}

void calculaPerfectos(int limiteSuperior){
int i, tope,z=0;
tope=limiteSuperior;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
     {
      if( esPrimo(pow(2,arreglo[i])-1) )
      {
      arregloCasiPerf[z] = pow(2,arreglo[i]-1) * (pow(2,arreglo[i]) - 1);
      z++;
      }
     }
}

void imprimePrimos(int limiteSuperior){
int i;
int tope=limiteSuperior;
 std::cout<<std::endl<<"numeros primos"<<std::endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
      std::cout<<arreglo[i]<<"-";   
}

void imprimePerfectos(int limiteSuperior){
int i;
int tope=limiteSuperior;
 std::cout<<std::endl<<"numeros perfectos"<<std::endl;
 for(i=0;i<tope;i++)
    std::cout<<arregloCasiPerf[i]<<"-";   
}