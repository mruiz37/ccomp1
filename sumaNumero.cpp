//programa que reciba 4 nùmeros y 
// que demuestre la precedencia 
// de todos los nùmeros
#include <iostream>
int main(){
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int resultado;
std::cout<<"Ingrese 4 numeros para aplicar la precedencia de operadores"<<std::endl;
std::cin>>numero1;
std::cin>>numero2;
std::cin>>numero3;
std::cin>>numero4;

resultado = numero1*numero2+numero3*numero4;
std::cout<<"Para esta operacion numero1*numero2+numero3*numero4, obtengo ";
std::cout<<resultado<<std::endl;;

resultado = numero1+numero2*numero3+numero4;
std::cout<<"Para esta operacion numero1+numero2*numero3+numero4, obtengo ";
std::cout<<resultado<<std::endl;;


resultado = numero1+numero4/numero2*numero4/numero1+numero4;
std::cout<<"Para esta operacion numero1+numero4/numero2*numero4/numero1+numero4, obtengo ";
std::cout<<resultado<<std::endl;;

resultado = numero4/numero1*numero2/numero1+numero1+numero4;
std::cout<<"Para esta operacion numero4/numero1*numero2/numero1+numero1+numero4, obtengo ";
std::cout<<resultado<<std::endl;;

resultado = numero4/numero1*numero2/numero1-numero1-numero4;
std::cout<<"Para esta operacion numero4/numero1*numero2/numero1-numero1-numero4, obtengo ";
std::cout<<resultado<<std::endl;;




    return 0;
}
