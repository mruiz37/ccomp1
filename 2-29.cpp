#include<iostream>
using namespace std;

int main(){

int ladoCubo;
int superficieCubo;
int volumenCubo;


cout<<"longitud de la cara (cm) \t superficie del area del cubo (cm2)  \tvolumen del cubo (cm3) "<<endl;


for(int i=0;i<=4;i++){
    cout<<i<<"\t \t  \t  \t "<<6*i*i<<"\t  \t  \t \t \t"<<i*i*i<<endl;   


}


return 0;
}