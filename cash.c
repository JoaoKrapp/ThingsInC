#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coins = 0;
    float dolar;
    //Pedir o valor
    do
    {
        dolar = get_float("Change owed: ");
    }while(dolar < 0);

    int centavos = round(dolar *100);
    //printf("%i\n",centavos);
    while(centavos > 0)
    {
        if(centavos >= 25)
        {
            centavos = centavos - 25;
            //printf("%i\n",centavos);
            coins++;
        }
        else if(centavos >= 10)
        {
            centavos = centavos - 10;
            //printf("%i\n",centavos);
            coins++;
        }
        else if(centavos >= 5)
        {
            centavos = centavos - 5;
            //printf("%i\n",centavos);
            coins++;
        }
        else if(centavos >= 1)
        {
            centavos = centavos - 1;
            //printf("%i\n",centavos);
            coins++;
        }
    }
    printf("%i\n",coins);
}