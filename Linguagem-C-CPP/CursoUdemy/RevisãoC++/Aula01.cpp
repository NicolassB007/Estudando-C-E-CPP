// Revisão de C++

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Definindo variáveis

    int a;
    double b;
    char c;
    bool d;

    // Passando valores

    a = 10;
    b = 6.12;
    c = 'N';
    d = true;

    // Escrenvendo variáveis na tela;

    printf("%d \n", a);
    printf("%.2lf \n", b);
    printf("%c \n", c);
    printf("%d \n", d);

    // Imprimindo com C++
    cout << "Valor : " << a;

    // Lendo valores com C
    // scanf("%d", &a);
    // scanf("%lf", &b);
    // scanf("%c", &c);
    // scanf("%d", &d);
    // Lendo valores com C++
    cin >> a;
    
    cout << "Novo valor: " << a;

    return 0;
}