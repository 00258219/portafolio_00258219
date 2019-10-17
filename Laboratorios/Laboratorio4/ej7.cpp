#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
    int number;
    Nodo *sig;
};

class Lista
{
    private:
        Nodo *inicio;
        Nodo *final;

    public:
        Nodo* crearNodo()
        {
            int number;

            cout << "Ingresa un nunmero: "; cin >> number;

            Nodo *n = new Nodo;
            n->number = number;
            
            n->sig = nullptr;
            return n;
        }

        void push()
        {
            Nodo *n = crearNodo();
            if (!inicio)
            {
                inicio = n;
                final = n;
            }else
            {
                final->sig = n;
                final = n;
            }
        }

        void begin()
        {
            Nodo *n = crearNodo();
            if (!inicio)
            {
                inicio = n;
                final = n;
            }else
            {
                n->sig = inicio;
                inicio = n;
            }
        }

        void pop()
        {
            Nodo *temp = inicio;
            inicio = inicio->sig;
            free(temp);
        }

        bool removeOcu(int number){
            Nodo *p = inicio, *q = NULL;
            
            while(p != NULL && (p->number) != number){
                q = p;
                p = p->sig;
            }
            if(p == NULL){
                return false;
            }
            if(q == NULL)
                inicio = p->sig;
            else
                q->sig = p->sig;
            delete(p);
            
            removeOcu(number);
            return true;
        }

        void show()
        {
            Nodo *temp = inicio;
            if (!inicio)
            {
                cout << "Lista vacía" << endl;
            }else
            {
                while (temp)
                {
                    cout << "Number: "<< temp->number << endl;
                    temp = temp->sig;
                }
            }
        }


        Lista()
        {
            this->inicio = nullptr;
            this->final = nullptr;
        }
};


Lista unaLista;

void meter()
{
    do{
        int opcion = 0;
        cout << "1) Meter al incio\t2) Meter al final   : ";
        cin >> opcion;
        switch(opcion){
            case 1:
                unaLista.begin();
                return;
            case 2:
                unaLista.push();
                return;
            default: 
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);
}

int main()
{
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Eliminar Ocurrencias"
        << "\n\t3) Mostrar numeros"
        << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                meter();
                break;
            case 2:
                int number;
                cout << "Ocurrencia numerica que quieres eliminar: ";
                cin >> number;
                if(unaLista.removeOcu(number)){
                    cout << "Todas las ocurrencias " << number << " han sido eliminadas" << endl;
                }else{
                    cout << "No se encontro ocurrencias" << endl;
                }
                break;
            case 3:
                unaLista.show();
                break;
            case 4:
                return 0;
                break;
            default: 
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);

    
    return 0;
}
