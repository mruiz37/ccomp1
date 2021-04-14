#include<iostream>

int main(){
    int num,i=2, fib1, fib2 ;
    using namespace std;
    cout<<"Ingresar el número tope para la serie de fibonacci ";
    cin>>num;
    fib1=1;
    fib2=2; 
    cout<<fib1<< " ";

    while( i<num ){
       cout << fib2 << " ";
       fib2 = fib1 + fib2;
       fib1 = fib2 - fib1;
       i++;
    }
    return 0;
}