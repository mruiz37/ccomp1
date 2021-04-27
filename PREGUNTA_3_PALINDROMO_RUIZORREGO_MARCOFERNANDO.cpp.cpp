#include<iostream>
using namespace std;

int main(){
    int numprueba=1000000;
    int res,div=1,numdigitos=0;
    int nuevoNum=0;
    res=numprueba;
    div=numprueba;
    while(div>0){
        res=div%10;
        cout<<res<<endl;
        div=div/10;
        numdigitos=numdigitos+1;
    }
    cout<<"numero digitos"<<numdigitos;


    res=numprueba;
    div=numprueba;
    int factorMayor=1;
    while(numdigitos>1){
       factorMayor=10*factorMayor;
       numdigitos=numdigitos-1;
    }
    //cout<<"factor mayor"<<factorMayor;
    nuevoNum=0;
    while(div>0){
        res=div%10;
        cout<<res<<endl;
        div=div/10;
        //numdigitos=numdigitos+1;
        nuevoNum=nuevoNum + factorMayor*res ;
        factorMayor=factorMayor/10;
        //numprueba=numprueba%100;
        //cout<<div<<endl;
    }


        if(nuevoNum==numprueba)
          cout<<"es palindromo";
        else
          cout<<"no es palindro";

    return 0;
}