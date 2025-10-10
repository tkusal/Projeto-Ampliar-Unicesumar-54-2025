/*
    Escreva um programa que receba o salário de uma pessoa e calcule um aumento de 10%.
*/
#include <stdio.h>

int main() {
    float salario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    float aumento = salario * 0.10;
    float salarioFinal = salario + aumento;  

    //float salarioFinal = salario * 1.10;

    printf("Aumento de: R$ %.2f \nSalário Final: R$ %.2f", aumento, salarioFinal);

    return 0;
}