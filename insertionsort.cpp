#include<iostream>
#include<array>
using namespace std;



int main(){
 array<int,6> n;
 n = {5,2,4,6,1,3};
 int i=0,j=0;

cout<<" imprimo el contenido del arreglo ";
for(i=0; i< n.size(); i++)
    cout<<n[i]<<" ";

int clave=0;

for(i=1; i< n.size(); i++)
   {clave=n[i];
    j=i-1;
    while (j>=0 && n[j]>clave )
     {
      n[j+1]= n[j];
      j--;
     }
     n[j+1]=clave;    
   }

cout<<endl<<" imprimo el contenido del arreglo ";
for(i=0; i< n.size(); i++)
    cout<<n[i]<<" ";

    return 0;
}