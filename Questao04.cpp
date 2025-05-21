// 4. Encontre o menor elemento de um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int menor = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] < menor)
            menor = vetor[i];
    }
    printf("Menor = %d\n", menor);
    return 0;
}
