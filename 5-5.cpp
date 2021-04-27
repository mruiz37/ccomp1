#include<iostream>
using namespace std;

int main(){
unsigned int total{0};

for(unsigned int number{2}; number<=20; number+=2)  
 { 
     total += number;  
     cout<< number<<endl;
 }

 cout<<"la suma total es "<< total<<endl;
    return 0;
}