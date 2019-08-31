//oscar enrique orellana monterrosa - 00258219 - sec: 02
#include <iostream>

using namespace std;

int mult(int a, int b){
    if(b==1){
        return a;
    }else{
        int x = b - 1;
        int y = mult(a, x);

        return a + y;
    }
}

int main()
{
    cout << "Multiplicando de manera recursiva." << endl << endl;
    cout << "Multiplicacion de 5 * 4" << endl;
    int r = mult(5, 4);
    cout << "Resultado: " << r << endl;
    
    return 0;
}
