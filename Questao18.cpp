// 18. Crie um vetor com a interseção de dois vetores.

#include <stdio.h>

int main() {
    int vetor1[3] = {1, 2, 3}, vetor2[3] = {2, 3, 4};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (vetor1[i] == vetor2[j]) {
                printf("%d ", vetor1[i]);
                break;
            }
        }
    }
    return 0;
}
