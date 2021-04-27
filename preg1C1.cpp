#include<iostream>

using namespace std;

int main(){
int x=0;
int &ref =x;
while (true){
  //cout<<"valor de x previo al if"<<x<<endl;
  if(x++>=10)
    {
    //cout<<"valor de x posterior  al if"<<x<<endl;
    break;
    }
  if(ref%2)
    continue;
  cout<<" x is "<<ref<<"\n";

}
//cout<<"valor final de x"<<x<<endl;
//cout<<"valor final de ref"<<ref<<endl;
}