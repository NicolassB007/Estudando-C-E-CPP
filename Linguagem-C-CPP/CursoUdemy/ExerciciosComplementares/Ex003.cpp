#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    int vetor[5] = {3, 1, 5, 1, 7}; 

    cout << "Vetor:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Vetor Posicao " << (i + 1) << ": "; 
        cout << vetor[i] << "\n";
    }
    
    int *vetorPointer;
    // vetorPointer = vetor; // APONTA também para o primeiro elemento
    
    vetorPointer = &vetor[0];// APONTA para o primeiro elemento do vetor

    cout << "Primeiro elemento do vetor: " << *vetorPointer << "\n";

    cout << "Usando ponteiro para exibir o vetor\n";
    for (int i = 0; i < 5; i++) {
        cout << "Valor: " << *(vetorPointer) << "\n";
        vetorPointer++; // Faz o ponteiro apontar para o proximo valor
    }

    return 0;
}