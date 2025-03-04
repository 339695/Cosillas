#include <stdio.h>
void paroimpar();
void fibonacci();
int main(){
	char respuesta;
	scanf("%c", &respuesta);
	if(respuesta=='a'){
		paroimpar();
	}
	if(respuesta=='b'){
		fibonacci();
	}
	return 0;
}
void paroimpar(){
	int n;
	printf("valor del numero: ");
	scanf("%i", &n);
	if (n%2==0){
		printf("%i es par",n);
	}
	else{
		printf("%i es impar",n);
	}
}
void fibonacci(){
	long long n1,n2;
	n1=0;
	n2=1;
	printf("%i %i ",n1, n2);
	for(int i=1;i<=24;i++){
		n1=n1+n2;
		printf("%lld ",n1);
		n2=n2+n1;
		printf("%lld ",n2);
	}
}