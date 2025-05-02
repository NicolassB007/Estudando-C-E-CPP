#include <stdio.h>
#include <stdlib.h>
#define VETORTAM 3

int main() {

    printf("Informe 3 valores\n");

    double vetDoubleNumber[VETORTAM];
    for (int i = 0; i < VETORTAM; i++) {
        printf("%d Valor: ", (i + 1));
        scanf("%lf", &vetDoubleNumber[i]);
    }

    printf("Somando os valores informados:\n");
    double sum = 0;
    for (int i = 0; i < VETORTAM; i++) {
        sum += vetDoubleNumber[i];
    }
    
    printf("Soma -> %.2lf\n", sum);
    printf("Efetuando a media:\n");

    double media;
    media = (sum / VETORTAM);

    printf("Media -> %.2f\n", media);
    return 0;
}