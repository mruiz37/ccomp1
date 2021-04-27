#include<iostream>
using namespace std;

int main(){
int x=0;
cout<<"ingrese un numero "<<endl;
cin>>x;
cout<<" x  ";
for(int i=1; i<=9; i++)
    cout<<"0"<<i<<" ";
cout<<endl;

cout<<"0"<<x<<"  ";
for(int i=1; i<=9; i++)
    if(i*x<10)
     cout<<"0"<<i*x<<" ";
    else
     cout<<i*x<<" ";
    return 0;
}