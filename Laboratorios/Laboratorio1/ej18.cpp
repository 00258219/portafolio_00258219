#include <iostream>
#include <string>

using namespace std;


int main (){

    int array[5][5] = {};

    cout << "Completa la matriz" << endl << endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i <= j){
                cout << "Ingresa: "; cin >> array[i][j];
            }
        }
    }
    cout << endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << array[i][j] << " "; 
        }
        cout << endl;
    }
    
    
    return 0;
}
