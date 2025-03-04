//ultimo ejercicio
//llenar una matriz de enteros
#include <iostream>
#include <stdio.h>
#define REN 3
#define COL 3

void llenar(int matriz[REN][COL]){
    //recorrer renglones
    for(int i=0;i<REN;i++){
        //recorrer columnas
        for(int j=0;j<COL;j++){
            printf("valor [%d][%d]\n",i,j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}
void mostrar(int matriz[REN][COL]){
    for(int i=0;i<REN;i++){
        for(int j=0;j<COL;j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[REN][COL];
    llenar(matriz);
    mostrar(matriz);
    //recorrer renglones
    for(int i=0;i<REN;i++){
        //recorrer columnas
        for(int j=0;j<COL;j++){
            printf("valor [%d][%d]",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }


    return 0;
}