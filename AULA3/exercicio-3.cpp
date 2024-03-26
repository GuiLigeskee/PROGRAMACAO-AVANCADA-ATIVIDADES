#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    for (i = 0; i < 20; i++) {
        vetor[i] = 1;
    }

    printf("Vetor preenchido com a sequencia:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

