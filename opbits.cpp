#include <iostream>
int main() {
   using namespace std;

   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           

   c = a & b;       /* 12 = 0000 1100 */ 
    
   cout<<"c = a & b, el valor de c es: "<<c<<endl;

    
   c = a | b;       /* 61 = 0011 1101 */
   cout<<"c = a | b, el valor de c es: "<<c<<endl;
   //printf("Line 2 - Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   cout<<"c = a ^  b, el valor de c es: "<<c<<endl;
   //printf("Line 3 - Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   cout<<"c = ~a , el valor de c es: "<<c<<endl;
   //printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   cout<<"c = <<2 , el valor de c es: "<<c<<endl;
   
   //printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   cout<<"c = >>2 , el valor de c es: "<<c<<endl;
   //printf("Line 6 - Value of c is %d\n", c );
  
   return 0;
}