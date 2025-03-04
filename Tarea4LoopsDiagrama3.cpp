#include <stdio.h>
int main(){
	int b; //se define la variable "b", que se usará para la operación en el ciclo
	for(int c=80;c<=100;c++){ //se define un ciclo que pase por las posiciones desde la 80 a la 100 de uno en uno
		b=c*c; //se realiza la operación de lo que se va a imprimir, siendo el cuadrado del valor de c en cada posición
		printf(" %i ",b); //se imprime
	}
	return 0;
} //todo acaba  :(