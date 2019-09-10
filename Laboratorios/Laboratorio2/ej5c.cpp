#include <iostream>
#include <stdlib.h>

using namespace std;

void recibirT(int *t, int n, int in, int value){
    int aux;
    for(int i=0; i<in; i++){
        if(*(t+n*in+i) == 0){
            aux = i;
        }else{
            aux = i-1;
            i = in;
        }
    }
    *(t+n*in+aux) = value;
    
    for(int i=0; i<in; i++){
        cout << i+1 << "-    " << *(t+n*in+i) << endl;
    }
    cout << "----------" << endl;
    cout << "Torre " << n+1 << endl << endl;
}

void moverT(int *t, int n, int in){
    int disc;
    int towerM;
    int value = 0;
    int cantMove = in;
    for(int i=0; i<in; i++){
        if(*(t+n*in+i) != 0 and i < cantMove){
            cantMove = i+1;
        }
        cout << i+1 << "-    " << *(t+n*in+i) << endl;
    }
    cout << "----------" << endl;
    cout << "Torre " << n+1 << endl << endl;
    cout << "**Ingrese el disco que quiere mover: "; cin >> disc;
    if(disc > cantMove){
        cout  << endl << "No puedes escoger ese disco, vuelve a intentar." << endl << endl;
        return;
    }
    if(*(t+n*in+disc-1) == 0){
        cout << "no puedes mover un disco sin valor." << endl << endl;
        return;
    }
    cout << "***Ahora ingresa a que torres lo quieres mover: "; cin >> towerM;
    //viendo si se puede meter
    int aux;
    for(int i=0; i<in; i++){
        if(*(t+(towerM-1)*in+i) == 0){
            aux = i;
        }else{
            aux = i-1;
            i = in;
        }
    }
    value = *(t+n*in+disc-1);
    if(value > *(t+(towerM-1)*in+aux+1) and  *(t+(towerM-1)*in+aux+1) != 0){
        cout << endl << "No puedes mover ese disco a esa torre, vuelve a intetarlo" << endl;
        return;
    }
    //terminando de ver
    *(t+n*in+disc-1) = 0;
    
    recibirT(t, towerM-1, in, value);
}

int main (){
    int n, towerM, towerS;
    cout << "Ingresa el numero de discos que quieres usar: "; cin >> n;
    
    int torres[3][n];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            if(i == 0){
                torres[i][j] = j+1;
            }else{
                torres[i][j] = 0;
            }
        }
    }
    
    cout << "Estas son las torres en el inicio:" << endl << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cout << "    " << torres[i][j] << endl;
        }
        cout << "----------" << endl;
        cout << "Torre " << i+1 << endl << endl;
    }
    
    while(torres[2][0] != 1){
        cout << "*Ingresa la torre que quieres moverle un disco: "; cin >> towerM;
        moverT(*torres, towerM-1, n);
    }
    cout << "WEEEEON HAS GANADO!!!!" << endl;
    
    return 0;
}
