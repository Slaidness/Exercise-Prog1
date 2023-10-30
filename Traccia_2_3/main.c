//TRACCIA2
//Sviluppare una function C che, dato come parametro di input un array di tipo struct punto double x; double y; e il suo size,
//determina e restituisce come parametri di output gli indici dei  due  punti  che  hanno distanza  minimatra  loro.
//I  campi x e y contengono l’ascissa e l’ordinata, rispettivamente, di un punto.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct s_punto{
    double x;
    double y;
};
typedef struct s_punto t_punto;

double distanza(t_punto punto[], int i, int j);


int main()
{

    t_punto punto[10];
    int n_punti, i, j, indice_1, indice_2;
    double dist_minima, temp_dist;



    printf("Inserire quanti punti vuoi avere [min 2] [max 10]: ");
    scanf("%d", &n_punti);


    for(i=0; i<n_punti; i++){
        printf("\nInseire x del punto %d: ", i);
        scanf("%lf",&punto[i].x);
        printf("Inserire y del punto %d: ", i);
        scanf("%lf",&punto[i].y);
                            }


                i=0;
                j=1;
              dist_minima=distanza(&punto, i, j);
              indice_1=0;
              indice_2=1;

                  for (i=0; i<n_punti-1; i++){
                    for (j=i+1; j<n_punti; j++){
                    temp_dist=distanza(punto, i, j);
                            if(temp_dist<dist_minima){
                            dist_minima=temp_dist;
                           indice_1=i;
                           indice_2=j;
                                                     }

                                                }
                                              }

        printf("La distanza minima e': %lf \n", dist_minima);
        printf("INDICE 1: %d \nINDICE 2: %d", indice_1, indice_2);
}


double distanza(t_punto punto[], int i, int j)
{
    double result;
    result=sqrt(pow(punto[j].x - punto[i].x,2) + pow(punto[j].y - punto[i].y, 2));
    return result;
}
