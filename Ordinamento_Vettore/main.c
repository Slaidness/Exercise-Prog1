#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n;

     printf("Inserire quantita' del valori da immettere nel vettore: ");
    scanf("%d", &n);
    printf("\n");

   int vet[99];





    for(i=0; i<n; i++)
    {
        printf("Inserire valore numero %d: ", i+1);
        scanf("%d", &vet[i]);
        printf("\n");

    }

    printf("Ordinamento vettore in corso...\n\n");



    int temp;

        for(i=0; i<n-1; i++)
    {

       {
           for(j=i+1; j<n; j++)
            if (vet[i]>vet[j])
           {
               temp = vet[i];
               vet[i] = vet[j];
               vet[j] = temp;
           }

       }

    }

   for(i=0; i<n; i++)
    {
        printf("Valore numero %d = %d \n", i+1, vet[i]);
    }



}
