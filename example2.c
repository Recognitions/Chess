#include <stdio.h>

int main()
{

    int numero = 0;

    do
    {
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);

        if(numero % 2 ==0){
            printf("%d é par!\n", numero);
        } else {
            printf("%d é impar!\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par! Saindo do programa...\n");

    return 0;
}