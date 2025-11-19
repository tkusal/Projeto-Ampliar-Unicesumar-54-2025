/*
    Refatore o código abaixo utilizando sub-rotinas para cada tarefa.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_PRODUTOS 50

int contagemProdutos = 0;

struct Produto {
    char nome[30];
    int cod, qtd;
    float preco;
};

int Menu() {
    int opc;
    printf("Escolha uma opção: \n");
    printf("[1] Cadastrar Produto \
            \n[2] Pesquisar Produto \
            \n[3] Alterar Quantidade em Estoque \
            \n[4] Listar Todos \
            \n[5] Sair\n");
    scanf("%d", &opc);
    getchar();
    system("clear");
    return opc;
}

int PesquisaProduto(struct Produto vetor[contagemProdutos]) {
    int procura;
    printf("Informe o código do produto que deseja pesquisar: ");
    scanf("%d", &procura);
    getchar();
    system("clear");

    for (int i = 0; i < contagemProdutos; i++) {
        if (vetor[i].cod == procura) {      
            return i;
        }
    }

    printf("Código inexistente.\n---\n");
    return -1;
}

int AlteraQuantidade (struct Produto item) {
    printf("Informe a nova quantidade: ");
    scanf("%d", &item.qtd);
    printf("Quantidade alterada com sucesso.\n---\n");
    return item.qtd;
}

void ListarProdutos (struct Produto vetor[]) {
    for (int i = 0; i <contagemProdutos; i++) {
        printf("Produto: %s \
            \nCódigo: %d \
            \nQuantidade: %d \
            \nPreço: R$%.2f\n", vetor[i].nome, vetor[i].cod, vetor[i].qtd, vetor[i].preco);
        printf("---\n");  
    }
}

struct Produto CadastraProduto () {
    struct Produto novoProduto;
    printf("Informe o nome do produto: ");
    fgets(novoProduto.nome , sizeof(novoProduto.nome) , stdin );
    novoProduto.nome[ strcspn(novoProduto.nome , "\n") ] = '\0';
    system("clear");

    printf("Informe o código do produto: ");
    scanf("%d", &novoProduto.cod);
    getchar();
    system("clear");

    printf("Informe a quantidade do produto em estoque: ");
    scanf("%d", &novoProduto.qtd);
    getchar();
    system("clear");

    printf("Informe o preço do produto: ");
    scanf("%f", &novoProduto.preco);
    getchar();
    system("clear");
    printf("Produto %s cadastrado com sucesso.\n---\n", novoProduto.nome);

    return novoProduto;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct Produto produtos[MAX_PRODUTOS];
    int opcao, indice;

    do {
        opcao = Menu();

        switch (opcao) {
            case 1:
                if (contagemProdutos >= MAX_PRODUTOS) {
                    printf("Limite de produtos atingido.\n");
                } else {
                    produtos[contagemProdutos] = CadastraProduto();
                    contagemProdutos++;
                }
                break;
            case 2:
                indice = PesquisaProduto(produtos);
                if (indice > -1) {
                    printf("Produto: %s \
                            \nQuantidade: %d\
                            \nPreço: R$%.2f\n", produtos[indice].nome, produtos[indice].qtd, produtos[indice].preco);
                    printf("---\n");
                }
                break;
            case 3:
                indice = PesquisaProduto(produtos);

                if (indice > -1) {
                    produtos[indice].qtd = AlteraQuantidade(produtos[indice]);
                }
                break;
            case 4:
                ListarProdutos(produtos);
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