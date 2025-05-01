#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int secondNumber;

    printf("Insira o primeiro valor: ");
    scanf("%d", &number);

    printf("Insira o segundo valor: ");
    scanf("%d", &secondNumber);

    int sum;

    sum = number + secondNumber;

    if (sum >= 10) {
        printf("%d + %d e MAIOR OU IGUAL que 10\n", number, secondNumber);
    }
    else {
        printf("%d + %d e MENOR que 10", number, secondNumber);
    }

    return 0;
}