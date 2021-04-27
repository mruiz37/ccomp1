#include<iostream>
#include<iomanip>
#include<string>
#include"5-8.h"
using namespace std;

int main(){

    DollarAmount d1{12345};//123.45
    DollarAmount d2{1576};//15.76   

    cout<< "despues de agregar d2 ("<< d2.toString() << ") en d1 ("<< d1.toString()<<"), d1 = ";
    d1.add(d2);
    cout<<d1.toString()<<"\n";
}