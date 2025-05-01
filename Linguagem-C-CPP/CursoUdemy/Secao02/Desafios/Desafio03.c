#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;

    printf("Insira um valor: ");
    scanf("%d", &value);

    int isPair = (value % 2 == 0);

    if (isPair) {
        printf("%d e PAR.\n", value);
    }
    else {
        printf("%d e IMPAR.\n", value);
    }

    return 0;
}