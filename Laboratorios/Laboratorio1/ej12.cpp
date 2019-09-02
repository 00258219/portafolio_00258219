#include <iostream>
#include <string>

using namespace std;

int invertir(int n){
    int aux;
    if(n > 9){
        aux = invertir(n/10);

        n = aux;
    }

    return n;
}

int main (){

    int number;

    cout << "Ingrese cualquier numero entero: "; cin >> number;

    cout << "El numero invertido es: " << invertir(number) << endl;
    
    return 0;
}
