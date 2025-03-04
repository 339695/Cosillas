#include <stdio.h>
int main(){
	int n;
	printf("valor del numero: ");
	scanf("%i", &n);
	if (n==0){
		printf("%i es cero",n);
	}
	else{
		if(n>0){
			printf("%i es positivo",n);
		}
		else{
			printf("%i es negativo",n);		
			}
	}
	return 0;
}