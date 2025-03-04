/*arreglos de structs, paso de parámetros, retorno de structs*/
#include <iostream>
using namespace std;
const int TAM=5;
struct Fecha{
    int dd,aa;
    string mm;
};
struct Refresco{
    int claveRef;
    string nombreRef;
    float preRef;
    Fecha fecProd;
};
void menu();
void capturar(Refresco sodas[]);
int capturaClave();
Refresco buscar(Refresco[],int);
void mostrar(Refresco);
void ordenar(Refresco sodas[]);
void ordenarFecha(Refresco sodas[]);

int main(){
    menu();
}

void menu(){
    Refresco reg, sodas[TAM];
    int opc,clave;
    do{
        cout<<"FABRICA DE REFRESCOS \n";
        cout<<"1. Captura de refrescos \n";
        cout<<"2. Busqueda de refrescos \n";
        cout<<"3. Ordenacion por clave\n";
        cout<<"4. Ordenacion por fecha \n";
        cout<<"5. Salir \n";
        cout<<"Tu opcion: ";
        cin>>opc;
        switch(opc){
            case 1:capturar(sodas);break;
            case 2:clave=capturaClave();
                reg=buscar(sodas,clave);
                mostrar(reg);
            case 3:ordenar(sodas);
            case 4:ordenarFecha(sodas);
        }
    }while(opc!=4);
}
int capturaClave(){
    int clave;
    cout<<"Clave a buscar: ";
    cin>>clave;
    return clave;
}
void capturar(Refresco sodas[]){
    for(int i=0;i<TAM;i++){
        cout<<"Clave: \n";
        cin>>sodas[i].claveRef;
        cout<<"Nombre: \n";
        cin>>sodas[i].nombreRef;
        cout<<"Precio: \n";
        cin>>sodas[i].preRef;
        cout<<"Fecha de produccion: \n";
        cout<<"Dia: ";
        cin>>sodas[i].fecProd.dd;
        cout<<"Mes: ";
        cin>>sodas[i].fecProd.mm;
        cout<<"Anio: ";
        cin>>sodas[i].fecProd.aa;
    }
}
Refresco buscar(Refresco sodas[],int clave){
    Refresco aux;
    aux.claveRef=-1;
    for(int i=0;i<TAM;i++){
        if(sodas[i].claveRef==clave){
            aux=sodas[i];
            break;
        }
    }
    return aux;
}
void mostrar(Refresco reg){
    cout<<"Clave: "<<reg.claveRef<<endl;
    cout<<"Nombre: "<<reg.nombreRef<<endl;
    cout<<"Precio: "<<reg.preRef<<endl;
    cout<<"Fecha de produccion: "<<reg.fecProd.dd<<"/"<<reg.fecProd.mm<<"/"<<reg.fecProd.aa<<endl;
}
void ordenar(Refresco sodas[]){
    Refresco temp;
    for(int i=0;i<TAM-1;i++){
        for(int j=i+1;j<TAM;j++){
            if(sodas[i].claveRef>sodas[j].claveRef){
                temp=sodas[i];
                sodas[i]=sodas[j+1];
                sodas[j+1]=temp;
            }
        }
    }
    for(int i=0;i<TAM;i++){
        mostrar(sodas[i]);
    }
}
void ordenarFecha(Refresco sodas[]){
    Refresco temp;
    for(int i=0;i<TAM-1;i++){
        for(int j=i+1;j<TAM;j++){
            if(sodas[i].fecProd.aa>sodas[j].fecProd.aa){
                temp=sodas[i];
                sodas[i]=sodas[j+1];
                sodas[j+1]=temp;
            }
        }
    }
    for(int i=0;i<TAM;i++){
        mostrar(sodas[i]);
    }
}