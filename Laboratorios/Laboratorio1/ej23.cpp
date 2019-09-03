#include <iostream>
#include <string>

using namespace std;

struct complejo{
    int real;
    int imagi;
};
typedef complejo Complejo;

string sumando(Complejo a, Complejo b){
    int r = 0, i = 0;

    r = a.real + b.real;
    i = a.imagi + b.imagi;

    string dev = "[" + to_string(r) + " , " + to_string(i) + "]";
    return dev;
}

int main (){

    Complejo a,b;

    cout << "Sumando numeros Complejos" << endl << endl;
    
    cout << "Ingrese un numero complejo:" << endl;
    cout << "Parte Real: "; cin >> a.real;
    cout << "Parte Imaginaria: "; cin >> a.imagi;

    cout << endl << "Ingrese otro numero complejo:" << endl;
    cout << "Parte Real: "; cin >> b.real;
    cout << "Parte Imaginaria: "; cin >> b.imagi;

    cout << endl << "La suma de ello es: " << sumando(a,b) << endl;

    return 0;
}
