//ciclo do while
#include <stdio.h>
int main(){
	int total=0;
	float precioProd=0, suma=0;
	do{
		printf("precio del producto: ");
		scanf("%f", &precioProd);
		suma+=precioProd;
		total++;
		if(precioProd!=0){
			total++;
		}
	}while(precioProd!=0); //es el unico while que lleva punto y coma
	printf("total de productos: %d \n", total-1);
	printf("Debes pagar $ %.2f", suma);
	return 0;
}