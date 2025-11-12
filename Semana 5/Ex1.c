/*
    Um programa que receba o cadastro de um cliente.
    Cliente possui nome, idade e peso.
*/

#include <stdio.h>

typedef struct {
    char nome[15];
    int idade;
    float peso;
} Cliente;

int main() {

    Cliente pessoa;

    printf("Informe a idade: ");
    scanf("%d", &pessoa.idade);    

    printf("Informe o peso: ");
    scanf("%f", &pessoa.peso);
    
    printf("Informe o nome: ");
    getchar();
    scanf("%14[^\n]s", pessoa.nome);

    printf("Nome: %s \nIdade: %d \nPeso:%.2f \n", pessoa.nome, pessoa.idade, pessoa.peso);
    
    return 0;
}