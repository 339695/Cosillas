#include <stdio.h>
int main(){
	int n;
	printf("valor del numero: ");
	scanf("%i", &n);
	if (n%2==0){
		printf("%i es par",n);
	}
	else{
		printf("%i es impar",n);
	}
	return 0;
}