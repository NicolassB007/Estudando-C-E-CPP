#include <stdio.h>
#include <stdlib.h>

int main() {

    int value;
    printf("Informe um valor: ");
    scanf("%d", &value);

    int counter = 0;
    for (int i = 1; i <= value; i++) {
        if (value % i == 0) {
            counter++;
        }
    }

    if (counter == 2) {
        printf("O valor %d E PRIMO\n", value);
    }
    else {
        printf("O valor %d NAO E PRIMO\n", value);
    }

    return 0;
}