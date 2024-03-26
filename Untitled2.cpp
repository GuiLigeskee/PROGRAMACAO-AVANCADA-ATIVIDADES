#include <stdio.h>

int main() {
    int vetor1[5];
    int vetor2[5];
    int resultado[5];
    char operacao;
    int i;

    printf("Digite os 5 números do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 5 números do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Digite a operacao desejada (+, -, /, *):\n");
    scanf(" %c", &operacao);

    for (i = 0; i < 5; i++) {
        switch (operacao) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                if (vetor2[i] != 0)
                    resultado[i] = vetor1[i] / vetor2[i];
                else {
                    printf("Divisao por zero encontrada. Resultado indefinido.\n");
                    resultado[i] = 0;
                }
                break;
            default:
                printf("Operacao invalida.\n");
                return 1;
        }
    }

    printf("Resultado da operacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

