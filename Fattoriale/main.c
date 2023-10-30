#include <stdio.h>
#include <stdlib.h>

int fattoriale_i(int n);
float fattoriale_f(int n);

int main()
{
    int n, f_int;
    float f_float;
    printf("Valore di n fattoriale_i      fattoriale_f\n");
    for(n=1; n<=14; n++)
    {
        f_int=fattoriale_i(n);
        f_float=fattoriale_f(n);
        printf("%10d %20d %20.0f \n", n, f_int, f_float);

    }
}

int fattoriale_i(int n)
{
    int i, prodotto;
    prodotto=1;
    for (i=1; i<=n; i++)
    {
        prodotto=prodotto*i;
    }
    return prodotto;
}

float fattoriale_f(int n)
{
    float i, prodotto;
    prodotto=1;
    for (i=1; i<=n; i++)
    {
        prodotto=prodotto*i;
    }
    return prodotto;
}
