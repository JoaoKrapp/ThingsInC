#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura;
    do
    {
        altura = get_int("Height: ");
    }
    while (altura <= 0 || altura > 8);

    for (int linha = 0; linha < altura; linha++)
    {
        for (int espaco = altura - linha; espaco > 1; espaco--)
        {
            printf(" ");
        }
        for (int jogo_da_velha = 0; jogo_da_velha < linha + 1; jogo_da_velha++)
        {
            printf("#");
        }
        printf("  ");
        for (int jogo_da_velha = 0; jogo_da_velha < linha + 1; jogo_da_velha++)
        {
            printf("#");
        }
        printf("\n");
    }
}