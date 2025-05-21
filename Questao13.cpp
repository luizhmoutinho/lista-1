// 13.  Remova elementos duplicados de um vetor.

#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 2, 3, 4, 4, 5, 1, 6, 6}, novo[10], tam = 0;
    for (int i = 0; i < 10; i++) {
        int repetido = 0;
        for (int j = 0; j < tam; j++) {
            if (vetor[i] == novo[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            novo[tam++] = vetor[i];
        }
    }
    for (int i = 0; i < tam; i++) printf("%d ", novo[i]);
    return 0;
}
