#include <stdio.h>

int main()
{
    float a, b, x;

    printf("Inserire x per verifare se si trova nell'intervallo a b oppure e' maggiore di 100: ");
    scanf("%f", &x);

    printf("\nInserie a: ");
    scanf("%f", &a);

    printf("\nInserire b: ");
    scanf("%f", &b);

    if(x>=a && x<=b  || x >= 100)
        printf("Condizione verificata");
    else
        printf("Condizione non verificata");




    return 0;
}
