//oscar enrique orellana monterrosa - 00258219 - sec: 02
#include <iostream>
using namespace std;

bool isFull(int n, int m, int frente){
    if((n)%m == frente){
        cout << "**La Cola esta llena!" << endl;
        return true;
    }else{
        return false;
    }
}

void insertElement(int *cola, int *n, int m, int *frente){
    if(isFull(*n, m, *frente)){
        return;
    }else if(*frente == -1){
        *frente = 0;
    }
    (*n) = (*n) % m;

    int number;
    cout << "*Ingresa un numero: "; cin >> number;
    cola[(*n)] = number;
    (*n)++;
}

void throwElement(int *cola, int *n, int m, int *frente){
    if(*n == 0 && *frente == -1){
        cout << "Esta vacia: OVERFLOW" << endl;
        return;
    }
    cout << "*Sacando: " << cola[*frente] << endl;
    cola[*frente] = 0;
    *frente = (*frente + 1)%m;

    if(*frente == *n){
        *frente = -1;
        *n = 0;
    }
}

int main(){
    int colita[5] = {};
    int n, maximo, frente;
    maximo = 5;
    n = 0;
    frente = -1;
    
    while(true){
        int f=0;
        
        cout << "La cola Actualmente:" << endl;
        for(int i=0; i < 5; i++){
            cout << colita[i] << " ";
        }
        cout << endl;
        
        cout << "1-Meter un elemento" << endl;
        cout << "2-Sacar un elemento" << endl;
        cout << "3-Terminar" << endl;
        cin >> f;
        if(f == 1){
            insertElement(colita, &n, maximo, &frente);
        }else if(f == 2){
            throwElement(colita, &n, maximo, &frente);
        }else if(f == 3){
            break;
        }
        cout << endl;
    }
    
    
    return 0;
}
