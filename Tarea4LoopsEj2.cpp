#include <stdio.h>
#include <math.h>
int main(){
	int n,quad;
	long int suma;
	for(int i=1;i<=30;i++){
		scanf("%i",&n);
		quad=pow(n,2);
		suma=suma+quad;
	}
	printf("%i", suma);
	return 0;
}