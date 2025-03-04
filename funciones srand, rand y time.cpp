#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
	int num;
	srand(time(NULL));
	printf("1000 numeros aleatorios\n");
	for(int i=1;i<=1000;i++){
		num=rand()%100;
		printf("%d \n", num);
	}
	
	return 0;
}