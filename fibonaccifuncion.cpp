#include<iostream>


int fibonacci(int numTope){
int n= numTope;
    if(n < 2)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
  }


int main() {
  using namespace std;
  int num,i;
  cout<<"ingrese el numero tope para la serie de fibonacci ";
  cin >> num;

  i=1;
  while(i<=num){
    cout << fibonacci(i) << " ";
  i++;
  }
  return 0;
}