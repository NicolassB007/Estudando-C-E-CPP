#include <stdio.h>
#include <stdlib.h>

int main() {

    int firstValue;
    int secondValue;
    int thirdValue;

    printf("Informe tres valores: \n");
    scanf("%d %d %d", &firstValue, &secondValue, &thirdValue);

    int multiplyingThreeValues;
    multiplyingThreeValues = (firstValue * secondValue * thirdValue);

    printf("O resultado final e %d\n", multiplyingThreeValues);

    return 0;
}