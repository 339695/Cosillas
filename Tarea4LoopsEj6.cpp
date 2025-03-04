#include <stdio.h>
int main(){
	int valorini, valorfin,x,par;
	printf("dime el numero inicial: ");
	scanf("%i",&valorini);
	printf("numero final del rango: ");
	scanf("%i",&valorfin);
	for(int i=valorini;i<=valorfin;i++){
		if(i%2==0){
			printf("%i par\n", i);
		}
	}
	return 0;
}