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
        2. Pesquisar um produto pela código
        3. Reduzir a quantidade em estoque de um produto
        4. Listar todos os produtos
        5. Sair
    
    O programa só poderá ser encerrado quando o usuário escolher a opção 5.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_PRODUTOS 50

struct Produto {
    char nome[30];
    int cod, qtd;
    float preco;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct Produto produtos[MAX_PRODUTOS];
    int opcao, contagemProdutos = 0, procura, achou = 0;

    do {
        printf("Escolha uma opção: \n");
        printf("[1] Cadastrar Produto \
            \n[2] Pesquisar Produto \
            \n[3] Alterar Quantidade em Estoque \
            \n[4] Listar Todos \
            \n[5] Sair\n");
        scanf("%d", &opcao);
        getchar();
        system("clear");

        switch (opcao) {
            case 1:
                if (contagemProdutos >= MAX_PRODUTOS) {
                    printf("Limite de produtos atingido.\n");
                } else {
                    printf("Informe o nome do produto: ");
                    fgets(produtos[contagemProdutos].nome , sizeof(produtos[contagemProdutos].nome) , stdin );
                    produtos[contagemProdutos].nome[ strcspn(produtos[contagemProdutos].nome , "\n") ] = '\0';
                    system("clear");

                    printf("Informe o código do produto: ");
                    scanf("%d", &produtos[contagemProdutos].cod);
                    getchar();
                    system("clear");

                    printf("Informe a quantidade do produto em estoque: ");
                    scanf("%d", &produtos[contagemProdutos].qtd);
                    getchar();
                    system("clear");

                    printf("Informe o preço do produto: ");
                    scanf("%f", &produtos[contagemProdutos].preco);
                    getchar();
                    system("clear");
                    printf("Produto %s cadastrado com sucesso.\n---\n", produtos[contagemProdutos].nome);
                    contagemProdutos++;
                }
                break;
            case 2:
                printf("Informe o código do produto que deseja pesquisar: ");
                scanf("%d", &procura);
                getchar();
                system("clear");

                for (int i = 0; i < contagemProdutos; i++) {
                    if (produtos[i].cod == procura) {
                        printf("Produto: %s \
                            \nQuantidade: %d\
                            \nPreço: R$%.2f\n", produtos[i].nome, produtos[i].qtd, produtos[i].preco);
                        printf("---\n");
                        achou = 1;    
                        break;
                    }
                }
                if (achou == 0) {
                    printf("Código inexistente.\n---\n");
                }
                break;
            case 3:
                printf("Informe o código do produto que deseja alterar a quantidade: ");
                scanf("%d", &procura);
                getchar();
                system("clear");

                for (int i = 0; i < contagemProdutos; i++) {
                    if (produtos[i].cod == procura) {
                        printf("Informe a nova quantidade: ");
                        scanf("%d", &produtos[i].qtd);
                        printf("Quantidade alterada com sucesso.\n---\n");
                        achou = 1; 
                        break;
                    }
                }
                if (achou == 0) {
                    printf("Código inexistente.\n---\n");
                }
                break;
            case 4:
                for (int i = 0; i <contagemProdutos; i++) {
                    printf("Produto: %s \
                            \nCódigo: %d \
                            \nQuantidade: %d \
                            \nPreço: R$%.2f\n", produtos[i].nome, produtos[i].cod, produtos[i].qtd, produtos[i].preco);
                        printf("---\n");  
                }
                break;
            case 5:
                printf("Até logo.");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;   
        }

    }while(opcao!=5);
}