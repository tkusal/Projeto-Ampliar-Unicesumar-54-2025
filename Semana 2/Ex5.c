/*
    Escreva um programa que realize uma operação matemática entre 2 números.
    O usuário deverá informar os 2 números e escolher o tipo de operação baseado no menu abaixo:

    1. Somar
    2. Subtrair
    3. Multiplicar
    4. Dividir
*/

#include <stdio.h>

int main() {
    float num1, num2;
    int opcao;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("\n1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\nEscolha uma opção: ");
    scanf("%d", &opcao);
    /*
    if (opcao == 1) {

    } else if (opcao == 2) ...
    */
    switch (opcao) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Opção inválida.");
            break;
    }

    return 0;
}