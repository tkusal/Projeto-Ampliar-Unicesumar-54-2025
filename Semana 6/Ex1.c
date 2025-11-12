/*
    Escreva um programa que controle o estoque de uma loja.
    Essa loja pode possuir ATÉ 50 produtos.
    Cada produto possui:
        - Nome
        - Código
        - Preço
        - Quantidade em estoque
    
    O programa deve permitir:
        1. Cadastrar novo produto
        2. Pesquisar um produto pela matricula
        3. Reduzir a quantidade em estoque de um produto
        4. Listar todos os produtos
        5. Sair
    
    O programa só poderá ser encerrado quando o usuário escolher a opção 5.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_PRODUTOS 50

struct Produto {
    char nome[30];
    int cod, qtd;
    float preco;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct Produto produtos[MAX_PRODUTOS];
    int opcao;

    do {
        printf("Escolha uma opção: \n");
        printf("[1] Cadastrar Produto \
            \n[2] Pesquisar Produto \
            \n[3] Alterar Quantidade em Estoque \
            \n[4] Listar Todos \
            \n[5] Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                printf("Até logo.");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;   
        }

    }while(1);
}