#include <stdio.h>
int main(){
	float salBase, pagoHr;
	int numHr,hrsXtra;
	printf("Dame el pago x hora: \n");
	scanf("%f", &pagoHr);
	printf("Dame las horas trabajadas: \n");
	scanf("%i", &numHr);
	if(numHr>40){
		hrsXtra=numHr-40;
		salBase=(40*pagoHr)+(hrsXtra*pagoHr)*2;
	}
	else{
		salBase=pagoHr*numHr;
	}
	if(salBase<2000){
		salBase=salBase*0.90;
	}
	else{
		salBase*=0.95;
	}
	if(numHr>50){
		salBase+=100;
	}
	printf("tu salario neto es: $ %.2f ", salBase);
	return 0;
}