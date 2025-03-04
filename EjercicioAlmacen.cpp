// Ejercicio completo arreglos de structs
#include <iostream>
#include <string.h>
using namespace std;
const int SIZE=5;
static int top=0;//variable estatica
struct Person{
    int dni;
    char name[25];
    long phoneNum;
};
struct Automovil{
    int serialNumber;
    char model[15];
    float price;
    int stock;
    bool exist;
    Person owner;
};
void menu();
void capture(Automovil[]);
int main(){
    menu();
    return 0;
}
void menu(){
    int option;
    Automovil sales[SIZE];
    do{
        cout<<"GENERAL MOTORS AGENCY"<<endl;
        cout<<"1. Capture data: "<<endl;
        cout<<"2. Show data"<<endl;
        cout<<"3. Sales: "<<endl;


        cout<<"6. Salir"<<endl;
        cin>>option;
        switch(option){
            case 1:capture(sales);break;
            case 2:
                // Mostrar automoviles
                break;
            case 3:
                // Buscar automovil
                break;
            case 4:
                // Vender automovil
                break;
            case 5:
                cout<<"Saliendo del programa"<<endl;
                break;
            default:
                cout<<"Opcion incorrecta"<<endl;
        }
    }while(option!=5);
}

void capture(Automovil sales[]){
    //before to capture, we have to check if there is room
    if(top<SIZE){
        cout<<"Serial number: ";
        cin>>sales[top].serialNumber;
        cout<<"Model: ";
        cin>>sales[top].model;
        cout<<"Price: $";
        cin>>sales[top].price;
        cout<<"Stock: ";
        cin>>sales[top].stock;
        sales[top].exist=true;
        sales[top].owner.dni=0;
        strcpy(sales[top].owner.name,"Agency");
        sales[top].owner.phoneNum=(long)44937354593;
        top++;
    }
    else{
        cout<<"no space available"<<endl;
    }
}