#include <stdio.h>
int main(){
	int mayor=0, numero,x;
	printf("Cuantas veces deseas repetir el ciclo?");
	scanf("%i",&x);
	for(int i=1;i<=x;i++){
		printf("dame un numero: ");
		scanf("%d",&numero);
		if(numero>mayor){
			mayor=numero;
		}
	}
	printf("el numero mayor es: %d",mayor);
	return 0;
}