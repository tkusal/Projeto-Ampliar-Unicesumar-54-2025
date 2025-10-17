/*
    Escreva um programa que receba a altura e peso de uma pessoa.
    O programa deverá calcular o IMC dessa pessoa e informar se ela está: 

    Abaixo do peso - IMC menor ou igual 18,5
    Peso normal - IMC entre 18,5 e 24,99
    Sobrepeso - IMC entre 25 e 29,99
    Obeso - IMC maior ou igual a 30

    IMC = PESO / ALTURA²
*/

#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura;

    printf("Informe seu peso (Kg): ");
    scanf("%f", &peso);

    printf("Informe sua altura (metros): ");
    scanf("%f", &altura);

    //float imc = peso / (altura * altura);
    float imc = peso / pow(altura, 2);

    if (imc <= 18.5) {
        printf("Abaixo do peso.");
    } else if (imc <= 24.99) {
        printf("Peso adequado.");
    } else if (imc <= 29.99) {
        printf("Você está acima do peso.");
    } else {
        printf("Você está obeso.");
    }

    return 0;
}