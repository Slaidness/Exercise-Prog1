#include<stdio.h>

intsomma_naturali(int n);
void main()

{
    int sn, n;
    printf(“inserire il valore di n: ”);
    scanf("%d",&n);
    sn=somma_naturali(n);
    printf("somma dei primi %d naturali: %d\n", n, sn);
    /* verifica via formula di Gauss              */
    printf("verifica via Gauss: %d\n", n*(n+1)/2);
    }


    /* function somma dei primi n numeri naturali */
    int somma_naturali(int n)
    {
        ints, i;
        s =0;
        for (i = 1; i <= n; i++)
            s =s + i;
        returns s;
        }
