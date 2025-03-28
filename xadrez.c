#include <stdio.h>


int main() {
    int i;
    int cima = 0;  // A cima inicial do bispo 
    int direita = 0; // A direita inicial do bispo
    int posicaoTorre = 0; // A posição inicial da torre
    int posicaoRainha = 0; // A posição inicial da rainha
    int baixo  = 0;  // Posição inicial do cavalo 
    int esquerda = 0; // Posição inicial do cavalo 
    
    printf("Movendo para a diagonal superior direita do Bispo\n");
    printf("\n");

    // Mover o bispo 5 casas na diagonal superior direita
    for (i = 0; i < 5; i++) {
        cima++;  // Move o bispo para a cima
        direita++; // Move o bispo para a direita
        printf("Movendo para a posicao: direita %d\n", direita);
        printf("Movendo para a posicao: cima %d\n", cima);
    }
    printf("\n");

    printf("Movendo para a direita da torre\n");
    printf("\n");


    // Mover a torre 5 casas a direita
    for (i = 0; i < 5; i++) {
        posicaoTorre++;  // Move a torre para a direita
        printf("Movendo para a posicao: direita %d\n", posicaoTorre);
    }
    printf("\n");

    printf("Movendo para a esquerda da Rainha\n");
    printf("\n");


    // Mover a rainha 8 casas para a esquerda
    for (i = 0; i < 8; i++) {
        posicaoRainha++;  // Move a rainha para a esquerda
        printf("Movendo para a posicao: esquerda %d\n", posicaoRainha);
    }
    printf("\n");

    printf("Movendo cavalo fara movimentos L\n");
    printf("\n");

    // Usando um for para controlar o número de repetições
    for (i = 0; i < 1; i++) {  // O cavalo fará 3 movimentos "L"
        // Usando um while para mover o cavalo para baixo
        int movimento = 0;
        while (movimento < 2) {
            baixo++;  // Move para baixo
            movimento++;
            printf("Movimento %d - Cavalo: baixo %d\n", movimento, baixo);
        }

        // Depois de mover para baixo, movemos o cavalo para a esquerda
        esquerda++;  // Move para a esquerda
        printf("Movimento %d - Cavalo: esquerda %d\n", movimento + 1, esquerda);
    }

    return 0;
}
