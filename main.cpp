#include<iostream>
#include<string>
#include"Account.h"

using namespace std;

int main(){
Account myAccount;
cout<<"nombre inicial de la cuenta"<<myAccount.getName();
cout<<"ingrese un nombre";
string name;
cin >>name;

myAccount.setName(name);

cout<<"nombre de la cuenta"<<myAccount.getName()<<endl;

return 0;




}