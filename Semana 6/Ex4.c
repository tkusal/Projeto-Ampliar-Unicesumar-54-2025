/*
    Testando ponteiros.
*/

#include <stdio.h>

int main() {
    int vetor[3][3];

    for (int i = 0; i <10; i++) {
        for (int j = 0; j <10; j++) {
            printf("&vetor[%d][%d] = %p\n", i, j, &vetor[i][j]);
        }    
    }

    return 0;
}