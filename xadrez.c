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

    return 0;
}