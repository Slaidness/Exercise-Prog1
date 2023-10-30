#include <stdio.h>

int main()
{
    int i, x[10];



    printf("Inserire 10 interi e verificare se e' pari: \n");
    for(i=0; i<10; i++ )
    {
            scanf("%d", &x[i]);
    }

    printf("Risultati:\n ");

       for(i=0; i<10; i++ )
       {
           printf("\n");
           if (x[i]%2==0)
            printf("%d E' pari", x[i]);
            else
            printf("%d Non e' pari", x[i]);
       }
printf("\n");


    return 0;
}
