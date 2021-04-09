
#include<iostream>
int resultado;

int main(){
    using namespace std;
    cout <<"ingresar un numero entero por pantalla";
    cin>>resultado;
    while(resultado%2 ==0 & resultado>1){
        resultado=resultado/2;
    }
    if (resultado ==1)
       cout<<"el numero es potencia de 2";
    else
       cout<<"el numero no es potencia de 2"; 

return 0;
}