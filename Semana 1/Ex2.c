// Apresentando a diferença de precisão entre double e float.

#include <stdio.h>

int main() {
    float X = 0.354187315335487932236588;
    double Y = 0.354187315335487932236588;

    printf("%.24f \n", X);
    printf("%.24f \n", Y);

    return 0;
}