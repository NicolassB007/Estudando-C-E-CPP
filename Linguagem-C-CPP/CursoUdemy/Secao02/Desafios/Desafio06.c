#include <stdio.h>
#include <stdlib.h>

int main() {

    int firstValue;
    int secondValue;

    printf("Insira o primeiro valor: ");
    scanf("%d", &firstValue);
    printf("Insira o segundo valor: ");
    scanf("%d", &secondValue);

    if ((firstValue > 10) || (secondValue > 10)) {
        printf("Um dos valores informados e maior que 10\n");
        printf("Primeiro valor -> %d\n", firstValue);
        printf("Segundo valor -> %d\n", secondValue);
    }
    else {
        printf("Nenhum valor e maior que 10\n");
    }

    return 0;
}