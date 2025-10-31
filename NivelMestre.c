#include <stdio.h>

// -----------------------------
// FUNÇÕES RECURSIVAS
// -----------------------------

// BISPO - 5 casas na diagonal superior direita
// Requer loops aninhados + recursividade
void moverBispo(int passo, int max) {
    if (passo > max) {
        return; // Condição de parada
    }

    // Loops aninhados para representar combinação de direções
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima + Direita (passo %d)\n", passo);
        }
    }

    moverBispo(passo + 1, max); // Chamada recursiva
}

// TORRE - 5 casas para a direita (recursivo)
void moverTorre(int passo, int max) {
    if (passo > max) {
        return;
    }

    printf("Direita (passo %d)\n", passo);
    moverTorre(passo + 1, max);
}

// RAINHA - 8 casas para a esquerda (recursivo)
void moverRainha(int passo, int max) {
    if (passo > max) {
        return;
    }

    printf("Esquerda (passo %d)\n", passo);
    moverRainha(passo + 1, max);
}

// -----------------------------
// CAVALO - MOVIMENTAÇÃO AVANÇADA
// L para cima + direita (1 vez)
// Loops com variáveis múltiplas + continue + break
// -----------------------------
void moverCavalo() {
    printf("\n=== Movimentação do Cavalo (L: Cima + Cima + Direita) ===\n");

    // Movimentos em L (subindo 2 e depois direita 1)
    int movimentos = 3; // total de ações (2 cima + 1 direita)

    for (int i = 1, subida = 2; i <= movimentos; i++) {
        
        // Se ainda temos movimentos para subir:
        if (subida > 0) {
            printf("Cima\n");
            subida--;
            continue; // Pula para próxima interação do loop
        }

        // Quando não houver mais subida, move direita
        printf("Direita\n");
        break; // Finaliza pois o movimento em L foi concluído
    }
}

// -----------------------------
// PROGRAMA PRINCIPAL
// -----------------------------
int main() {

    printf("\n=== Movimentação do Bispo ===\n");
    moverBispo(1, 5);

    printf("\n=== Movimentação da Torre ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimentação da Rainha ===\n");
    moverRainha(1, 8);

    moverCavalo();

    return 0;
}
