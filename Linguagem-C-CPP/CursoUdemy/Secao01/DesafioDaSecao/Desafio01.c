#include <stdio.h>
#include <stdlib.h>

int main() {
    double firstNote;
    double secondNote;

    printf("Digite a primeira nota do aluno: ");
    scanf("%lf", &firstNote);
    printf("Digite a segunda nota do aluno: ");
    scanf("%lf", &secondNote);

    double average;
    average = ((firstNote + secondNote) / 2);

    printf("A media do aluno e %.2lf\n", average);

    return 0;
}