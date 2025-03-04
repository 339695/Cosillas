#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15
int capturaSuma(int vec[SIZE]);
int valorMenor(int vec[SIZE]);
int valorMayor(int vec[SIZE]);
int main(){			//-------------------------------------------------------------------------------------
	srand(time(NULL));
	int vec[SIZE],valMen,valMay,suma;
	suma=capturaSuma(vec);
	valMen=valorMenor(vec);
	valMay=valorMayor(vec);
	printf("Sumatoria: %i\n",suma);
	printf("Menor: %i\t",valMen);
	printf("Mayor: %i",valMay);
	return 0;
}
int capturaSuma(int vec[SIZE]){
	int sumatoria=0;
	for(int i=0; i<SIZE; i++){
		vec[i]=rand()%101;
		sumatoria+=vec[i];
		printf("%i\t",vec[i]);
	}
	return sumatoria;
}
int valorMenor(int vec[SIZE]){
	int menor=100;
	for(int i=0;i<SIZE;i++){
		if(vec[i]<menor){
			menor=vec[i];
		}
	}
	return menor;
}
int valorMayor(int vec[SIZE]){
	int mayor=0;
	for(int i=0;i<SIZE;i++){
		if(vec[i]>mayor){
			mayor=vec[i];
		}
	}
	return mayor;
}