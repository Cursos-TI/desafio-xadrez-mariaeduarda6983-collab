#include <stdio.h>

int main() {

    // Quantidade de passos que o cavalo irá executar em L
    const int PASSOS_VERTICAL = 2;   // Baixo
    const int PASSOS_HORIZONTAL = 1; // Esquerda

    printf("\n=== Movimentação do Cavalo (L para Baixo e Esquerda) ===\n");

    // Loop externo: controle do movimento vertical (usa FOR)
    for (int i = 1; i <= PASSOS_VERTICAL; i++) {
        printf("Baixo (passo vertical %d)\n", i);
        
        // Loop interno: movimento horizontal (usa WHILE)
        int j = 1;
        while (j <= PASSOS_HORIZONTAL) {
            printf("Esquerda (passo horizontal %d)\n", j);
            j++;
        }

        printf("---- Movimentação em L completa ----\n");
    }

    return 0;
}
