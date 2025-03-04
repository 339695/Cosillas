#include <stdio.h>
#include <math.h>
int main(){
	float peso, altura, IMC;
	printf("Dame tu peso \n");
	scanf("%f",&peso);
	printf("Dame tu altura \n");
	scanf("%f",&altura);
	IMC=(peso/pow(altura,2));
	printf("El IMC es:%f", IMC);
	return 0;
}