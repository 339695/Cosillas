//método de ordenación de la burbuja
//método de búsqueda secuencial
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void menu(int vector[TAM]);
void llenar(int vector[TAM]);
void mostrar(int vector[TAM]);
void ordenar(int vector[TAM]);
bool buscar (int datoB,int vector[TAM]);
int buscarPos(int datoB,int vector[TAM]);
int buscarCant(int datoB,int vector[TAM]);

int main(){
    srand(time(NULL));
    //inicialización de el areeglo
    int vector[]={0,0,0,0,0};
    llenar(vector);
    menu(vector);
    return 0;
}


void menu(int vector[TAM]){
    int opc, datoB,res;
    do{
    printf("\n Ordenación y búsqueda\n");
    printf("1   Ordenacion\n");
    printf("2   Busqueda\n");
    printf("3   Mostrar\n");
    printf("4   Salir\n");
    printf("seleccione la opcion:   \n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1: mostrar(vector);
            ordenar(vector);
            mostrar(vector);
        break;
    case 2: printf("dato a buscar");
    scanf("%d", &datoB);
    res=buscar(datoB,vector);
    if(res==true){
        printf("el valor existe");
    }
    else{
        printf("el valor no existe");
    }
    printf("posicion del valor: %d\n",buscarPos(datoB,vector));
    printf("cuántas veces fue encontrado: %d\n");
    break;
    }
    }
    while (opc!=4);
}
void llenar(int vector[TAM]){
    for(int i=0;i<TAM;i++){
        vector[i]=rand()%101;
    }
}
void mostrar(int vector[TAM]){
    for(int i=0;i<TAM;i++){
        printf("%i\t", vector[i]);
    }
}
void ordenar(int vector[TAM]){
    int temp=0;
    for(int i=0;i<TAM;i++){    //recorrer los elementos del arreglo
        for(int j=0;j<TAM-1;j++){   //comparar parejas de datos
        if(vector[j]>vector[j+1]){
            //intercambiar valores --- swap
            temp=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=temp;
        }
        }
    }
}
bool buscar(int datoB, int vector[TAM]){
    return false;
}