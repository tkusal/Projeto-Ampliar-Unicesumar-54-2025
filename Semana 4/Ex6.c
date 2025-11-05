/*
    i++   ==  i = i+1  ==  i+=1
    i--   ==  i = i-1  ==  i-=1

    Qual a diferença entre i++ e ++i?
*/

#include <stdio.h>

int main () {
    int i = 10;

    //i++   ou   i--
    printf("i = %d \n", i);
    i = i+1;

    //++i   ou  --i
    i += 1;
    printf("i = %d \n", i);


    printf("------");
    i = 10;
    printf("i = %d \n", i);
    printf("i++ = %d \n", i++);
    printf("i = %d \n", i);
    printf("++i = %d \n", ++i);
    printf("i = %d \n", i);

    return 0;
}