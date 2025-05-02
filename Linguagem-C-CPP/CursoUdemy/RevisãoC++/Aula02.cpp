// Revisão de C++

#include <stdio.h>
#include <stdlib.h>  
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Definindo Vetor

    // int vetor[3];

    // Passando valores para um vetor
    // vetor[0] = 5;
    // vetor[1] = 10;
    // vetor[2] = 15;


    // Imprimindo valores do vetor
    // for (int i = 0; i < 3; i++) {
    //     printf("Vetor Valores: %d ", vetor[i]);
        
    //     cout << vetor[i] << " " << "\n";
    // }
    // printf("Vetor na posicao 0: %d", vetor[0]);

    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Matriz -> " <<  matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}