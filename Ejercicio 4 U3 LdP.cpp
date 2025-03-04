#include <stdio.h>
int main(){
	int apres,anac,edad;
	printf("dame tu año de nacimiento y despues el año presente \n");
	scanf("%d%d",&anac,&apres);
	edad=(apres-anac);
	printf("tu edad es: %d", edad);
	return 0;
}