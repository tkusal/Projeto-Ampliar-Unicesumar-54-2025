/*
    Escreva um programa que receba 2 números inteiros e multiplique-os.
    O programa deverá informar se o resultado da multiplicação é par ou ímpar.
*/

#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    result = num1 * num2;
    printf("%d x %d = %d", num1, num2, result);

    if (result % 2 == 0) {
        printf(" - PAR");
    }
    else {
        printf(" - IMPAR");
    }

    return 0;
}