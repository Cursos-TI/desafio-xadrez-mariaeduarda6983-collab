#include <stdio.h>

int main() {

    // -------------------------
    // DECLARAÇÃO DE CONSTANTES
    // -------------------------
    // Quantidade de casas que cada peça pode se mover
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // -------------------------
    // BISPO - DIAGONAL SUPERIOR DIREITA
    // Utiliza a combinação: Cima + Direita
    // Estrutura de repetição utilizada: FOR
    // -------------------------
    printf("\n=== Movimentação do Bispo ===\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Cima + Direita (passo %d)\n", i);
    }

    // -------------------------
    // TORRE - 5 CASAS PARA A DIREITA
    // Estrutura de repetição utilizada: WHILE
    // -------------------------
    printf("\n=== Movimentação da Torre ===\n");
    int j = 1;
    while (j <= TORRE_MOV) {
        printf("Direita (passo %d)\n", j);
        j++;
    }

    // -------------------------
    // RAINHA - 8 CASAS PARA A ESQUERDA
    // Estrutura de repetição utilizada: DO-WHILE
    // -------------------------
    printf("\n=== Movimentação da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda (passo %d)\n", k);
        k++;
    } while (k <= RAINHA_MOV);

    return 0;
}
