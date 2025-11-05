/*
    Escreva um programa em C que receba 10 idades em um vetor.
    O programa deverá informar qual a idade mais velha.
*/

#include <stdio.h>

int main() {
    int idades[10];

    for (int contador = 0; contador < 10; contador++) {
        printf("Informe a idade %d: ", contador+1);
        scanf("%d", &idades[contador]);
    }

    int maiorIdade = idades[0];

    for (int i = 1; i < 10; i++) {
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
        }
    }

    printf("A maior idade é %d", maiorIdade);

    return 0;
}