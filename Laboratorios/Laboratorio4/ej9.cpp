#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
    string carnet;
    string name;
    string last;
    int edad;
    int tel;
    string mail;
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
            int  edad, tel;
            string carnet, name, last, mail;

            cout << "Ingresa carnet: "; cin >> carnet;
            cin.ignore();
            cout << "Ingresa nombres: "; getline(cin, name);
            cout << "Ingresa apellidos: "; getline(cin, last);
            cout << "Ingresa edad: "; cin >> edad;
            cout << "Ingresa telefono: "; cin >> tel;
            cin.ignore();
            cout << "Ingresa correo electronico: "; getline(cin, mail);


            Nodo *n = new Nodo;
            n->carnet = carnet;
            n->name = name;
            n->last = last;
            n->edad = edad;
            n->tel = tel;
            n->mail = mail;

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

        void removeP(){
            string carnet;
            cout << "Carnet de la persona que quieres eliminar: ";
            cin >> carnet;
            
            Nodo *p = inicio, *q = NULL;
            
            while(p != NULL && (p->carnet) != carnet){
                q = p;
                p = p->sig;
            }
            if(p == NULL){
                cout << "Libro a borrar NO existe" << endl;
                return;
            }
            if(q == NULL)
                inicio = p->sig;
            else
                q->sig = p->sig;
            delete(p);
            cout << "La persona fue eliminada" << endl;
        }

        void actualizar(){
            string carnet;
            cout << "Carnet de la persona que quieres actualizar: ";
            cin >> carnet;
            
            Nodo *p = inicio, *q = NULL;
            
            while(p != NULL && (p->carnet) != carnet){
                q = p;
                p = p->sig;
            }
            if(p == NULL){
                cout << "Persona no existe" << endl;
                return;
            }

            Nodo *n = crearNodo();
            n->sig = p->sig;
            if(q == NULL)
                inicio = n;
            else
                q->sig = n;

            cout << "La persona fue actualizada" << endl;
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
                    cout << endl << "*Carnet: "<< temp->carnet << endl;
                    cout << "   Nombres: "<< temp->name << endl;
                    cout << "   Apellidos: "<< temp->last << endl;
                    cout << "   Edad: "<< temp->edad << endl;
                    cout << "   Telefono: "<< temp->tel << endl;
                    cout << "   Correo electronico: "<< temp->mail << endl;
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
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Eliminar Persona"
        << "\n\t3) Actualizar\n\t4) Mostrar Personas"
        << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                meter();
                break;
            case 2:
                unaLista.removeP();
                break;
            case 3:
                unaLista.actualizar();
                break;
            case 4:
                unaLista.show();
                break;
            case 5: 
                return 0;
                break;
            default: 
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);

    
    return 0;
}