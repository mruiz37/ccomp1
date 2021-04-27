#include<iostream>
#include<iomanip>
#include<vector>
#include<stdexcept>

using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int>&);

int main(){
    vector<int> integers1(7);
    vector<int> integers2(10);
    //imprime integers1 tamaño y connido
    cout<<"tamño de vector integers1 es"<< integers1.size()
    <<"\nvector despues inicializacion:";
    outputVector(integers1);
     
    //imprime integers2 tamaño y connido
    cout<<"tamño de vector integers1 es"<< integers2.size()
    <<"\nvector despues inicializacion:";
    outputVector(integers2);

    cout<<"\nIngresar 17 enteros";
    inputVector(integers1);
    inputVector(integers2);

    cout<<" despues de la entrada, el vector contiene:\n"
     <<"integers1 ";
     outputVector(integers1);
     cout<<"integers2";
     outputVector(integers2);


 return 0;
}

void outputVector(const vector<int> &items){
 for(int item : items){
     cout<<item<<" ";
 }

}
void inputVector(vector<int>&items){
    for (int& item:items){
        cin>>item;
    }

}