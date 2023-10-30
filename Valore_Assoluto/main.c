#include <stdio.h>

int main()
{
    float x, val_assoluto;
    printf("Inserire un numero: ");
    scanf("%f", &x);

    if (x >= 0.0)
    {
        val_assoluto = x;
    }
    else
    {
        val_assoluto =-x;
    }
    printf("\n valore assoluto di %f = %f", x, val_assoluto);
}
