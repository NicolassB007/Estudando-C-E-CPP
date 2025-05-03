#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    double doubleNumber;
    cout << "Insira um valor: ";
    cin >> doubleNumber;

    double *pointer;
    pointer = &doubleNumber;

    cout << "Endereco de memoria da variavel " << pointer << "\n";

    cout << "Alterando o valor pelo ponteiro\n";

    // *pointer = 10;
    cout << "Informe o novo valor: ";
    cin >> *pointer;

    cout << "Novo valor -> " << doubleNumber;

    return 0;
}