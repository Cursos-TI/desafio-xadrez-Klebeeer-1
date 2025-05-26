#include <stdio.h>

// Constantes de movimentação
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

// Função recursiva para movimentar o Bispo (diagonal superior direita)
void moverBispo(int passo) {
    if (passo == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passo - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorre(passo - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainha(passo - 1); // Chamada recursiva
}

// Movimento do Cavalo com loops aninhados
void moverCavalo() {
    // Um L para baixo e esquerda (exemplo: 2 para baixo, 1 para esquerda)
    int i, j;

    printf("\nMovimento do Cavalo (Baixo + Esquerda):\n");
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    // Mestre: Movimento do Cavalo com múltiplas variáveis e break
    printf("\nMovimento do Cavalo (Cima + Direita com controle avançado):\n");
    for (int a = 0, b = 0; a < 3; a++, b++) {
        if (a < 2) {
            printf("Cima\n");
            continue;
        }
        if (b == 2) {
            printf("Direita\n");
            break;
        }
    }
}

// Função principal
int main() {
    // Movimentações básicas com funções recursivas
    printf("Movimentação do Bispo (Diagonal superior direita):\n");
    moverBispo(PASSOS_BISPO);

    printf("\nMovimentação da Torre (Direita):\n");
    moverTorre(PASSOS_TORRE);

    printf("\nMovimentação da Rainha (Esquerda):\n");
    moverRainha(PASSOS_RAINHA);

    // Movimentações do Cavalo
    moverCavalo();

    return 0;
}

