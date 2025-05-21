// 3. Calcule a soma de todos os elementos de um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5}, soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    printf("Soma = %d\n", soma);
    return 0;
}
