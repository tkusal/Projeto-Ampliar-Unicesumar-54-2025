/*
    Escreva um programa que imprima na tela todos os números pares entre 100 e 200.
*/

#include <stdio.h>

int main() {

    for (int i = 100; i <= 200; i+=2) {   // i = i+2     ---   i++ == i+=1 == i=i+1
        printf("%d ", i);

        /*
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        */
    }

    return 0;
}