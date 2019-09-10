#include <iostream>
#include <stdlib.h>

using namespace std;

void imprimir(int *t, int n, char l){
    for(int i=0; i<n; i++){
        cout << "    " << *(t+i) << endl;
    }
    cout << "----------" << endl;
    cout << "Torre " << l << endl << endl;
}

//void moverT(int* t, int n, int in){
//    for(int i=0; i<in; i++){
//        cout << "    " << *t[n][i] << endl;
//    }
//    cout << "----------" << endl;
//    cout << "Torre " << n << endl << endl;
//
//}

int main (){
    int n, towerM, towerS;
    cout << "Ingresa el numero de discos que quieres usar: "; cin >> n;
    
    int torreA[n];
    int torreB[n];
    int torreC[n];

    int torres[3][n];
    
    for(int i=0; i<n; i++){
        torreA[i] = i+1;
        torreB[i] = 0;
        torreC[i] = 0;
    }
    
    cout << "Estas son las torres en el inicio:" << endl << endl;
    imprimir(torreA, n, 'A');
    imprimir(torreB, n, 'B');
    imprimir(torreC, n, 'C');
    
//    for(int i=0; i<3; i++){
//        for(int j=0; j<n; j++){
//            cout << "    " << torres[i][j] << endl;
//        }
//        cout << "----------" << endl;
//        cout << "Torre " << alp[i] << endl << endl;
//    }
    
    while(torreC[0] != 0){
        cout << "Ingresa la torre que quieres moverle un disco: "; cin >> towerM;
        moverT(torres, towerM, n);
    }
    
    return 0;
}
