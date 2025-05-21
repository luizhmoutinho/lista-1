// 5. Conte quantos elementos de um vetor são pares.

#include <stdio.h>

int main() {
    int vetor[6] = {1, 2, 3, 4, 5, 6}, cont = 0;
    for (int i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0)
            cont++;
    }
    printf("Quantidade de pares = %d\n", cont);
    return 0;
}
