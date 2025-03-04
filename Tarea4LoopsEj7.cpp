#include <stdio.h>
int main(){
	int n,impare,sumap,sumai;
	double promedio;
	char r;
	sumap=0;
	sumai=0;
	for(int i=1;i<=1;i++){
		printf("dame un numero:  ");
		scanf("%i",&n);
		fflush(stdin);
		if(n%2==0){
			sumap=sumap+n;
		}
		else{
			sumai=sumai+n;
			impare++;
		}
		printf("quieres continuar? (s) para si, (n) para no \n");
		scanf("%c", &r);
		if(r=='n'){
			i++;
		}	
		
		i--;
	}
	promedio=sumai/impare;
	printf("la suma de los pares es: %i, el promedio de los impares es: %.2f", sumap,promedio);
return 0;
}