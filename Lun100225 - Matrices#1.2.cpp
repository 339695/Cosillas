#include <iostream>
#include <stdlib.h>
#include <time.h>
#define REN 4
#define COL 3
using namespace std;

void menu(int [][COL], int [][COL], int);
void llenarMat(int [][COL]);
void suma(int [][COL], int [][COL]);
void escalar(int [][COL], int);
void transpuesta(int [][COL]);
void convertir(int [][COL]);

int main(){
    srand(time(NULL));
    int matA[REN][COL], matB[REN][COL], numEscalar = 0;
    llenarMat(matA);
    llenarMat(matB);
    cout << "Valor del escalar: ";
    cin >> numEscalar;
    menu(matA, matB, numEscalar);
    return 0;
}

void menu(int matA[][COL], int matB[][COL], int numEscalar){
    int opc;
    do{
        cout << "1. Suma de matrices\n";
        cout << "2. Multiplicacion por un escalar\n";
        cout << "3. Transpuesta de una matriz\n";
        cout << "4. Convertir la matriz en un arreglo\n";
        cout << "5. Salir\n";
        cin >> opc;
        switch(opc){
            case 1: suma(matA, matB); break;
            case 2: escalar(matA, numEscalar); break;
            case 3: transpuesta(matA); break;
            case 4: convertir(matB); break;
        }
    }
    while(opc != 5);
}

void llenarMat(int matriz[][COL]){
    for(int i = 0; i < REN; i++){
        for(int j = 0; j < COL; j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

void suma(int matA[][COL], int matB[][COL]){
    int matC[REN][COL];
    for(int i = 0; i < REN; i++){
        for(int j = 0; j < COL; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
            cout << matC[i][j] << "\t";
        }
        cout << endl;
    }
}

void escalar(int matriz[][COL], int numEscalar){
    int matE[REN][COL];
    for(int i = 0; i < REN; i++){
        for(int j = 0; j < COL; j++){
            matE[i][j] = numEscalar * matriz[i][j];
            cout << matE[i][j] << "\t";
        }
        cout << endl;
    }
}

void transpuesta(int matriz[][COL]){
    int matT[COL][REN];
    for(int i = 0; i < REN; i++){
        for(int j = 0; j < COL; j++){
            matT[j][i] = matriz[i][j];
        }
    }
    for(int i = 0; i < COL; i++){
        for(int j = 0; j < REN; j++){
            cout << matT[i][j] << "\t";
        }
        cout << endl;
    }
}

void convertir(int matriz[][COL]){
    int arr[REN * COL], k = 0;
    for(int i = 0; i < REN; i++){
        for(int j = 0; j < COL; j++){
            arr[k++] = matriz[i][j];
        }
    }
    for(int i = 0; i < REN * COL; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
