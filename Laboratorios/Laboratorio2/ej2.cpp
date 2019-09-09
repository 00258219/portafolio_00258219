#include <iostream>
#include <stdlib.h>

using namespace std;

float rec(float n, float r){
    float r2 = ( ((n/r)+r) /2);
    
    if(abs(r2 - r) < 0.0001){
        return r;
    }else{
        rec(n, r2);
    };
}

int main (){
    int n;
    cout << "Ingresar n: "; cin >> n;

    cout << "La raiz cuadrada es: " << rec(n, 1) << endl;

    return 0;
}























