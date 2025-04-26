#include <stdio.h>
#include <stdlib.h>

int main() {

    double firstNote;
    double secondNote;

    printf("Informe a primeira nota: ");
    scanf("%lf", &firstNote);
    printf("Informe a secunda nota: ");
    scanf("%lf", &secondNote);

    double difference;
    difference = firstNote - secondNote;

    double absDifference = abs(difference);

    printf("A diferenca absoluta de %.2lf - %.2lf = %.2lf", firstNote, secondNote, absDifference);

    return 0;
}