#include <stdio.h>
#include <stdlib.h>


int somma_array(int a[], int n);
int somma_arrayP(int *a, int n);
int massimo_array(int a[], int n, int *indice);
int minimo_array(int a[], int n);
float media_array(int a[], int n);

int main()
{

  int vet[99], n, i, somma, massimo, minimo, indice_max;
  float media;

    printf("Inserire quantita' del valori da immettere nel vettore: ");
    scanf("%d", &n);
    printf("\n");


    for(i=0; i<n; i++)
    {
        printf("Inserire valore numero %d: ", i+1);
        scanf("%d", &vet[i]);
        printf("\n");
    }

    somma=somma_array(vet, n);
    printf("Somma degli array= %d\n", somma);

    somma=somma_arrayP(&vet[0], n); //Puntatore
    printf("Somma degli array puntatore= %d\n", somma);

    massimo=massimo_array(vet, n, &indice_max);
    printf("Massimo array= %d\n", massimo);
    printf("Indice massimo array= %d\n", indice_max);

    minimo=minimo_array(vet, n);
    printf("Minimo array= %d\n", minimo);

    media=media_array(vet, n);
    printf("Media array= %f\n", media);




}

int somma_array(int a[], int n)
{
    int s=0, i;
    for (i=0; i<n; i++)
        s=s+a[i];
    return s;

}


int somma_arrayP(int *a, int n)
{
    int s=0, i;


    for (i=0; i<n; i++)
        s=s+*(a+i);
return s;

}

int massimo_array(int a[], int n, int *indice)
{
    int max, i;
    max=a[0];
    for(i=0; i<n; i++)
    if(a[i]>max) {
        max=a[i];
        *indice=i;
    }
    return max;

}

int minimo_array(int a[], int n)
{
    int min, i;
    min=a[0];
    for(i=0; i<n; i++)
    if(a[i]<min)
        min=a[i];
    return min;

}


float media_array(int a[], int n)
{
    int i, s;
    float media;
    s=0;
    for (i=0; i<n; i++)
        s=s+a[i];

    media=s/n;
    return media;
}
