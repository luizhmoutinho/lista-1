// 10. Imprima os elementos de um vetor em ordem inversa.

#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
