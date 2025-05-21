// 15. Concatene dois vetores em um terceiro vetor.

#include <stdio.h>

int main() {
    int vetor1[3] = {1, 2, 3}, vetor2[3] = {4, 5, 6}, vetor3[6];
    for (int i = 0; i < 3; i++) vetor3[i] = vetor1[i];
    for (int i = 0; i < 3; i++) vetor3[i + 3] = vetor2[i];
    for (int i = 0; i < 6; i++) printf("%d ", vetor3[i]);
    return 0;
}
