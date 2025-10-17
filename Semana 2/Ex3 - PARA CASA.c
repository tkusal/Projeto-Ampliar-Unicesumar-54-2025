/*
    Escreva um programa que receba a idade de uma pessoa.

    Se essa pessoa tiver mais de 18 anos, ela é adulto.
    Se a idade dela for entre 12 e 18, é adolescente.
    Se ela tiver menos de 12 anos, é criança.

    O programa deverá escrever na tela, a "qualificação" dessa pessoa de acordo com a idade.
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Seja bem vindo(a)!\nInfrme sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Sua idade é %d e você é adulto.", idade);
    }
    else if (idade >= 12)
    {
        printf("Sua idade é %d e você é adolescente.", idade);
    }
    else
    {
        printf("Sua idade é %d e você é criança.", idade);
    }

    return 0;
}