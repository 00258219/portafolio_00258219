
//oscar enrique orellana monterrosa - 00258219 - sec:02
#include <iostream>

using namespace std;

void mediana(int n, float *medianaNumber, int *array){
    int medio = n/2;
    if(n%2 == 0){
        *medianaNumber = array[medio-1] + array[medio];
        *medianaNumber =  *medianaNumber/2;
    }else{
        *medianaNumber = array[medio];
    }
}

int main(){
    
    int number=0;
    float medianaNumber=0;
    
    cout << "Ingresa la cantidad de datos que quiere colocar en el arreglo: "; cin >> number;
    int array[number];
    
    cout << "Ahora ingresa los datos" << endl;
    for(int i=0; i<number; i++){
        cout << "Ingresar: "; cin >> array[i];
    }
    
    cout << "Tu arreglo: [ ";
    for(int i=0; i<number; i++){
        cout << array[i] << " ";
    }
    cout << "]" << endl;
    
    mediana(number, &medianaNumber, array);
    
    cout << "La mediana del arreglo es: " << medianaNumber << endl;
}
