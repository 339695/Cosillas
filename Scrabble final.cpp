#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void impFormato(char T[15][15]);
void pregPal(char T[15][15]);
bool estaVacio (char T[15][15]);
bool esPalabra(char palabra[15]);
void prepPantalla();
void colocarPalabra(char T[15][15],	int f, int c, char o, char palabra[15]);
bool cabe(int f,int c,char o, int tam, char T[15][15], char palabra[15]);


int main(){
	prepPantalla();
	return 0;
}

void prepPantalla(){
	char T[15][15]={{46,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45}};
	bool res=true;
	while(true){
		system("cls");
		res=estaVacio(T);
	
		printf("el valor de res es: %d\n",res);
		if (res==1){
			printf("el tablero esta vacio\n");
		}
		else{
			printf("el tablero no esta vacio, reiniciando tablero\n");
			for(int f=0; f<15; f++){
				for(int c=0; c<15; c++){
					T[f][c]='-';
				}
			}
		}
		system("pause");	

		impFormato(T);
		pregPal(T);
		/*while(true){
			impFormato(T);
			pregPal(T);
		}*/
	}
}

void impFormato(char T[15][15]){
	printf("  ");
	for(int f=0; f<15;f++){
		if(f<10){
			printf(" 0%d",f);
		}
		else{
			printf(" %d",f);			
		}	
	}
	printf("\n");
	for(int i=0;i<15;i++){
		if(i<10){
			printf("0%d",i);
		}
		else{
			printf("%d",i);			
		}

		for(int d=0;d<15;d++){
			printf("  ");
			putchar(T[i][d]);
		}
		printf("\n");		
	} 
}

void pregPal(char T[15][15]){
	bool comp=false;
	char palabra[15]={};
	int f=0, c=0;
	char o;
	while(true){
		printf("que palabra quieres escribir?(escribe 'salir' para salir): ");
		scanf("%s",palabra);
		fflush(stdin);
		
		if(strcmp(palabra,"salir")==0){
			return prepPantalla();	
		}
		else{
			comp=esPalabra(palabra);
		}
		if (comp==true){
			if(estaVacio(T)==false){
				printf("en que fila quieres escribir tu palabra?: ");
				scanf("%d",&f);	
				fflush(stdin);				
				printf("en que columna quieres escribir tu palabra?: ");
				scanf("%d",&c);
				fflush(stdin);
				printf("en que orientacion quieres escribir tu palabra?(d/a): ");
				scanf("%c",&o);scanf("%c",&o);
				fflush(stdin);	
				colocarPalabra(T, f, c, o, palabra);
			}
			int tam=strlen(palabra);
			colocarPalabra(T, (15-tam)/2, 7, 'a', palabra);
		}
		else{
			if(comp==false){
				printf("esa palabra no esta en el diccionario\n");	
				continue;						
			}
			
		}
	}
}

bool estaVacio(char T[15][15]){
	int control=0;
	int a=0;
	int control2=0;
	char T2[15][15]= {{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45},{45,45,45,45,45,45,45,45,45,45,45,45,45,45,45}};
	int man = 0;
	bool valAR=0;
	do{
		printf("valores de T: ");
		for(int a =control; a<15;a++){
			for(int b=control2;b<15;b++){
				if(T2[a][b]==T[a][b]){
					control2++;
					man+=1;	
				}
			}
			control2=0;
			printf("\n");		
			control++;
		}
	
	}while(control<15);
	if (man==225){
		valAR=1;
	}
	else{
		valAR=0;
	}
	return valAR;	
}

void colocarPalabra(char T[15][15],	int f, int c, char o, char palabra[15]){
	int fila=f;
	int colum=c;
	char orien=o;
	int tam=strlen(palabra);
	bool siCabe=false;
	siCabe=cabe(fila, colum, orien, tam, T, palabra);
	while(siCabe==true){
		if(o=='a'){
			for(int a=0; a<tam;a++){
				T[a+f][c]=palabra[a];
			}
			impFormato(T);
			return;
		}
		else{
			for(int d=0;d<tam;d++){
				T[f][c+d]=palabra[d];
			}
			impFormato(T);
			return;
		}
	}

	printf("conio dijo luigi");
}

bool esPalabra(char palabra[15]){
	char var[15]={""};
	strcpy(var,palabra);
	bool es=false;
	
	char *x[] = {"sol","luna","agua","tierra","fuego","amor","odio","paz","guerra","vida","muerte","suelo","realidad","felicidad","tristeza","esperanza","miedo","alegra","soledad","amistad"};
    int i = 0;
    while(x[i]) {
        if(strcmp(x[i], var) == 0) {
            es=true;
            break;
        }
        else{
        	es=false;
        	if(i==19){
        		break;
			}
		}
        i++;
    }
    return es;
}

bool cabe(int f,int c,char o, int tam, char T[15][15], char palabra[15]){
	bool cabe=true;
	int abajo=0, derecha=0;
	if(o=='a'){
		if(f+tam>=15){
			return false;
		}
		for(int a=0; a<tam;a++){
			if(T[a+f][c]==palabra[a] || T[a+f][c]==45)continue;
			return false;
		}
	}
	else{
		if(c+tam>=15){
			return false;
		}
		for(int d=0;d<tam;d++){
			if(T[f][c+d]==palabra[d] || T[f][c+d]==45)continue;
			return false;
		}
	}
	return true;
}