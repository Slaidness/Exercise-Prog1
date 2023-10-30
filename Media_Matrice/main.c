#include <stdio.h>
#include <stdlib.h>
//#define R 3 // 3 Righe
//#define C 3 // 3 Colonne

/* Se definiamo un 3 x 3 allora la matrice sarà cosi:
i è l'indice della riga
j è l indice della colonna
      3x3
      ij C
 R 00 01 02
   10 11 12
   20 21 22               */


void carica_matrice(int C, int R, int m[][3]); //Nelle funzioni per le matrici si passa solamente il numero di colonne
void leggi_matrice(int m[][3], int R, int C);
void calcola_media_matrice(int m[][3], float media[], int R, int C);
void leggi_media_matrice(float media[], int R);

int main()

{
    int R, C;
    R=3;
    C=3;
    int matrice[R][C], i, j;
    float media[R];


        printf("Carica vettore \n");
        carica_matrice(C, R, matrice);

        printf("\nLeggi matrice\n");
        leggi_matrice(matrice, R, C);

        printf("\nCalcolo media matrice in corso...\n");
        calcola_media_matrice(matrice, media, R, C);

        printf("\nLeggi media matrice \n");
        leggi_media_matrice(media, R);




}

void carica_matrice(int C, int R, int m[][3]){

    int i, j;

        for (i=0; i<R; i++){
            for(j=0; j<C; j++){
                printf("Inserire matrice %d %d: ", i, j);
                scanf("%d", &m[i][j]);
            }}
}

void leggi_matrice(int m[][3], int R, int C){

    int i, j;

        for(i=0; i<R; i++){
            for(j=0; j<C; j++){
                printf("Visualizza matrice numero %d %d = %d \n", i, j, m[i][j] );

        }}

}

//Posso richiamarlo anche con float *media... in entrambi caso passo dei parametri e non valori
void calcola_media_matrice(int m[][3], float media[], int R, int C){
    int i, j;
    int somma;


    for (i=0; i<R; i++){
            somma=0;
        for(j=0; j<C; j++){
        somma=somma+m[i][j];
        media[i]=somma/R;
        }
    }
}

void leggi_media_matrice(float media[], int R){
    int i;
    for(i=0; i<R; i++)
    {
        printf("Matrice Riga numero %d ha media: %f\n", i, media[i] );
    }

}

