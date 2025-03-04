/* manejo de estructuras, uniones y enum */
#include <iostream>
using namespace std;

void captura(Persona&);

struct Fecha{
    int dd,aa;
    char mm[12];
};

union EdoCivil{
    char soltero[10];
    char casado[10];
    char viudo[10];
};

struct Persona{
    char curp[18];
    EdoCivil edo;
    Fecha nac;
};

enum Dias{LUN,MAR,MIE,JUE,VIE,SAB,DOM};

int main(){
    Persona tito;
    captura(tito);
}

void captura(Persona& tito){
    cout<<"CURP: ";
    cin>>tito.curp;
    cout<<"Estado civil: ";
    cin>>tito.edo.soltero;
    cout<<"Fecha de nacimiento: ";
    cin>>tito.nac.dd>>tito.nac.mm>>tito.nac.aa;
    cout<<"Dia de la semana: ";
    int dia;
    cin>>dia;
    switch(dia){
        case LUN:cout<<"Lunes";break;
        case MAR:cout<<"Martes";break;
        case MIE:cout<<"Miercoles";break;
        case JUE:cout<<"Jueves";break;
        case VIE:cout<<"Viernes";break;
        case SAB:cout<<"Sabado";break;
        case DOM:cout<<"Domingo";break;
        default:cout<<"Dia no valido";break;
    }
}