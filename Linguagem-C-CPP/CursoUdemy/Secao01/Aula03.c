#include <stdio.h>
#include <stdlib.h>

int main() {
    // Operações

    double valueA;
    printf("Informe um valor: ");
    scanf("%lf", &valueA);

    double valueB;
    printf("Informe outro valor:");
    scanf("%lf", &valueB);

    // Soma
    double soma = valueA + valueB;
    printf("A soma de %.2lf + %.2lf = %.2lf\n", valueA, valueB, soma);

    // Subtração
    double subtracao = valueA - valueB;
    printf("A subtracao de %.2lf - %.2lf = %.2lf\n", valueA, valueB, subtracao);

    // Divisão
    double divisao = valueA / valueB;
    printf("A divisao de %.2lf / %.2lf = %.2lf\n", valueA, valueB, divisao);

    // Multiplicação
    double multiplicacao = valueA * valueB;
    printf("A multiplicacao de %.2lf x %.2lf = %.2lf\n", valueA, valueB, multiplicacao);

    int valueTestA = 10, valueTestB = 5;
    printf("O resto de %d por %d = %d", valueTestA, valueTestB, (valueTestA % valueTestB));

    return 0;
}