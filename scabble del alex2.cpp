#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void impFormato(char T[15][15]);
void pregPal(char T[15][15]);
//bool estaVacio (char T[15][15]);
//bool esPalabra(char *palabra);
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
			impFormato(T);
			pregPal(T);
			veces++;

		}while(veces<5);
	}
	while(veces<5);
}

void impFormato(char T[15][15]){
	for(int d=0; d<5; d++){
		for(int i=0; i<5; i++){
			putchar(T[d][i]);
		}
		printf("\n");
	}
}
	

void pregPal(char T[15][15]){
	int si=0;
	printf("dame a: \n");
	scanf("%d",&si);
}















