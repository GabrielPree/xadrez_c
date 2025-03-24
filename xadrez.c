#include <stdio.h>

//função recursiva para movimentação da torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        moverTorre(casas - 1);
    }
}

//função recursiva para movimentação do bispo
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    //variaveis para armazenar a posicao das peças
    int torre = 5, bispo = 5, rainha = 8, cavalo = 1;
    

    printf("Torre move-se para:\n");
    moverTorre(torre);
    printf("\nBispo move-se para:\n");
    moverBispo(bispo);
    printf("\nRainha move-se para:\n");
    moverRainha(rainha);

    //movimentação do cavalo
    printf("\nCavalo move-se para:\n");
    while(cavalo--) {
        for(int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    return 0;
}