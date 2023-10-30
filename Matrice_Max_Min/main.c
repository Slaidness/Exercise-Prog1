#include <stdio.h>
#include <stdlib.h>

//int massimmo_matrice(int a[][100], int r, int c);
int massimo_p(int *pmatrice, int ncol, int r, int c);

int main()
{
    int r, c, i, j, matrice[100][100], massimo;


    printf("Inserire numero righe (<100): ");
    scanf("%d", &r);
    printf("Inserire numero collone (<100): ");
    scanf("%d", &c);



    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
                printf("Matrice numero %d %d = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("\n\nProva lettura \n");

        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("Matrice numero %d %d = %d \n", i, j, matrice[i][j]);

        }
    }

     //massimo=massimmo_matrice(matrice, r, c);
     massimo=massimo_p(&matrice[0][0], 100, r, c);
     printf("\nMassimo matrice = %d", massimo);

}

/*int massimmo_matrice(int a[][100], int r, int c)
{
    int i, j;
    int max;
    max=0;
            for(i=0; i<r; i++){
             for(j=0; j<c; j++){

            if(max<a[i][j])
                max=a[i][j];
                                }
                              }
return max;
}
*/

int massimo_p(int *pmatrice, int ncol, int r, int c){
   int max, i, j;

   max=*pmatrice;

            for(i=0; i<r; i++)
             for(j=0; j<c; j++)
                if(*(pmatrice+ncol*i+j)>max)
                max=*(pmatrice+ncol*i+j);


                                return max;
}
