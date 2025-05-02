// Ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

    // Variável
    int a = 10;

    // Imprimindo o valor da variável
    printf("Valor de a: %d\n", a);

    // Imprimindo o endereço de a
    printf("Endereco de a: %d \n", &a);

    // Variáveis armazenam VALORES
    // Ponteiros armazenam POSIÇÕES NA MEMÓRIA

    int b = 10;
    int *pointer;

    // Ponteiro recebendo a posição na memória da variável B
    pointer = &b; 

    printf("Valor de b: %d \n", b);

    // * pode ser lido como "Conteúdo apontado por"
    *pointer = 40;
    printf("Valor de b: %d \n", b);
    return 0;
}