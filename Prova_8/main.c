#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char stringa[]="Una tante due belle parole";
    int num=0;
    int cont_tre=0;
    char* temp;

    temp=strtok(stringa, " ");
    if(strlen(temp)==3)
        cont_tre++;

    while((temp=strtok(NULL, " "))!=NULL){

        num=strlen(temp);
        if(num==3)
            cont_tre++;
    }
    printf("CONT TRE: %d", cont_tre);






}






