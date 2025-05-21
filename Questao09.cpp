// 9. Calcule o produto dos elementos de um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5}, prod = 1;
    for (int i = 0; i < 5; i++) {
        prod *= vetor[i];
    }
    printf("Produto = %d\n", prod);
    return 0;
}
