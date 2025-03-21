#include <stdio.h>
 
int main() {
    //variaveis para armazenar a posicao das peças
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1;
   
    //movimentação da torre
    printf("Torre move-se para:\n");
    while (torre < 5) {
        printf("Direita\n");
       torre++;
    }
   
    //movimentação do bispo
    printf("\nBispo move-se para:\n");
    do{
        printf("Cima, Direita\n");
        bispo++;
    } while (bispo < 5);

    //movimentação da rainha
    printf("\nRainha move-se para:\n");
    for (rainha; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }

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