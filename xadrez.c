#include <stdio.h>

int main()
{

    // Imprime o movimento da torre: 5 esquerda
    int torre = 1;
    while (torre <= 5)
    {
        printf("Torre: Esquerda\n");
        torre++;
    }
    printf("\n");

    // Imprime o movimento do bispo: 5 diagonal cima, direita
    int bispo = 1;
    do
    {
        printf("Bispo: Cima, Direita\n");
        bispo++;
    } while (bispo <= 5);
    printf("\n");

    // Imprime o movimento da rainha: 5 esquerda
    int rainha = 1;
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf("Rainha: Esquerda\n");
    }
    printf("\n");

    // Imprime o movimento do cavalo: 2 pra baixo e 1 pra esquerda
    int cavaloX = 1;
    int cavaloZ = 1;
    for (cavaloX = 1; cavaloX <= 1; cavaloX++)
    {
        for (cavaloZ = 1; cavaloZ <= 2; cavaloZ++)
        {
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Esquerda\n");
    }
    printf("\n");

    return 0;
}