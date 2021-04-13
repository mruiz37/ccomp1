#include <iostream>
#include <cmath>

int main(){

 using namespace std;

 int i,j,z{0} ,tope;
 long numPerfecto;
 long factor,cuenta;
 int arreglo[100000]{0};
 int arregloLogico[100000]{0};
 int arregloCasiPerf[100000]{0};

 cout<<"ingresar el tope para imprimir los perfectos ";
 cin>>tope;

 for(i=2;i<tope;i++)
  arreglo[i]=i;

//marco las posiciones pares 
for(i=2;i<=sqrt(tope);i++)
  if(!(arregloLogico[i]))
    {//solo va a entrar cuando la posicion no ha sido marcada
     for(j=i;j<=tope/i;j++){
         //cout<<"posicion marcada" <<i;
         arregloLogico[i*j]=1;
     }
    }

cout<<endl<<"numeros perfectos"<<endl;
 for(i=2;i<tope;i++)
   if(!arregloLogico[i]) 
     {
      arregloCasiPerf[z] = pow(2,arreglo[i]-1) * (pow(2,arreglo[i]) - 1);
      numPerfecto = pow(2,arreglo[i]-1) * (pow(2,arreglo[i]) - 1);
      
      ///factor=pow(2,arreglo[i]-1) ;
      //verificar si arreglo[i]-1 es primo
      /*cuenta=0;
      z=1;
      while(z<=factor){
          cout<<"entre al while"<<factor<<" " <<z;
          if(!(factor%z))
            cuenta++;
          factor++;
          cout<<cuenta<<" ";
          z++;
      }
       if(cuenta==2)
     */
         cout<<arreglo[i] <<" - " <<numPerfecto<<"-"<<endl;
       
     }

}