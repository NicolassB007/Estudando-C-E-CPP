#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// Praticando uso de PONTEIROS

int main() {

    int a;
    cout << "Informe um valor: ";
    cin >> a;

    cout << "Valor informado -> " << a << "\n";

    int *pointerToA;
    pointerToA = &a;    

    cout << "Endereco da variavel A -> " << pointerToA << "\n";
    cout << "Valor da variavel atraves do ponteiro -> " << *pointerToA;


    return 0;
}