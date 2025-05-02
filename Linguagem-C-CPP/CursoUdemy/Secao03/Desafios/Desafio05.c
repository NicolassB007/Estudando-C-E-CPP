#include <stdio.h>
#include <stdlib.h>

int main() {

    int value;
    printf("Informe o valor para saber sua tabuada: ");
    scanf("%d", &value);

    for (int i = 0; i <= 10; i++) {
        int multiplying;
        multiplying = value * i;
        printf("%d x %d = %d\n", value, i, multiplying);
    }
}