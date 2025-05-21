// 7. Verifique se um vetor contém um determinado valor.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5}, valor = 5, achou = 0;
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            achou = 1;
            break;
        }
    }
    printf("%s\n", achou ? "Valor encontrado" : "Valor não encontrado");
    return 0;
}
