/*
    Escreva um programa que solicite 2 números para o usuário e
    calcule uma multiplicação entre esses dois números.
*/

#include <stdio.h> //STarndarD Input Output . Header

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1 );

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    /*
    float result = num1 * num2;
    printf("Resultado = %.2f", result);
    */

    printf("%.2f x %.2f = %.2f", num1, num2, num1 * num2);

    return 0;
}