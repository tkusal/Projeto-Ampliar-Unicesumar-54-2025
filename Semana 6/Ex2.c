/*
    Escreva um algoritmo em C que receba duas notas de um aluno e calcule e informe a média.
    Utilize sub-rotinas.
*/

#include <stdio.h>

float CalculaMedia(float n1, float n2);
void InformaSituacao(float n1, float n2);

int main() {
    float nota1, nota2;
    printf("Informe a nota 1:");
    scanf("%f", &nota1);
    printf("Informe a nota 2:");
    scanf("%f", &nota2);
    
    InformaSituacao(nota1, nota2);

    return 0;
}

float CalculaMedia(float n1, float n2) {
    return (n1+n2)/2;
}

void InformaSituacao(float n1, float n2) {
    float media = CalculaMedia(n1, n2);

    if (media > 6) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

}