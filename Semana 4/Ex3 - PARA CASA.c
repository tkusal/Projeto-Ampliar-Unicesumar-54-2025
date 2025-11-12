/*
    DESAFIO!!!

    Escreva um programa em C que receba 5 números inteiros em um vetor.
    O programa deverá exibir na tela os 5 números em ordem crescente.

    Exemplo:
    Recebe: 10 6 7 2 8
    Escreve: 2 6 7 8 10

    DICA: Pesquisem sobre Bubble Sort.
*/

#include <stdio.h>

int main() {
    int numeros[5];
    int aux;

    for (int i= 0; i < 5; i++) {
        printf("Informe um número inteiro: ");
        scanf("%d", &numeros[i]);
    }

    printf("Sem ordenação: ");
    for (int i= 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++ ) {
            if (numeros[j] > numeros[j+1]) {
                aux = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("\nCom ordenação: ");
    for (int i= 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}