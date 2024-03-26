#include <stdio.h>

int main() {
    int num, numAtual, divisor, ehPrimo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numeros primos antes de %d:\n", num);
    for (numAtual = 2; numAtual <= num; numAtual++) {
        ehPrimo = 1;
        for (divisor = 2; divisor * divisor <= numAtual; divisor++) {
            if (numAtual % divisor == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            printf("%d numero primo.\n", numAtual);
        } else {
            printf("%d n.\n", numAtual);
        }
    }

    return 0;
}

