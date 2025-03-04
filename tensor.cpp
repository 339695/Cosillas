/*hacer una matriz cubica de 5x4x3, llenarla de con valores aleatorios entre 1 y 99, e imprimirla, posteriormente calcular el tamaño en memoria de la matriz*/
#include <bits/stdc++.h>
using namespace std;
void llenar();
void mostrar();
void tamano();
int cubo[5][4][3];
int main(){
    llenar();
    mostrar();
    tamano();
}

void llenar(){
    srand(time(NULL));
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                cubo[i][j][k]=1+rand()%(100);
            }
        }
    }
}

void mostrar(){
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                cout<<cubo[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

void tamano(){
    int tamren=0, tamcol=0, tamcub=0;
    tamcub=sizeof(cubo)/sizeof(cubo[0]);
    tamren=sizeof(cubo[0])/sizeof(cubo[0][0]);
    tamcol=sizeof(cubo[0][0])/sizeof(cubo[0][0][0]);
    cout<<"Numero de capas: "<<tamcub<<endl;
    cout<<"Numero de renglones: "<<tamren<<endl;
    cout<<"Numero de columnas: "<<tamcol<<endl;
    cout<<"Tamaño total: "<<tamcub*tamren*tamcol<<endl;
}
