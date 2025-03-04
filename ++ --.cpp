//operadores ++ y --
#include <stdio.h>
int main(){
	int num=5, res=0;
	printf("%i \n", num);
	num++;
	printf("%i \n", num);
	res=num++*2;
	printf("resultado: %i \n", res);
	printf("%i \n", num);
	
	return 0;
}