#include <stdio.h>

void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverTorreRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo\n");
    for(int i = 0; i < 1; i++) {       
        for(int j = 0; j < 1; j++) {  
            moverBispoRecursivo(5);
        }
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentação da Torre: 5 casas para a direita\n");
    moverTorreRecursivo(5);
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentação da Rainha: 8 casas para a esquerda\n");
    moverRainhaRecursivo(8);
    printf("\n");
    
    // Movimentação do Cavalo: 1 vez em L para cima à direita
    printf("Movimentação do Cavalo: 1 vez em L para cima à direita\n");
    // Loop com múltiplas variáveis (v, h) e condição múltipla (v < 2 || h < 1)
    for (int v = 0, h = 0; v < 2 || h < 1; ) {
        if (v < 2) {
            printf("Cima\n");
            v++;
        } else if (h < 1) {
            printf("Direita\n");
            h++;
        }
    }
    return 0;
}