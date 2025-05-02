#include <stdio.h>
#include <stdlib.h>

int main() {

    int firstValue = 0;
    int secondValue = 0;
        
    int intervalStart = 5;
    int intervalEnd = 10;

    while (!(firstValue > intervalStart && firstValue < intervalEnd) || !(secondValue > intervalStart && secondValue < intervalEnd)) {
        printf("Digite valores entre 5 e 10\n");
        printf("Insira um valor: ");
        scanf("%d", &firstValue);
        printf("Insira um segundo valor: ");
        scanf("%d", &secondValue);
    }

    int sum;
    sum = (firstValue + secondValue);

    printf("%d + %d = %d\n", firstValue, secondValue, sum);
}