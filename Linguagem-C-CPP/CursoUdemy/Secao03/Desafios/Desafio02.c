#include <stdio.h>
#include <stdlib.h>

int main() {
    int maxValue;
    printf("Informe um valor maior que 10: ");
    scanf("%d", &maxValue);

    if (maxValue < 10) {
        printf("O valor inserido e MENOR que 10\n");
    }
    else {
        printf("Sera exibido todos os pares de 10 ate %d\n", maxValue);

        int start = 10;
        while (start <= maxValue) {
            if (start % 2 == 0) {
                printf("PAR -> %d\n", start);
            }
            start += 1;
        }
    }
    return 0;
}