#include <stdio.h>
 
int main() {
    //variaveis para armazenar a posicao das peças
    int torre = 0, bispo = 0;
   
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

   
    return 0;
}