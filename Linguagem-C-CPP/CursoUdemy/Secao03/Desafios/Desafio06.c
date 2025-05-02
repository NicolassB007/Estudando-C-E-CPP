#include <stdio.h>
#include <stdlib.h>

int main() {

    int start;
    int end;
    int step;

    printf("Informe o valor inicial: ");
    scanf("%d", &start);
    printf("Informe o valor final: ");
    scanf("%d", &end);
    printf("Informe quanto sera incrementado (Valor do salto entre os valores): ");
    scanf("%d", &step);

    for (int i = start; i <= end; i += step) {
        printf("%d ", i);
    }

    return 0;
}