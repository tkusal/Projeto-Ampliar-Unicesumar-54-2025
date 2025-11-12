/*
    Escreva um programa que receba o cadastro de 5 pessoas.
    Cada pessoa possui Nome, Idade e Telefone.

    O programa deverá escrever na tela o telefone da pessoa mais velha.
*/

#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 1

struct Pessoa {
    char nome[20];
    int idade, tel;
};

int main() {
    struct Pessoa pessoas[MAX_PESSOAS];
    int maiorIdade = -1, indice_maior_idade;

    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Informe o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome) , stdin );
        pessoas[i].nome[ strcspn( pessoas[i].nome, "\n") ] = '\0';

        printf("Informe a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);
        getchar(); //fflush(stdin)
        
        printf("Informe o telefone da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].tel);
        getchar(); //fflush(stdin)
        printf("\n----\n");

        if (maiorIdade < pessoas[i].idade) {
            maiorIdade = pessoas[i].idade;
            indice_maior_idade = i;
        }
    }

    printf("\nA pessoa mais velha é %s (%d anos) e o telefone é %d;", pessoas[indice_maior_idade].nome, pessoas[indice_maior_idade].idade , pessoas[indice_maior_idade].tel);

    return 0;
}