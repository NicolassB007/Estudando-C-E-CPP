#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Contagem regressiva de 10 ate 0\n");
    printf("Utilizando while, do while e for\n");

    int i = 10;
    printf("Contagem regressiva com while\n");
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }

    printf("\nContagem regressiva com do while\n");
    i = 10;
    do {
        printf("%d ", i);
        i--; 
    } while (i >= 0);

    printf("\nContagem regressiva com for\n");
    for (i = 10; i >= 0; i--) {
        printf("%d ", i);
    }
    

    return 0;
}