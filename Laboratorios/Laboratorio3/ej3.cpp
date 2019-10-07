//oscar enrique orellana monterrosa - 00258219 - sec: 02
#include <iostream>
#include <string>

using namespace std;

struct libro{
    string tiulo[100];
    int numPaginas[100];
    int top;
};
typedef struct libro Libro;

void initialize(Libro *s){
    s->top = -1;
}
bool empty(Libro *s){
    return s->top < 0;
}
void push(Libro *s, string e, int numberP){
    if(s->top < 99){
        (s->top)++;
        s->tiulo[s->top] = e;
        s->numPaginas[s->top] = numberP;
    }
}
void pop(Libro *s){
    if(s->top >= 0){
        cout << "*Libro: " << s->tiulo[s->top] << endl;
        cout << "Paginas: " << s->numPaginas[s->top] << endl;
        (s->top)--;
    }
}

void takeLastLikePeek(Libro s){
    if(!empty(&s)){
        pop(&s);
        takeLastLikePeek(s);
    }
}

void meter(Libro *s){
    int pages;
    string tittle = "";
    cin.ignore(100,'\n');   
    cout << "Ingrese el nombre del libro: "; getline(cin, tittle);
    cout << "Ingrese el numero de paginas del libro: "; cin >> pages;

    push(s, tittle, pages);

}

int main(){
    Libro libreria;
    
    initialize(&libreria);
    push(&libreria, "EL bosque", 33);
    push(&libreria, "El principito", 140);

    while(true){
        cout << "1-Meter libro" << endl;
        cout << "2-Ver la libreria" << endl;
        cout << "3-Terminar" << endl;
        int n;
        cin >> n;

        if(n == 1){
            meter(&libreria);
        }else if(n == 2){
            cout << endl << "Tus libros son: " << endl;
            takeLastLikePeek(libreria);
        }else if(n == 3){
            return 0;
        }
        cout << endl;
    }
    
    return 0;
}