#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstValue;
    int secondValue;

    printf("Insira o PRIMEIRO valor: ");
    scanf("%d", &firstValue);

    printf("Insira o SEGUNDO valor: ");
    scanf("%d", &secondValue);

    int firstHigherThanSecondValue = firstValue > secondValue;
    int secondHigherThanFirstValue = secondValue > firstValue;

    if (firstHigherThanSecondValue) {
        printf("Primeiro Valor -> %d MAIOR QUE o Segundo Valor -> %d\n", firstValue, secondValue);
    }
    else if (secondHigherThanFirstValue) {
        printf("Segundo Valor -> %d MAIOR QUE o Primeiro Valor -> %d\n", secondValue, firstValue);
    }
    else {
        printf("Os dois valores sao iguais.\n");
    }

    return 0;
}