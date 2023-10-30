#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void leggi_stringa(char stringa[], char stringa2[]);

int main()
{

    //char c; scanf("%c", &c); printf("\nStringa= %c", c);
    char stringa1[10], stringa2[5];
    char stringa12[15];
    int l_s;

    printf("Inserire stringa massimo 10 elementi: ");
    scanf("%s", stringa1);
    printf("Inserire stringa massimo 5 elementi: ");
    scanf("%s", stringa2);
    printf("\n");

    leggi_stringa(stringa1, stringa2);


    strcpy(stringa12,stringa1);
    printf("STRCPY Stringa 12 copia stringa 1 = %s \n", stringa12);

    //strcat(stringa12,stringa2);
    //printf("STRCAT Stringa 12 viene unita a stringa 2 = %s \n", stringa12);

    strncat(stringa12,stringa2, 2);
    printf("STRNCAT Stringa 12 viente unita ai primi 2 elementi di stringa 12 = %s \n", stringa12);

    l_s=strlen(stringa12);
    printf("STRLEN Lunghezza stringa 12 = %d \n", l_s);

   /* if(strcmp(stringa1, stringa2)==0)
        printf("Stringa 1 e stringa 2 sono uguali con il valore di 0 \n");
        else
        printf("Stringa 1 e stringa 2 non sono uguali con il valore di 1 \n");
*/
int valore;
        valore=strncmp(stringa1, stringa2, 2);
        printf("============ %d", valore);

}


void leggi_stringa(char stringa[], char stringa2[])
{
    printf("La striga letta e': %s \n", stringa);
    printf("La striga letta e': %s \n", stringa2);

}
