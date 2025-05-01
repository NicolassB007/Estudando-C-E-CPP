#include <stdio.h>
#include <stdlib.h>

int main() {

    int firstValue;
    int secondValue;

    printf("Informe um valor: ");
    scanf("%d", &firstValue);
    printf("Informe um segundo valor: ");
    scanf("%d", &secondValue);

    int sum;
    sum = (firstValue + secondValue);

    if (((sum >= 0) && (sum <= 10)) || (sum % 2 == 0)) {
        printf("A soma esta entre 0 e 10 OU a soma e PAR\n");
        printf("SOMA -> %d\n", sum);
    }

    return 0;
}