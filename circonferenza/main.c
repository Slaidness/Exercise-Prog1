#include <stdio.h>
#include <stdlib.h>


int main()
{


    /*float raggio,circonferenza;
    const float pi_greco = 3.1415926F;
    printf("inserisci il raggio= ");
    scanf("%f",&raggio);
    circonferenza= raggio * pi_greco * raggio;
    printf("Il risultato e' = %f",circonferenza);*/

    /*
    double raggio,circonferenza;
    const double pi_greco = 3.1415926;
    printf("inserisci il raggio= ");
    scanf("%lf",&raggio);
    circonferenza= raggio * pi_greco * raggio;
    printf("Il risultato e' = %lf",circonferenza);
    */
    /*
    short b_i, b_f;
    b_i=sizeof(int);
    printf("il numero di byte per int %c = %d", CSPECIALE,b_i);
    */
/*
float base,altezza,area;
do {
    printf("\ninserisci la base e poi l'altezza= ");
    scanf("%f%f",&base,&altezza);
    area = base*altezza;
    printf("Il risultato e' = %f",area);
    }while(base!=0 && altezza!=0);
*/
char a,b;
printf("dammi il primo carattere= ");
scanf("%c",&a);
fflush(stdin);
printf("dammi il secondo carattere= ");
scanf("%c",&b);
printf("il primo carattere e' = %c\n",a);
printf("il secondo carattere e' = %c\n",b);
return 0;
}
