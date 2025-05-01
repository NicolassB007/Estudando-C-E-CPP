#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstValue;
    int secondValue;
    int thirdValue;

    printf("Insira o primeiro valor: ");
    scanf("%d", &firstValue);

    printf("Insira o segundo valor: ");
    scanf("%d", &secondValue);

    printf("Insira o terceiro valor: ");
    scanf("%d", &thirdValue);    

    if ((firstValue > 10) && (secondValue > 10) && (thirdValue > 10)) {
        printf("Os tres valores sao maiores que 10\n");
    }
    else {
        printf("Um valor nao e maior que 10\n");
    }

    return 0;
}