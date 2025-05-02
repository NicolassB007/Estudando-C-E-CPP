#include <stdio.h>
#include <stdlib.h>
#define LINEMATRIZ 2
#define COLUMNMATRIZ 2

int main() {

    printf("Insira os valores na matriz 2x2\n");

    int matriz[LINEMATRIZ][COLUMNMATRIZ];

    for (int i = 0; i < LINEMATRIZ; i++) {
        printf("Linha %d: \n", (i + 1));
        for (int j = 0; j < COLUMNMATRIZ; j++) {
            printf("Valor %d: ", (j + 1));
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Invertendo a ordem dos valores\n");

    for (int i = (LINEMATRIZ - 1); i >= 0; i--) {
        for (int j = 0; j < COLUMNMATRIZ; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}