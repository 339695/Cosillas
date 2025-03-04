//Menu de vectores
//Héctor Cuevas Glez, Alejandro González García
//18/02/2025
//Estreñimiento de gatos
#include <iostream>

using namespace std;

const int TAM=10;

void menu();
void mayormenor();
void conteo();
float suma();
void promedio(int);
void producto();
void llenarV(int[]);

void menu() {
	int sum;
	char swtch;
	bool comp=true;
	string input, rei;
	do{
	    cout<<"a- Mayor y menor en un vector"<<endl;					//impresion del menu
	    cout<<"b- Conteo de un numero especifico de un vector"<<endl;
	    cout<<"c- Suma de los elementos de un vector"<<endl;
	    cout<<"d- Promedio de los elementos"<<endl;
	    cout<<"e- Producto cruz de 2 vectores de 3 dimensiones"<<endl;
	    cout<<"f- Salir\n";
	    cin>>input;
	    if(input.length()>1){												//validación de mas de un caracter
			cout<<"valor invalido"<<endl;
	    	continue;
		}
		else{
			swtch=input[0];
		    switch(swtch){												//switch de seleccion de opciones
		        case 'a':mayormenor();break;
		        case 'b':conteo();break;
		        case 'c':sum=suma();break;
		        case 'd':
					if(sum==0)cout<<"haz la suma primero"<<endl;		//validacion de suma realizada
					else{
						promedio(sum);
					}
					break;
		        case 'e':producto();break;
		        case 'f':return;
		        default:cout<<"valor no valido\n";
		    }
			cout<<"Desea continuar? n para No, cualquier otra cosa p0ara si: ";
		    cin>>rei;
			do{
			    if(rei.length()>1){												//validación de mas de un caracter
				cout<<"valor invalido"<<endl;
				continue;
				comp=false;
				}
			}
			while(comp!=true);
		}
			
	}
	while(rei!="n");	
}

void mayormenor(){														
    int vec[TAM];
    llenarV(vec);
    int may=vec[0],men=vec[0];
    for(int j=0;j<TAM;j++){
        if (vec[j]<men)men=vec[j];
        if (vec[j]>may)may=vec[j];
    }
    cout<<"El mayor es: "<<may<<"\tEl menor es: "<<men<<endl;
}
void conteo(){
    int num,cont=0;
    int vec[TAM];
	llenarV(vec);
    cout<<"\nQue numero quieres buscar?: ";
    cin>>num;
    for(int i=0;i<TAM;i++){
        if(vec[i]==num)cont++;
    }
    cout<<"el numero de veces que se encuentra "<<num<<" es "<<cont<<endl;
}

float suma(){
    float sum=0;
    int vec[TAM];
    llenarV(vec);
    for(int i=0;i<TAM;i++) {
        sum+=vec[i];
    }
    cout<<"la suma de los elementos es: "<<sum<<endl;
    return sum;
}
void promedio(int sum){
    double prom, div=TAM;
    prom=sum/div;
    cout<<"El promedio de la suma de los elementos del vector es: "<<prom<<endl;
}
void producto(){
    int vecA[3],vecB[3],vecC[3];
    for(int i=0;i<3;i++){
        cout<<"Dame el vector A en la posicion "<<i<<" : ";cin>>vecA[i];
        cout<<"Dame el vector B en la posicion "<<i<<" : ";cin>>vecB[i];
    }
    vecC[0]=(vecA[1]*vecB[2])-(vecA[2]*vecB[1]);
    vecC[1]=(vecA[2]*vecB[0])-(vecA[0]*vecB[2]);
    vecC[2]=(vecA[0]*vecB[1])-(vecA[1]*vecB[0]);
    cout<<"El resultado es: "<<vecC[0]<<"\t"<<vecC[1]<<"\t"<<vecC[2]<<endl;
}

void llenarV(int vec[TAM]){
	for(int i=0;i<TAM;i++){
        cout<<" ingresa el numero en la posicion "<<i<<": ";
        cin>>vec[i];
    }
    
}

int main(){
    menu();
    return 0;
}