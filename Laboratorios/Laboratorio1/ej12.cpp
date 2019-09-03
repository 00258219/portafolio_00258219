#include <iostream>
#include <string>

using namespace std;

int invertir(int n, int l){
  if (n == 0){
    return l;
  }
  else{
    int base = n%10;
    int next = l*10+base;
    return invertir(n/10 ,next);
  }
}

int main (){

    int number;

    cout << "Ingrese cualquier numero entero: "; cin >> number;

    cout << "El numero invertido es: " << invertir(number, 0) << endl;
    
    return 0;
}
