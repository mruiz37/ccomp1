#include<iostream>
using namespace std;


int particion(int arr[], int menor, int mayor);
void quicksort(int arr[], int menor, int mayor);
void imprimeArreglo(int arr[], int n);




int main()
{
int n=10, i;
int arr[10];
for(i = 0; i < n; i++)
 {
 cin >> arr[i];
 }
quicksort(arr, 0, n - 1);
imprimeArreglo(arr, n);

return 0;
}


int particion(int arr[], int menor, int mayor) 
{
int temporal;
int pivot = arr[mayor]; 
int i = (menor - 1);  
for (int j = menor; j <= mayor - 1; j++) 
{ 
 if (arr[j] <= pivot) 
  { 
    i++;  
    temporal = arr[i];
    arr[i] = arr[j];
    arr[j] = temporal;
  } 
} 


 temporal = arr[i + 1];
 arr[i + 1] = arr[mayor];
 arr[mayor] = temporal;

return (i + 1); 
} 


void quicksort(int arr[], int menor, int mayor) 
{ 
if (menor < mayor) 
 { 
 int pi = particion(arr, menor, mayor); 
 quicksort(arr, menor, pi - 1); 
 quicksort(arr, pi + 1, mayor); 
 } 
} 

void imprimeArreglo(int arr[], int n)
{
for(int i = 0; i < n; i++)
  {
   cout << arr[i] << " "; 
  }
}
