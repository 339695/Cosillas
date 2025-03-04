#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void mover(int piezaAM, int lugarAM, char linea[], int tamLinea);
int linea();
void objetivo(int tamLinea);
bool validacion(int tamLinea, char linea[], char linea7[], char linea9[], char linea11[], char linea13[], char linea15[]);
void tablaPuntajes(int cont,  char plyr[]);

int main(){
	int opcion, tamLinea, cont=0;
	char plyr[3]="";
	do{
		//system("cls");
		printf("que quieres hacer?\n ");
		printf("1. iniciar juego\n ");
		printf("2. ver tabla de resultados\n ");
		printf("0. para terminar\n ");
		scanf("%d",&opcion);
		switch(opcion){
			case 0:
				break;
			case 1:
				cont=linea();
				printf("escribe tu nombre en 3 espacios: ");
				scanf("%s",plyr);
				break;	
			case 2:
				tablaPuntajes(cont, plyr);
				break;
			default:
				printf("valor invalido");
		}
	}
	while(opcion!=0);
	return 0;
	
}


void mover(int piezaAM, int lugarAM, char linea[], int tamLinea){

	if (linea[lugarAM]!=42 && linea[lugarAM]!=47){
		
		linea[lugarAM]=linea[piezaAM];
		linea[piezaAM]=' ';
		for (int i=0; i<=tamLinea-1; i++)
		{
			printf(" %c",linea[i]);
		}
		printf("\n");
		for (int i=0; i<=tamLinea-1; i++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	else{
		printf("ese lugar esta ocupado por otra ficha\n");
	}
			
	
}

int linea(){
	int tamLinea, i, piezaAM, lugarAM, contador=0;
	bool control=true, val, igualdad;
	char linea7[7]={'*','*','*',' ','/','/','/'};
	char linea9[9]={'*','*','*','*',' ','/','/','/','/'};
	char linea11[11]={'*','*','*','*','*',' ','/','/','/','/','/'};
	char linea13[13]={'*','*','*','*','*','*',' ','/','/','/','/','/','/'};
	char linea15[15]={'*','*','*','*','*','*','*',' ','/','/','/','/','/','/','/'};
	char linea[]="";
	
	
	do{ //tamaño de la fila
		system("cls");
		printf("que tamanio de fila quieres jugar?(7,9,11,13,15, 0 para salir): ");
		scanf("%d",&tamLinea);
		printf("si");
		switch(tamLinea){
			case 0:
				main();
				break;
			case 7:
				printf("si2");
				strcpy(linea,linea7);
				printf("akhfvka");
				objetivo(tamLinea);
				printf("abfafbeabfyafbaybfey");		
				for (i=0; i<=(tamLinea-1); i++){
					printf(" %c",linea[i]);
				}
				printf("\n");
				for (i=0; i<=tamLinea-1; i++){
					printf(" %d",i);
				}
				printf("\n");
				break;
			case 9:
				strcpy(linea,linea9);
				objetivo(tamLinea);		
				for (i=0; i<=(tamLinea-1); i++){
					printf(" %c",linea[i]);
				}
				printf("\n");
				for (i=0; i<=tamLinea-1; i++){
					printf(" %d",i);
				}
				printf("\n");
				break;
			case 11:
				strcpy(linea,linea11);
				objetivo(tamLinea);		
				for (i=0; i<=(tamLinea-1); i++){
					printf(" %c",linea[i]);
				}
				printf("\n");
				for (i=0; i<=tamLinea-1; i++){
					printf(" %d",i);
				}
				printf("\n");
				break;
			case 13:
				strcpy(linea,linea13);
				objetivo(tamLinea);		
				for (i=0; i<=(tamLinea-1); i++){
					printf(" %c",linea[i]);
				}
				printf("\n");
				for (i=0; i<=tamLinea-1; i++){
					printf(" %d",i);
				}
				printf("\n");
				break;
			case 15:
				strcpy(linea,linea15);
				objetivo(tamLinea);		
				for (i=0; i<=(tamLinea-1); i++){
					printf(" %c",linea[i]);
				}
				printf("\n");
				for (i=0; i<=tamLinea-1; i++){
					printf(" %d",i);
				}
				printf("\n");
				break;
			default:
				printf("valor invalido\n");
				break;	
			}	
	}
	while(tamLinea!=7 && tamLinea!=9 && tamLinea!=11 && tamLinea!=13 && tamLinea!=15);
	
	while(control==true){
		do{	//seleccionar piezas a mover
			val=validacion(tamLinea, linea, linea7, linea9,  linea11,  linea13,  linea15);
			if (val==true){
				system("cls");				
				printf("felicidades, terminaste el juego\n");
				system("pause");
				system("cls");
				control=false;
				break;
			}
			printf("\n");
			contador+=1;
			printf("que pieza quieres mover?(escribe su posicion): ");
			scanf("%d",&piezaAM); 
			printf("a donde la quieres mover?(escribe la poscicion): ");
			scanf("%d",&lugarAM);
			if (linea[piezaAM]==32){ //verifica que el numero no sea un espacio
				printf("esa pieza no se puede utilizar\n");
			}
			mover(piezaAM, lugarAM, linea, tamLinea);
		}
		while(piezaAM>=0 && lugarAM>=0);	
	}
	return contador;
}

void objetivo(int tamLinea){
	char linea7[7]={'*','*','*',' ','/','/','/'};
	char linea9[9]={'*','*','*','*',' ','/','/','/','/'};
	char linea11[11]={'*','*','*','*','*',' ','/','/','/','/','/'};
	char linea13[13]={'*','*','*','*','*','*',' ','/','/','/','/','/','/'};
	char linea15[15]={'*','*','*','*','*','*','*',' ','/','/','/','/','/','/','/'};
	char objetivo[tamLinea]="";
	printf("ja");
	switch(tamLinea){
		case 7:
			strcpy(objetivo,strrev(linea7));
			printf("tu objetivo es llegar a: %s, saltando a una ficha vacia contigua o saltando sobre otra para llegar a un espacio vacio\n",objetivo);
			break;
		case 9:
			strcpy(objetivo,strrev(linea9));
			printf("tu objetivo es llegar a: %s, saltando a una ficha vacia contigua o saltando sobre otra para llegar a un espacio vacio\n",objetivo);
			break;
		case 11:
			strcpy(objetivo,strrev(linea11));
			printf("tu objetivo es llegar a: %s, saltando a una ficha vacia contigua o saltando sobre otra para llegar a un espacio vacio\n",objetivo);
			break;
		case 13:
			strcpy(objetivo,strrev(linea13));
			printf("tu objetivo es llegar a: %s, saltando a una ficha vacia contigua o saltando sobre otra para llegar a un espacio vacio\n",objetivo);
			break;
		case 15:
			strcpy(objetivo,strrev(linea15));
			printf("tu objetivo es llegar a: %s, saltando a una ficha vacia contigua o saltando sobre otra para llegar a un espacio vacio\n",objetivo);
			break;
	}
	
}

bool validacion(int tamLinea, char linea[], char linea7[], char linea9[], char linea11[], char linea13[], char linea15[]){
	int o;
	bool igualdad;
	igualdad=true;
	o=tamLinea-1;
	switch(tamLinea){
		case 7: 
			for(int i=0; i<=tamLinea-1;i++){
					if (linea[i]!=linea7[o]){
						igualdad=false;
						break;
						
					}
					o--;
				}
			break;
		case 9:
			for(int i=0; i<=tamLinea-1;i++){
					if (linea[i]!=linea9[o]){
						igualdad=false;
						break;
					}
					o--;
				}
			break;
		case 11:
			for(int i=0; i<=tamLinea-1;i++){
					if (linea[i]!=linea11[o]){
						igualdad=false;
						break;
					}
					o--;
				}
			break;
		case 13:
			for(int i=0; i<=tamLinea-1;i++){
					if (linea[i]!=linea13[o]){
						igualdad=false;
						break;
					}
					o--;
				}
			break;
		case 15:
			for(int i=0; i<=tamLinea-1;i++){
					if (linea[i]!=linea15[o]){
						igualdad=false;
						break;
					}
					o--;
				}
			break;			
	}
	
	return igualdad;
}

void tablaPuntajes(int cont, char plyr[]){
	int punt1=0;
	char jgr1[3]="";
	punt1=cont;
	
	strcpy(jgr1,plyr);
	
	printf("Tabla de estadisticas: \n");
	printf("%s completo su linea en %d movimientos\n", jgr1, punt1);
}


