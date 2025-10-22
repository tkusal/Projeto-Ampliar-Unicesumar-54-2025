/*
    Escreva um programa que simule um cofre.
    O usuário tem que acertar a senha do cofre para conseguir abri-lo.
    A senha é 2345678
*/

#include <stdio.h>

#define senhaCorreta 2345678

int main() {
    int senha, tentativas = 0;
    
    do {
        printf("Digite a senha do cofre: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta) {
            printf("Cofre aberto!");
            return 0;
        } else {
            printf("Senha inválida. \n");
            tentativas++;
            if (tentativas != 3) {
                printf("Tente novamente.\n");
            }
        }        
    } while (tentativas != 3);

    printf("Você gastou suas 3 tentantivas.");
    return 0;

}