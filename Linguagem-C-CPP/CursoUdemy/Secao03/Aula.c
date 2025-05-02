// Definindo constante (define)
#include <stdio.h>
#include <stdlib.h>
#define VALUE 10

int main() {

    printf("Valor da constante -> %d", VALUE);

    for (int i = 0; i < VALUE; i++) {
        printf("%d\n", i);
    }

    return 0;
}