#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Inserire la prima variabile= ");
    scanf("%d", &a);
    printf("Inserire la seconda  variabile= ");
    scanf("%d", &b);

    printf("\n");

    c=a+b;
    printf("Addizione= %d\n",c );
    c=a*b;
    printf("Moltiplicazione= %d\n",c );
    c=a-b;
    printf("Sottrazione= %d\n",c );
    c=a/b;
    printf("Divisione= %d\n",c );



return 0;
}
