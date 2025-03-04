#include <stdio.h>
int main(){
	int x, n,suma;
	printf("dame el numero de veces que quieres repetir tu ciclo \n");
	scanf("%i",&x);
	for(int i=1;i<=x;i++){
		scanf("%i",&n);
		suma+=n;
	}
	printf("%i",suma);
	return 0;
}