#include <stdio.h>
#define REN 6
const int COL=3;
//Prototipos
void cuadroAst();
void cuadroNum();
void cuadroLetra();
int main(){
	cuadroAst();
	cuadroNum();
	cuadroLetra();
	return 0;
}
void cuadroAst(){
	printf("Cuadro de * \n");
	for(int r=1; r<=REN;r++){
		for(int c=1;c<=COL;c++){
			printf("* \t");
		}
		printf("\n");
	}
}
void cuadroNum(){
	int cont=1;
	printf("Cuadro de numeros \n");
	for(int r=1; r<=REN;r++){
		for(int c=1;c<=COL;c++){
			printf("%i \t",cont);
			cont++;
		}
		printf("\n");
	}
}
void cuadroLetra(){
	char cont=65;
	printf("Cuadro de letras \n");
	for(int r=1; r<=REN;r++){
		for(int c=1;c<=COL;c++){
			printf("%c \t",cont);
			cont++;
		}
		printf("\n");
	}
}