//oscar enrique orellana monterrosa - 00258219 - sec: 02
#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}
bool empty(Pila *s){
    return s->top < 0;
}
void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}
float pop(Pila *s){
    float e;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
        return e;
    }
    return e;
}

float takeLast(Pila *s){
    float devolver;
    while(!empty(s)){
        devolver = pop(s);
    }
    return devolver;
}

float takeLastLikePeek(Pila s){
    float devolver;
    while(!empty(&s)){
        devolver = pop(&s);
    }
    return devolver;
}


int main(){
    Pila unaPila;
    
    initialize(&unaPila);
    push(&unaPila, 69.2);
    push(&unaPila, 3.4);
    push(&unaPila, 5.6);
    push(&unaPila, 43.2);
    
    if(empty(&unaPila)){
        cout << "La pila estaba vacia weee" << endl;
    }else{
        cout << "El elemento del fondo de la pila es: " << takeLast(&unaPila);
    }
    if(empty(&unaPila)){
        cout << " y la pila quedo vacia." << endl;
    }
    
    cout << endl << "PARTE 2------------------------" << endl << endl;
    
    initialize(&unaPila);
    push(&unaPila, 69.2);
    push(&unaPila, 3.4);
    push(&unaPila, 5.6);
    push(&unaPila, 43.2);
    
    if(empty(&unaPila)){
        cout << "La pila estaba vacia weee" << endl;
    }else{
        cout << "El elemento del fondo de la pila es: " << takeLastLikePeek(unaPila);
    }
    if(!empty(&unaPila)){
        cout << " y la pila NO quedo vacia weee." << endl;
    }
    
    return 0;
}
