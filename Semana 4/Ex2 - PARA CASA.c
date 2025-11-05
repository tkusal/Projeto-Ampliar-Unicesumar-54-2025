/*
    Escreva um programa em linguagem C que receba 2 notas de 5 alunos.
    Essas notas devem ser armazenadas em uma matriz onde cada linha representa um aluno
    e cada coluna representa uma nota.

    O programa deverá exibir na tela a média de cada aluno e informar se ele está aprovado (média >= 7),
    em recuperação (média entre 6 e 7), reprovado (média < 6).
*/

#include <stdio.h>

int main()
{
    float notas[5][2];
    float media;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Informe a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        media = (notas[i][0] + notas[i][1]) / 2;
        printf("O aluno %d está ", i + 1);

        if (media >= 7)
        {
            printf("aprovado com média %.2f. \n", media);
        }
        else if (media >= 6)
        {
            printf("de recuperação com média %.2f. \n", media);
        }
        else
        {
            printf("reprovado com média %.2f. \n", media);
        }
    }

    return 0;
}