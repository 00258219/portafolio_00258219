
//oscar enrique orellana monterrosa - 00258219 - sec:02
//diana sugeyth umaña rodriguez - 00143619 - sec:02
#include <iostream>
#include <string>

using namespace std;
//El struct que usaremos para crear los continentes
struct continente{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
    float promedio[5];
};
typedef struct continente Continente;

//la funcion que llenara los structs de los continentes
void llenar(Continente *cont){
    string nombre, pais, capital;
    int habitantes;
    float promedio;
    cout<<(*cont).nombre<<endl;
    cout<<"Ingrese 5 paises"<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<"Pais "<<i+1<<": "; getline(cin, pais);
        (*cont).pais[i]=pais;
        cout<<"     Capital: "; getline(cin, capital);
        (*cont).capital[i]=capital;
        cout<<"     Numero de habitantes: "; cin>>habitantes;
        (*cont).habitantes[i]=habitantes;
        cout<<"     Promedio de edades: "; cin>>promedio;
        (*cont).promedio[i]=promedio;
        cin.ignore(100,'\n');
    }
    cout << endl;
}
//funcion que saca la poblacion total
int ptotal(Continente *cont){
    int poblaciontotal=0;
    for(int i=0;i<5;i++){
        poblaciontotal+=(*cont).habitantes[i];
    }
    return poblaciontotal;
}
//funcion que muestra la poblacion de total del continente que elijan
void poblacionTotal(Continente *af, Continente *am, Continente *as, Continente *eu, Continente *oc){
    int opcion=0, poblaciontotales=0;;
    cout << "*Ahora, Ingrese el numero del continente que desea conocer su poblacion total: " << endl;
    cout << "1) Africa "<< endl;
    cout << "2) America"<< endl;
    cout << "3) Asia "<< endl;
    cout << "4) Europa"<< endl;
    cout << "5) Oceania "<< endl;
    cin >> opcion;
    switch(opcion){
        case 1:
            poblaciontotales= ptotal(af);
            cout<<"La poblacion total del continente es: "<<poblaciontotales<<endl<<endl;
            break;
        case 2:
            poblaciontotales= ptotal(am);
            cout<<"La poblacion total del continente es: "<<poblaciontotales<<endl<<endl;
            break;
        case 3:
            poblaciontotales= ptotal(as);
            cout<<"La poblacion total del continente es: "<<poblaciontotales<<endl<<endl;
            break;
        case 4:
            poblaciontotales= ptotal(eu);
            cout<<"La poblacion total del continente es: "<<poblaciontotales<<endl<<endl;
            break;
        case 5:
            poblaciontotales= ptotal(oc);
            cout<<"La poblacion total del continente es: "<<poblaciontotales<<endl<<endl;
            break;
    }
}
//funcion que busca el nombre del pais con mas habitantes de un continente especifico
string masHabitantes(Continente *cont){
    int mayor=0;
    string mayorc;
    for(int i=0;i<5;i++){
        if ((*cont).habitantes[i]>mayor){
            mayor=(*cont).habitantes[i];
            mayorc=(*cont).pais[i];
        }
    }
    return mayorc;
}
//funcion que muestra que pais tiene mas habitatenes de un continente
void paisMasHabitantes(Continente *af, Continente *am, Continente *as, Continente *eu, Continente *oc){
    int opcion = 0;
    string capitalmas;
    cout << "*Ahora, ingresa el numero del continente que desea conocer su pais con mas poblacion: " << endl;
    cout << "1) Africa "<< endl;
    cout << "2) America"<< endl;
    cout << "3) Asia "<< endl;
    cout << "4) Europa"<< endl;
    cout << "5) Oceania "<< endl;
    cin >> opcion;
    switch(opcion){
        case 1:
            capitalmas= masHabitantes(af);
            cout<<"El pais mas poblado es: "<<capitalmas<<endl<<endl;
            break;
        case 2:
            capitalmas= masHabitantes(am);
            cout<<"El pais mas poblado es: "<<capitalmas<<endl<<endl;
            break;
        case 3:
            capitalmas= masHabitantes(as);
            cout<<"El pais mas poblado es: "<<capitalmas<<endl<<endl;
            break;
        case 4:
            capitalmas= masHabitantes(eu);
            cout<<"El pais mas poblado es: "<<capitalmas<<endl<<endl;
            break;
        case 5:
            capitalmas= masHabitantes(oc);
            cout<<"El pais mas poblado es: "<<capitalmas<<endl<<endl;
            break;
    }
}
//funcion que saca y muestra la edad promedio mundial
void edadMundial(Continente *af, Continente *am, Continente *as, Continente *eu, Continente *oc){
    int totalEdad = 0;
    for(int i=0;i<5;i++){
        totalEdad += (*af).promedio[i];
        totalEdad += (*am).promedio[i];
        totalEdad += (*as).promedio[i];
        totalEdad += (*eu).promedio[i];
        totalEdad += (*oc).promedio[i];
    }
    
    totalEdad = totalEdad/(5*5);
    cout<<"La Edad Promedio Mundial es: "<<totalEdad<<endl<<endl;
}
    
int main (){
    int ask=1;
    
    Continente africa;
    africa.nombre = "1- Africa";
    Continente america;
    america.nombre="2- America";
    Continente asia;
    asia.nombre="3- Asia";
    Continente europa;
    europa.nombre="4- Europa";
    Continente oceania;
    oceania.nombre="5- Oceania";
    
    llenar(&africa);
    llenar(&america);
    llenar(&asia);
    llenar(&europa);
    llenar(&oceania);
    
    //el menu
    while(ask <= 3 and ask != 0){
        cout << "***Ingrese el numero de la información que desea conocer: " << endl;
        cout << "1--- La poblacion total de un continente"<< endl;
        cout << "2--- El país que tenga mayor población de un continente"<< endl;
        cout << "3--- La edad promedio mundial"<< endl;
        cin >> ask;
        
        switch(ask){
            case 1:
                poblacionTotal(&africa, &america, &asia, &europa, &oceania);
                break;
            case 2:
                paisMasHabitantes(&africa, &america, &asia, &europa, &oceania);
                break;
            case 3:
                edadMundial(&africa, &america, &asia, &europa, &oceania);
                break;
        }
    }
    
    return 0;
}
