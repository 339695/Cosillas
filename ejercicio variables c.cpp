//capturar una variable de cadatipo y mostrarla en pantalla
#include <stdio.h>
int main(){
	int id;
	float prom;
	char grupo;;
	char nombre[15];
	bool existe=false;
	printf("dame tu id\n");
	scanf("%d",&id);
	printf("dame tu nombre\n");
	scanf("%s",&nombre);
	printf("dame tu promedio\n");
	scanf("%f",&prom);
	printf("dame tu grupo\n");
	fflush(stdin);
	scanf("%c",&grupo);
	printf("%d \t %s \t %f \n %c " ,id,nombre,prom,grupo);
	printf("%d \n",existe);
	existe=true;
	printf("%d \n", existe);
	return 0;
}