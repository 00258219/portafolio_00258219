#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct polinomio{
    float coeficiente;
    int exponente;
    
};
typedef struct polinomio Poli;

vector<Poli> lista;

Poli recibir(){
    Poli p;
    cout << "Coeficiente de x : "; cin >> p.coeficiente;
    cout << "Exponente de x: "; cin >> p.exponente;
    return p;
}

void termino(){
    float n = 0;
    float acum = 0;
    cout<<"Ingrese un valor para x: "; cin >> n;
    for (int i=0; i < lista.size(); i++) {
        acum+=lista[i].coeficiente * pow(n, lista[i].exponente);
    }
    
    cout << "Resultado: "<< acum << endl;
}

void push(){
    Poli p = recibir();
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
        << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                lista.insert(lista.begin(), p);
                return;
            case 2:
                lista.push_back(p);
                return;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);
}

int main(){
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar datos \n\t2) Ver resultado"
        << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                push();
                break;
            case 2:
                termino();
                break;
            case 3:
                return 0;
                break;
            default:
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);
    
    return 0;
}
