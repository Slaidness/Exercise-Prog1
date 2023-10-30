#include <stdio.h>
#include "Lib.h"





int main ()
{
    float raggio, circonferenza, area;
    printf("Inserire il raggio: ");
    scanf("%f", &raggio);

    circonferenza=calcolo_circonferenza(raggio);
    area=calcolo_area(raggio);

      //circonferenza==risultato, risultato ritorna
    printf ("Circonferenza=%f\n", circonferenza);
     printf ("Area=%.2f\n", area);

}




