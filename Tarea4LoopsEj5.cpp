#include <stdio.h>
#include <math.h>

int main() {
    int n, i, es_primo = 1;

    printf("Introduce un numero: ");
    scanf("%d", &n);

    if (n < 2) {
        es_primo = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                es_primo = 0;
                i = sqrt(n) + 1;
            }
        }
    }

    if (es_primo) {
        printf("%d es un numero primo.\n", n);
    } else {
        printf("%d no es un numero primo.\n", n);
    }

    return 0;
}
