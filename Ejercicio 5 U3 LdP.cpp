#include <stdio.h>
int main(){
	float distancia, litros, consumo;
	printf("dame la distancia, despues los litros \n");
	scanf("%f%f", &distancia, &litros);
	consumo=distancia/litros;
	printf("el consumo fue de %f kilometros por litro", consumo);
	return 0;
}