#include <stdio.h>
void escalenoAst();
void equilateroAst();
const int COL=4,REN=4;
int main(){
	escalenoAst();
	equilateroAst();
	return 0;
}
void escalenoAst(){
	printf("Cuadro de * \n\n");
	for(int r=1; r<=REN;r++){
		for(int c=1;c<=r;c++){
			printf("* \t");
		}
		printf("\n");
	}
}
void equilateroAst(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		}
		}
	
	
