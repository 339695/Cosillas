#include <stdio.h>
int main(){
	int  n; //se define el numero a evaluar
	printf("ingrese un numero: ");
	scanf("%i",&n); //se lee
	if(n==0){
		printf("1"); //se evalúa si n vale 0
	} 
	else{ //si n no vale 0, se realiza lo siguiente
		
		for(int a=n-1;a>1;){ //se realiza un ciclo que se repita hasta que el contador "a" que es n-1 alcance a 1
			n=n*a; //se realiza la operación de n*a
			a--;
		}
		printf("%i ",n);  //se imprime el resultado del valor final de n al superar el 0
	}
	return 0;
} //todo acaba :(