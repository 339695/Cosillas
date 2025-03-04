#include <stdio.h>
int main(){
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
return 0;
}