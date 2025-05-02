#include <stdio.h>
#include <stdlib.h>

int main() {

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }

    printf("A Soma de todos os numeros de 0 ate 10 e = %d\n", sum);

    return 0;
}