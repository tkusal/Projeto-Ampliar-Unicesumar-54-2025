/*
    Escreva um programa que receba a altura de 5 pessoas em um vetor.
    O programa deverá informar qual a menor altura.
*/

#include <stdio.h>

int main()
{
    float altura[5];
    float menorAltura = 9999;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe a altura: ");
        scanf("%f", &altura[i]);

        if (altura[i] < menorAltura)
        {
            menorAltura = altura[i];
        }
    }

    printf("A menor altura é %.2f", menorAltura);

    return 0;
}