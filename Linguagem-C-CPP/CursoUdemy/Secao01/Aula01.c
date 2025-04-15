#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello World!\n");

    // printf(); -> Código para exibir valores/texto;

    int value = 7;
    // \n -> Caracter para pular uma linha;
    printf("Valor de a -> %d\n", value);
    
    int valueB = 6;
    printf("Valor de b -> %d\n", valueB);

    // Lendo um valor;
    int valueC;
    printf("Informe um valor: ");
    scanf("%d", &valueC);

    // Exibindo o valor C;
    printf("Valor de C -> %d\n", valueC);

    double valueD;
    printf("Informe o valor de D: ");
    scanf("%lf", &valueD);

    printf("Valor de D -> %lf\n", valueD);

    // Trabalhando com letra
    char c = 'N';
    printf("Nicolas comeca com a letra -> %c\n", c);

    char otherCaracter;
    printf("Informe um caracter: ");
    fflush(stdin);
    scanf("%c", &otherCaracter);

    printf("O caracter informado foi -> %c\n", otherCaracter);

    return 0;
}