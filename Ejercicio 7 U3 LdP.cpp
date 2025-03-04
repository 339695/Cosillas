#include <stdio.h>
int main(){
	float subtotal, descto, total;
	const float IVA=1.16;
	printf("dame el subtotal de tu compra, después el descuento con un punto antes :) \n");
	scanf("%f%f", &subtotal, &descto);
	total=(subtotal*(1-descto)*IVA);
	printf("El total de su compra es: $ %.2f ",total);
	return 0;
}