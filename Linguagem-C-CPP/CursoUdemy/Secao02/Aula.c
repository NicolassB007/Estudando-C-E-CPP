#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

    // Usa o tempo atual como semente
    srand(time(NULL));

    int max = 14;
    int min = 5;

    // Cria um número aleatório entre 0 e 9
    // int randomNumber = rand() % 10;
    int randomNumber = (rand() % (max - min + 1) + min);

    printf("Numero gerado -> %d\n", randomNumber);

    return 0;
}