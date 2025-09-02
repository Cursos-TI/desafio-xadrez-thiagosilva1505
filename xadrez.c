#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //mover o Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo\n");
    for(int b=1; b<=5; b++) {
        printf("Cima direita\n");
    }

    printf("Movimentação da Torre: 5 casas para a direita\n");
    int t = 1;
    while (t <= 5) {
        printf("Direita\n");
        t++;
    }
    
    printf("Movimentação da Rainha: 8 casas para a esquerda\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);
    
    printf("Movimentação do Cavalo\n");
    int j = 0;
    for (int i = 0; i < 1; i++) {
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
