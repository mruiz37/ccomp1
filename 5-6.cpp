#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){

    cout<<fixed<<setprecision(2);
    double principal{1000.00};
    double rate{0.05};

    cout<<" capital inicial"<<principal<<endl;
    cout<<" tasa de interes"<<rate;

    cout<<"\nYear "<<setw(20)<<"Monto de deposito"<<endl;   

    for(unsigned int year{1}; year<=10 ; year++)
    {
        double amount = principal * pow(1.0 + rate, year);
        cout<<setw(4)<<year<<setw(20)<<amount<<endl;
    }


}