#include <iostream>
int main() {
   using namespace std;

   unsigned int a = 512;	
   unsigned int b = 12;	
   int c = 0;           

   c = a << 1;     
   cout<<"c = <<1 , el valor de c es: "<<c<<endl;
   
   c = a >> 1;    
   cout<<"c = >>2 , el valor de c es: "<<c<<endl;
  
   return 0;
}