#include <stdio.h>
#include <string.h>
int main(){
	char turno, grupo, nombre[15], carrera[25];
	int edad;

	turno='M';
	strcpy (nombre,"Liz");
	puts ( "Dame tu grupo");
	grupo=getchar();
	fflush(stdin);
	puts ("Dame tu carrera");
	gets(carrera);
	puts("tus datos son: " );
	puts("grupo: ");
	putchar(grupo);
	puts(" ");
	puts("turno: ");
	putchar(turno);
	puts(" ");
	puts("Nombre ");
	puts(nombre);
	puts(" ");
	puts("carrera: ");
	puts(carrera);
	puts(" ");
	return 0;
}