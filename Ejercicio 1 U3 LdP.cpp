#include <stdio.h>
int main(){
	float base, altura, areaRectangulo;
	printf("dame la base  \n");
	scanf("%f",&base);
	fflush(stdin);
	printf("dame la altura \n");
	scanf("%f", &altura);
	areaRectangulo=(base*altura);
	printf("El area es: %f",areaRectangulo);
	return 0;
}