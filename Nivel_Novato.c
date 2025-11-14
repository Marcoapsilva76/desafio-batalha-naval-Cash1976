#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída (para printf)

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

    // --- Posicionamento dos Navios (tamanho fixo 3) ---

    // Navio 1 (Horizontal)
    int navio1_linha = 2;
    int navio1_coluna = 3;
    for (int i = 0; i < 3; i++) {
        // Assume que as coordenadas estão dentro dos limites
        // e não há sobreposição para simplificar.
        matriz[navio1_linha][navio1_coluna + i] = 3;
    }

    // Navio 2 (Vertical)
    int navio2_linha = 4;
    int navio2_coluna = 5;
    for (int i = 0; i < 3; i++) {
        // Assume que as coordenadas estão dentro dos limites
        // e não há sobreposição para simplificar.
        matriz[navio2_linha + i][navio2_coluna] = 3;
    }

    // --- Imprime a Matriz na tela ---
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0; // Fim do programa
}
