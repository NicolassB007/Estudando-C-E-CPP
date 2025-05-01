#include <stdio.h>
#include <stdlib.h>

int main() {

    int firstValue;
    int secondValue;

    printf("Insira um valor: ");
    scanf("%d", &firstValue);

    printf("Insira um segundo valor: ");
    scanf("%d", &secondValue);

    if ((firstValue % 2 == 0) || (secondValue % 2 == 0)) {
        printf("Pelo menos um dos valores e par\n");
        printf("Primeiro valor -> %d\n", firstValue);
        printf("Segundo valor -> %d\n", secondValue);
    }
    else {
        printf("Nenhum dos valores inseridos e par\n");
    }

    return 0;
}