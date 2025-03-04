#include <stdio.h>
int main(){
	int a, b; // se declara a y b, a siendo usada para laoperación y b como contador
	for(b=1;b<=20;){ //se define un ciclo que pase por las posiciones de la 1 a la 20, de uno en uno
		a=a+b; //se hace la operación a imprimir
		b++; //se le suma uno al contador
	}
	
	printf("%i ",a); //se imprime
	return 0; //todo acaba :(
}