#include <stdio.h>

int main() {
    int vetor[20];
    int i;
    int valor = 2;

    // Preenchendo o vetor com a sequ�ncia
    for (i = 0; i < 20; i++) {
        vetor[i] = valor;
        valor *= 2; // Multiplicando o valor por 2 a cada itera��o
    }

    // Impress�o do vetor preenchido
    printf("Vetor preenchido com a sequencia:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

