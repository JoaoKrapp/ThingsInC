#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    //Verificar se a key é um numero
    string segundo_argumento = argv[1];
    for (int i = 0; i < strlen(segundo_argumento); i++)
    {
        if (!isdigit(segundo_argumento[i]) || argc != 2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        //Se estiver tudo certo começa o programa
        else
        {
            //Transformar a variavel do segundo_argumento para int
            int chave = atoi(segundo_argumento);
            string resposta = get_string("plaintext:  ");
            printf("ciphertext: ");

            //Checar cada letra do texto
            for (int j = 0; j < strlen(resposta); j++)
            {
                char caracter = resposta[j];
                //Se for uma letra print o negocio criptografado
                if (isalpha(caracter))
                {
                    if(!islower(caracter)){
                        printf("%c", (caracter - 65 + chave) % 26 + 65);
                    }
                    else
                    {
                        printf("%c", (caracter - 97 + chave) % 26 + 97);
                    }
                }
                //Se não for uma letra, ponto interrogação, etc. Print o proprio caracter
                else
                {
                    printf("%c",caracter);
                }
            }
            printf("\n");
        }
    }
}