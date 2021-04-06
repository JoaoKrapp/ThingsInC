#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string texto = get_string("Text: ");
    int n = strlen(texto);

    int palavras = 1;
    int letras = 0;
    int sentences = 0;

    //Faz um loop e coloca cada letra em aux
    for (int i = 0; i < n; i++)
    {
        char aux = texto[i];
        char espaco = ' ';

        //Contagem de Palavras
        if (aux == espaco)
        {
            palavras++;
        }

        //Contagem de Letras
        if ((((int)aux > 64 && (int)aux <= 90)) || (((int)aux > 96 && (int)aux <= 122)))
        {
            letras++;
        }

        //Contagem de Sentenças
        if ((int)aux == 33 || (int)aux == 46 || (int)aux == 63)
        {
            sentences++;
        }
    }

    //Se não tiver nada palavra = 0
    if (n == 0)
    {
        palavras = 0;
    }

    float L = (letras / (float)palavras) * 100;
    float S = (sentences / (float)palavras) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    /*printf("Letras: %i\n",letras);
    printf("Palavras: %i\n",palavras);
    printf("Sentenças: %i\n",sentences);
    printf("Index: %i\n",index);*/


    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}