#include <iostream>
#include <string>

using namespace std;

int func(int n){
    if(n==0)
        return(0);

    return(n + func(n-1));
}

int func2(int n){
    int number = 0;
    int aux = 0;

    for(int i=0; i<=n; i++){
        number = i + aux;
        aux = number;
    }

    return(number);
}


int main (){
    int n;
    cout << "Ingresar n: "; cin >> n;

    cout << func(n) << endl;
    cout << "La funcion recursiva realiza la suma del resultado de sumar todos los numeros anteriores de n." << endl << endl;

    cout << "Con función iterativa: " << func2(n) << endl;
    
    return 0;
}























