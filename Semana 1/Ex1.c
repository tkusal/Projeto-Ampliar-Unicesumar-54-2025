/*
    Escreva um algoritmo que receba duas notas de um aluno e calcule a média.
*/

#include <stdio.h>  //STandarD Input Output . Header

int main() {
    float nota1, nota2;

    printf("Informe a primeira nota: ");
    scanf( "%f" , &nota1 );
    
    printf("Informe asegunda nota: ");
    scanf("%f", &nota2);

    float media;
    media = (nota1 + nota2) / 2;

    printf("A média é %.2f", media);

    return 0;
}