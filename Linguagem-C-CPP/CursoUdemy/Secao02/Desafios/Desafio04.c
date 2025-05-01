#include <stdio.h>
#include <stdlib.h>

int main() {

    int value;
    
    printf("Insira um valor: ");
    scanf("%d", &value);

    const int minRange = 0;
    const int maxRange = 10; 

    if ((value >= minRange) && (value <= maxRange)) {
        printf("O valor inserido e %d\n", value);
        printf("Ele esta entre 0 e 10\n");
    }
    else {
        printf("O valor inserido e %d\n", value);
        printf("Ele esta fora do range permitido (0 ate 10)");
    }

    return 0;
}