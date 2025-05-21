// 17. Crie um vetor com a união de dois vetores.

#include <stdio.h>

int main() {
    int vetor1[3] = {1, 2, 3}, vetor2[3] = {3, 4, 5}, uniao[6], tam = 0;
    for (int i = 0; i < 3; i++) uniao[tam++] = vetor1[i];
    for (int i = 0; i < 3; i++) {
        int existe = 0;
        for (int j = 0; j < tam; j++) {
            if (vetor2[i] == uniao[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) uniao[tam++] = vetor2[i];
    }
    for (int i = 0; i < tam; i++) printf("%d ", uniao[i]);
    return 0;
}
