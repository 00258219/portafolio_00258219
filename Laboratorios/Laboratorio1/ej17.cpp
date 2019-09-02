#include <iostream>
#include <string>

using namespace std;


int main (){

    int array[10], suma=0, i=0;
    cout << "Ingresar 10 numeros para obeter la suma y el promedio." << endl << endl;

    while(i < 10){
        cout << i+1 << "- Ingresar: "; cin >> array[i];
        suma += array[i];
        i++;
    } 

    cout << endl << "La suma es: " << suma << endl;
    cout << "El promedio es: " << suma/10 << endl;
    
    return 0;
}
