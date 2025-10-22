/*
    Escreva um programa que que imprima todas as tabuadas de multiplicação de 1 a 9.

    Exemplo:
    1x1 = 1
    1x2 = 2
    ....
    9x9 = 81
*/

#include <stdio.h>

int main() {

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 10; j++ ) {
            printf("%d x %d = %d \n", i, j, i*j);
        }
        printf("------------------\n");
    }

    return 0;
}