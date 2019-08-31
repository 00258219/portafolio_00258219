
//oscar enrique orellana monterrosa - 00258219 - sec:02
#include <iostream>

using namespace std;

string ver(int bol){
    if(bol){
        return "Verdadero";
    }else{
        return "falso";
    }
    return "";
}

int main(){
    
    int a[10][20];
    
    cout << endl << "Parte 1" << endl;
    cout << "Encontrando la dirección de:" << endl << endl;
    cout << "a[0][0] es: " << 100 << endl;
    cout << "a[2][1] es: " << 141 << endl;
    cout << "a[5][1] es: " << 201 << endl;
    cout << "a[1][10] es: " << 130 << endl;
    cout << "a[2][10] es: " << 150 << endl;
    cout << "a[5][3] es: " << 203 << endl;
    cout << "a[9][19] es: " << 399 << endl;
    
    int matrix[2][3] = {{6,7,3},{4,9,1}};
    int i=1, j=2;
    
    cout << endl << "Parte 2" << endl << endl;
    cout << "matrix[0][0] = *(*(matrix)) esto es: " << ver(matrix[0][0] == *(*(matrix))) << endl;
    cout << "matrix[i][j] = *((*(matrix)) + (i * 3 + j)) esto es: " << ver(matrix[i][j] = *((*(matrix)) + (i * 3 + j))) << endl;
    cout << "matrix[i][j] = *(*(matrix + i) + j) esto es: " << ver(matrix[i][j] = *(*(matrix + i) + j)) << endl;
    cout << "matrix[i][j] = *(matrix[i] + j) esto es: " << ver(matrix[i][j] = *(matrix[i] + j)) << endl;
    cout << "matrix[i][j] = (*(matrix + i))[j] esto es: " << ver(matrix[i][j] = (*(matrix + i))[j]) << endl;
    
    return 0;
}
