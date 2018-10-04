#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
//Programa que determina si un número es par o impar
 
  int num;
 
  cout<<"Escriba un numero: ";
  cin>>num;
 
  if(num % 2 == 0){
        cout<<"El numero es Par\n";
        }
 
   else{
     cout<<"El numero es Impar\n";
     }
     return 0;
}

