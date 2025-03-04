#include <stdio.h>
int main(){
	float n1, n2, n3,prom;
	printf("dame el n1,n2 y n3 en ese orden \n");
	scanf("%f%f%f",&n1,&n2,&n3);
	prom=(n1+ n2+ n3)/3;
	printf("el promedio es: %f",prom);
	return 0;
}