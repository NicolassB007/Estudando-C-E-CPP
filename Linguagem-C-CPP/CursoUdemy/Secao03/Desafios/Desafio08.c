#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Mostrando numeros pares entre 10 e 20\n");
    printf("Utilizando while, do while e for\n");

    int i = 10;
    printf("Mostrando numeros pares entre 10 e 20 com while\n");
    while (i <= 20) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\nMostrando numeros pares entre 10 e 20 com do while\n");
    i = 10;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++; 
    } while (i <= 20);

    printf("\nMostrando numeros pares entre 10 e 20 com for\n");
    for (i = 10; i <= 20; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}