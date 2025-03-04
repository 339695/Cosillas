#include <stdio.h>
int main(){
	int num;
	printf("dame un numero ");
	scanf("%i", &num);
	switch(num){
		case 1: printf("Lunes \n"); break;
		case 2: printf("Martes \n"); break;
		case 3: printf("Miercoles \n"); break;
		case 4: printf("Jueves \n"); break;
		default: printf("tu dia no es valido");
	}
	return 0;
}