#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf("dame los 3 numeros");
	scanf("%i%i%i", &n1, &n2, &n3);
	if(n1==n2 && n2 == n3){
		printf("los numeros %i%i%i son iguales", n1,n2,n3);
	}
	else{
		if(n1>= n2 && n1>=n3){
			printf("el numero %i es el mayor", n1);
		}
		else{
			if(n2>= n1 && n2>=n3){
			printf("el numero %i es el mayor", n2);
		}
			else{
				if(n3>= n2 && n3>=n1){
			printf("el numero %i es el mayor", n3);
		}
			}
		}
			
	}
	return 0;
}