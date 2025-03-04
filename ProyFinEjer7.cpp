#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void llenarArreglos(char arreglo1[], char arreglo2[]);
void posiciones();
int mostrar(int posicionA1, int posicionA2, int cont, char arreglo1[], char arreglo2[], char arreglo3[], char arreglo4[]);

int main() {
	char arreglo1[6]="", arreglo2[6]="", arreglo3[6]={42,42,42,42,42,42}, arreglo4[6]={42,42,42,42,42,42};
	int posicionA1=0, posicionA2=0, cont;
	llenarArreglos(arreglo1, arreglo2);
	posiciones();
	printf("\n");
	printf("%s\n",arreglo3);
	printf("%s\n",arreglo4);
	posiciones();
	printf("\n");


	do{
		printf("que posicion del arreglo 1 quieres mostrar");
		scanf("%d",&posicionA1);
		printf("que posicion del arreglo 2 quieres mostrar");
		scanf("%d",&posicionA2);	
		cont=mostrar(posicionA1, posicionA2, cont, arreglo1, arreglo2, arreglo3, arreglo4);
	}
	while(cont<6);
	

	return 0;
}

void llenarArreglos(char arreglo1[], char arreglo2[]){
	bool yaExiste;
	int ultimo = 0;

	while(true){
		srand(time(NULL));
		int x = 65+rand()%(70-65+1);
		yaExiste = false;
	
		for(int i=0; i<6; i++){
	  		if (arreglo1[i] == x){
	    		yaExiste = true;
				break;
	    	}    
		}
		if (yaExiste == false){
		    arreglo1[ultimo] = x;
    		ultimo++;
   		}

		if (ultimo == 6){
			break;
		}
	}
	
	bool yaExiste2;
	int ultimo2=0;
	while(true){
		srand(time(NULL));
		int x = 65+rand()%(70-65+1);
		yaExiste2 = false;
	
		for(int i=0; i<6; i++){
	  		if (arreglo2[i] == x){
	    		yaExiste2 = true;
				break;
	    	}    
		}
		if (yaExiste2 == false){
		    arreglo2[ultimo2] = x;
    		ultimo2++;
   		}

		if (ultimo2 == 6){
			break;
		}
	}
}

void posiciones(){
	for(int i=0; i<6;i++){
		printf("%d",i);
	}
}

int mostrar(int posicionA1, int posicionA2, int cont, char arreglo1[], char arreglo2[], char arreglo3[], char arreglo4[]){
	arreglo3[posicionA1]=arreglo1[posicionA1];
	arreglo4[posicionA2]=arreglo2[posicionA2];
	printf("%s\n",arreglo3);
	printf("%s\n",arreglo4);
	system("pause");
	if(arreglo3[posicionA1]!=arreglo4[posicionA2]){
		arreglo3[posicionA1]=42;
		arreglo4[posicionA2]=42;		
		system("cls");
		printf("contador: %d \n", cont);
		posiciones();
		printf("\n");
		printf("%s\n",arreglo3);
		printf("%s\n",arreglo4);
		posiciones();
		printf("\n");
	}
	else{
		system("cls");
		cont++;
		printf("contador: %d \n", cont);
		posiciones();
		printf("\n");
		printf("%s\n",arreglo3);
		printf("%s\n",arreglo4);
		posiciones();
		printf("\n");		
	}
	return cont;
}


