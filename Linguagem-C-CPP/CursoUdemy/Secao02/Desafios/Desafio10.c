#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("Mostrando a soma do numero sorteado por 3 dados");
    
    srand(time(NULL));

    int firstDado;
    printf("Primeiro dado: ");
    firstDado = ((rand() % 7) + 1);

    int secondDado;
    printf("Segundo dado: ");
    secondDado = ((rand() % 7) + 1);

    int thirdDado;
    printf("Segundo dado: ");
    thirdDado = ((rand() % 7) + 1);

    printf("Valor sorteado pelos dados: \n"); 
    printf("Primeiro dado -> %d         \n", firstDado);
    printf("Segundo dado  ->  %d        \n", secondDado);
    printf("Terceiro dado -> %d         \n", thirdDado);

    printf("SOMA DOS 3 NUMEROS SORTEADOS\n");
    
    int sum;
    sum = (firstDado + secondDado + thirdDado);

    printf("Resultado da soma -> %d\n", sum);
    
    return 0;
}