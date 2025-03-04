#include <iostream>
using namespace std;

int main(){
    int target;
    cout<<"Ingrese el target: ";
    cin>>target;
    int v[]={9,40,17,23,8,11,25,7};
    int tam=8;
    bool encontrado=false;
    for(int i=0;i<tam;i++){
        for(int j=i+1;j<tam;j++){
            if(v[i]+v[j]==target){
                cout<<"Los números que suman el target son: "<<v[i]<<" y "<<v[j]<<endl;
                encontrado=true;
            }
        }
    }
    if(!encontrado){
        cout<<"No se encontraron pares de números que sumen el target."<<endl;
    }

    return 0;
}