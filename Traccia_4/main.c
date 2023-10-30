#include <stdio.h>
#include <stdlib.h>


double somma_max_colonna(double matrice[][10], int j, int righe, int colonne);


int main()
{
    double matrice[10][10], max_colonna, temp_max_colonna;
    int righe, colonne, i, j;

    printf("Inseire numero righe MAX 10: ");
    scanf("%d", &righe);
    printf("Inserire numero colonne MAX 10: ");
    scanf("%d", &colonne);

    for(i=0; i<righe; i++){
            printf("\n");
        for(j=0; j<colonne; j++){
            printf("INSERIRE RIGA %d COLONNA %d: ", i, j);
            scanf("%lf", &matrice[i][j]);
                                }
                          }

                          max_colonna=somma_max_colonna(matrice, 0, righe, colonne);

         for (j=1; j<colonne; j++){
            temp_max_colonna=somma_max_colonna(matrice, j, righe, colonne);
            if(temp_max_colonna>max_colonna){
                max_colonna=temp_max_colonna;
            }
         }
         printf("MAX SOMMA COLONNA: %lf", max_colonna);
}

double somma_max_colonna(double matrice[][10], int j, int righe, int colonne)
{
    int i;
    double result;
    result=0;

    for (i=0; i<righe; i++){
        result=matrice[i][j]+result;
    }
    return result;
}
