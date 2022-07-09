#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float n;
    do
    {
        n = get_float("Troco em moedas R$: ");
    }
    while (n <= 0);
    int q = round(n * 100);
    int moedas = 0;
    while (q >= 25)
    {
        q-=25;
        moedas++;
    }
    while (q >= 10)
    {
        q-=10;
        moedas++;
    }
    while (q >= 5)
    {
        q-=5;
        moedas++;
    }
    while (q >= 1)
    {
        q-=1;
        moedas++;
    }
    printf("%i\n", moedas);
}
