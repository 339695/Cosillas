#include <stdio.h>
int main(){
	float calif1, calif2, calif3 ,proy, final;
	printf("dame las calificaciones del 1er, 2do, 3er parcial y proyecto en ese orden \n");
	scanf("%f%f%f%f",&calif1,&calif2,&calif3,&proy);
	final=(calif1*0.25)+(calif2*0.25)+(calif3*0.30)+(proy*0.20);
	printf("el promedio final es: %.1f",final);
	return 0;
}