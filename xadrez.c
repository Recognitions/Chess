#include <stdio.h>

void loopRecursivo(int n, char *m)
{
    if (n > 0)
    {
        printf("%s\n", m);
        loopRecursivo(n - 1, m);
    }
}

int main()
{

    // Imprime o movimento da torre: 5 esquerda
    int torre = 5;
    char movTorre[] = "Torre: Esquerda";
    loopRecursivo(torre, movTorre);
    printf("\n");

    // Imprime o movimento do bispo: 5 diagonal cima, direita
    int bispo = 5;
    char movBispo[] = "Bispo: Cima, Direita";
    loopRecursivo(bispo, movBispo);
    printf("\n");

    // Imprime o movimento da rainha: 5 esquerda
    int rainha = 5;
    char movRainha[] = "Rainha: Esquerda";
    loopRecursivo(rainha, movRainha);
    printf("\n");

    // Imprime o movimento do cavalo: 2 pra baixo e 1 pra esquerda
    int cavaloX = 1;
    int cavaloZ = 1;
    for (cavaloX = 1; cavaloX <= 1; cavaloX++)
    {
        for (cavaloZ = 1; cavaloZ <= 2; cavaloZ++)
        {
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Direita\n");
    }
    printf("\n");

    return 0;
}