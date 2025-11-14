#include <stdio.h>

int main() {
    int LINHAS = 10;
    int COLUNAS = 10;
    int matriz[LINHAS][COLUNAS]; // Matriz 10x10

    // Preenche a matriz com 0s (água)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = 0;
        }
    }

  

    // Navio 1 (Horizontal)
    int navio1_linha = 2;
    int navio1_coluna = 0; // Coordenadas ajustadas para evitar sobreposição inicial
    for (int i = 0; i < 3; i++) {
        matriz[navio1_linha][navio1_coluna + i] = 3;
    }

    // Navio 2 (Vertical)
    int navio2_linha = 0; // Coordenadas ajustadas
    int navio2_coluna = 9;
    for (int i = 0; i < 3; i++) {
        matriz[navio2_linha + i][navio2_coluna] = 3;
    }

    // Navio 3 (Diagonal Crescente: linha e coluna aumentam)
    int navio3_linha = 5;
    int navio3_coluna = 2; // Ex: (5,2), (6,3), (7,4)
    for (int i = 0; i < 3; i++) {
        matriz[navio3_linha + i][navio3_coluna + i] = 3;
    }

    // Navio 4 (Diagonal Decrescente: linha aumenta, coluna diminui)
    int navio4_linha = 0;
    int navio4_coluna = 7; // Ex: (0,7), (1,6), (2,5)
    for (int i = 0; i < 3; i++) {
        matriz[navio4_linha + i][navio4_coluna - i] = 3;
    }

    // --- Imprime a Matriz na tela ---
    // Esta parte do código é a mesma do seu original.
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0; // Fim do programa
}
