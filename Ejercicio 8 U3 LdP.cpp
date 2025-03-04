#include <stdio.h>
int main(){
	float capital, inversion;
	const float interes=1.02;
	printf("dame tu capital we \n");
	scanf("%f", &capital);
	inversion=capital*interes;
	printf("el dinero que vas a ganar son $ %.2f dolares manito", inversion);
	return 0;
}