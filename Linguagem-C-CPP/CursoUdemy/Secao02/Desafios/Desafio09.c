#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstValue;
    int secondValue;

    printf("Informe o primeiro valor: ");
    scanf("%d", &firstValue);
    printf("Informe o segundo valor: ");
    scanf("%d", &secondValue);

    printf("OPCOES: \n");
    printf("1 -> SOMA      \n");
    printf("2 -> SUBTRACAO \n");
    
    int choice;
    printf("Informe sua escolha: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("OPCAO ESCOLHIDA FOI SOMA\n");
            int sum;
            sum = (firstValue + secondValue);

            printf("%d + %d = %d\n", firstValue, secondValue, sum);
            break;
        case 2:
            printf("OPCAO ESCOLHIDA FOI SUBTRACAO\n");
            int subtracao;
            subtracao = (firstValue - secondValue);
            
            printf("%d - %d = %d\n", firstValue, secondValue, subtracao);
            break;

        default:
            printf("OPCAO INVALIDA\n");
            break;
    }

    return 0;
}