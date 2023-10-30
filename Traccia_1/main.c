#include <stdio.h>
#include <stdlib.h>

/*Sviluppare una function C che, dati come parametri di input un array di int e il suo size,
 determina e restituisce come parametro di output il secondo più grande elemento dell’array
  (N.B.: non bisogna seguire l’idea di ordinare prima l’array). */

int secondo_massimo(int array[], int size);

int main()
{

    int array[10], size, i, max2; //0 a 9

    do{
    printf("Inseire size array <=10: ");
    scanf("%d", &size);
    }while(size>10);

    printf("\n");

    for(i=0; i<size; i++){
        printf("\nInserire elemento numero %d dell'array: ", i);
    scanf("%d", &array[i]);
    }

    max2=secondo_massimo(array, size);

       printf("\n");
    printf("Il secondo max e' = %d", max2);

}

int secondo_massimo(int array[], int size)
{
    int max2, i, max;
    max=array[0];
    max2=array[0];

    for(i=1; i<size; i++)
    if(array[i]>max){
            max2=max;
            max=array[i];
    }

    if(array[0]==max){
            max2=array[1];

    for(i=2; i<size; i++){
        if (array[i]>max2)
        max2=array[i];}}




    return max2;
}
