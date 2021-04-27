#include<iostream>
using namespace std;

int  tripleByValue(int valor);
void tripleByReference(int&);

int main(){
int count=1;
cout<<"el valor de count antes de llamar a la funcion por referencia es "<<count<<endl;
//int &copyCount=count;
tripleByValue(count);
cout<<"el valor de count luego de llamar a la funcion por referencia es "<<tripleByValue(count)<<endl;
cout<<"el valor de la variable original permanece intacto "<<count<<endl;
tripleByReference(count);
cout<<"ahora imprimo el valor de la variable original luego del pase por refencia "<<count;



 return 0;
}

int tripleByValue(int valor){
    return valor*3;
}

void tripleByReference(int& valor){
    valor=valor*3;
}
