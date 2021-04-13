#include <iostream>
int main() {
   using namespace std;
   unsigned int a = 0;	
   unsigned int b = 198;	
   int c = 0;           
   c = a & b;        
   cout<<"c = a & b, el valor de c es: "<<c<<endl;
   c = a | b;       
   cout<<"c = a | b, el valor de c es: "<<c<<endl;
   c = a ^ b;       
   cout<<"c = a ^  b, el valor de c es: "<<c<<endl; 
   c = ~a;         
   cout<<"c = ~a , el valor de c es: "<<c<<endl;
   c = a << 2;     
   cout<<"c = <<2 , el valor de c es: "<<c<<endl;
   c = a >> 2;     
   cout<<"c = >>2 , el valor de c es: "<<c<<endl;
   return 0;
}