#include <stdio.h>

// Função recursiva para movimentação da torre
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("direita\n");   // Imprime "direita" para cada movimento
        moverTorre(casas - 1); // Chama a função recursivamente para continuar o movimento
    }
}

// Função iterativa para movimentação do bispo
void moverBispo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        // Loop externo representa o movimento vertical
        for (int j = 0; j < 1; j++)
        {
            // Loop interno representa o movimento horizontal
            printf("Cima, Direita\n"); // Imprime "Cima, Direita" para cada movimento
        }
    }
}

// Função recursiva para movimentação da rainha
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");   // Imprime "Esquerda" para cada movimento
        moverRainha(casas - 1); // Chama a função recursivamente para continuar o movimento
    }
}

// Função iterativa para movimentação do cavalo
void moverCavalo(int casas)
{
    printf("\nCavalo move-se para:\n");

    for (int i = 0; i < casas; i++)
    {
        // Loop para movimento vertical (duas casas para cima)
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
            if (j == 1)
            {
                break; // Após a segunda casa para cima, sai do loop
            }
        }
        // Loop para movimento horizontal (uma casa para a direita)
        for (int k = 0; k < 1; k++)
        {
            printf("Direita\n");
            break;
        }
    }
}

int main()
{
    // Variáveis que armazenam o número de casas que cada peça deve se mover
    int torre = 5, bispo = 5, rainha = 8, cavalo = 1;

    // Chamadas das funções para cada peça de xadrez, imprimindo seus movimentos
    printf("Movimentos das peças de xadrez:\n");
    // movimento da torre
    printf("\nTorre move-se para:\n");
    moverTorre(torre);
    // movimento do bispo
    printf("\nBispo move-se para:\n");
    moverBispo(bispo);
    // movimento da rainha
    printf("\nRainha move-se para:\n");
    moverRainha(rainha);
    // movimento do cavalo
    moverCavalo(cavalo);

    return 0;
}