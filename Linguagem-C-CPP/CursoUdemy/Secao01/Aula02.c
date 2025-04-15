#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello World!\n");

    // Definindo uma variável inteira
    int valueA = 20;
    // Exibindo o valor contido na variável
    printf("Valor de A -> %d\n", valueA);

    int valueB;
    printf("Informe o valor de B: ");
    scanf("%d", &valueB);

    printf("O valor de B -> %d\n", valueB);

    system("pause");

    return 0;
}