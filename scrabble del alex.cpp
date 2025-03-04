#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void impFormato(char T[15][15]);
void pregPal();
bool estaVacio (char T[15][15]);
bool esPalabra(char *palabra);
void prepPantalla();

int main(){
	prepPantalla();
	return 0;
}
	
void prepPantalla(){
	char T[15][15];
	int veces=0;
	do{
		system("cls");
		for(int f=0; f<15; f++){
			for(int c=0; c<15; c++){
				T[f][c]='-';
			}
		}
		
		do{
			fflush(stdin);
			impFormato(T);
			pregPal();
			printf("veces: %d",veces);
			veces++;
		}while(veces<5);
	}
	while(veces<5);
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
			putchar(T[d][i]);
		/*	printf("  %c",T[d][i]);*/
		}
		printf("\n");		
	} 
}
	

void pregPal(){
	char palabra[]={""};
	int f=0, c=0, test=0;
	char o=' ';
	printf("que palabra quieres escribir?(escribe 'salir' para salir): ");
	scanf("%s",palabra);
	fflush(stdin);
	if(strcmp(palabra,"salir")==0){
		prepPantalla();	
	}
	printf("en que fila quieres escribir tu palabra?: ");
	scanf("%d",&f);	
	printf("en que columna quieres escribir tu palabra?: ");
	scanf("%d",&c);
	printf("en que orientacion quieres escribir tu palabra?(d/a): ");
	fflush(stdin);
	scanf("%c",&o);
	/*
	test++;
	test++;
	test++;	
//	printf("cadena: %s",palabra);
	*/
	
	//	colocarPalabra();	
	
	
}


/*bool colocarPalabra(){
	
}
*/














