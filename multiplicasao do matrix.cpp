#include <bits/stdc++.h>
#define REN 3
#define COL 3
using namespace std;
void pedir(int matA[REN][COL],int matB[REN][COL]) {
    cout<<"mete los valores para la matriz A (primero fila, luego columna):"<<endl;
    for(int i=0;i<REN;i++){
        for(int j=0;j<COL;j++){
            cout<<"A["<<i<<"]["<<j<<"]: ";
            cin>>matA[i][j];
        }
    }

    cout<<"mete los valores para la matriz B (primero fila, luego columna):"<<endl;
    for(int i=0;i<REN;i++){
        for(int j=0;j<COL;j++){
            cout<<"B["<<i<<"]["<<j<<"]: ";
            cin>>matB[i][j];
        }
    }
}
void multiplicar(int matA[REN][COL],int matB[REN][COL],int matC[REN][COL]){
	//limpiasao
    for (int i = 0; i < REN; i++) {
        for (int j = 0; j < COL; j++) {
            matC[i][j] = 0;
        }
    }

    // multiplicasao
    for (int i=0;i<REN;i++) {
        for (int j=0;j<COL;j++) {
            for (int k=0;k<COL;k++) {
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
}

// imprimisao
void imprimir(int mat[REN][COL]) {
    for (int i=0;i<REN;i++) {
        for(int j=0;j<COL;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int matA[REN][COL], matB[REN][COL], matC[REN][COL];
    pedir(matA, matB);
    cout<<"Matriz A:"<<endl;
    imprimir(matA);
    cout<<"Matriz B:"<<endl;
    imprimir(matB);
    multiplicar(matA,matB,matC);
	cout<<"Resultado: "<<endl;
    imprimir(matC);
    return 0;
}