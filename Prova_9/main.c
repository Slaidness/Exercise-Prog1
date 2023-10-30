#include <stdio.h>
#include <stdlib.h>

int cont_are(char* stringa);

int main()
{
    char stringa[]="Andare a pescare per amare la pesca";
    int cont=cont_are(stringa);
    printf("CONT ARE= %d", cont);

}

int cont_are(char* stringa){

    int num_p, cont=0;
    char* pezzo=strtok(stringa, " ");

    num_p=strlen(pezzo);
    if(num_p>=3){
        if(strcmp((pezzo+num_p)-3,"are")==0){
            cont++;
        }}

        while((pezzo=strtok(NULL, " "))!=NULL){
                num_p=strlen(pezzo);
            if(num_p>=3){
        if(strcmp((pezzo+num_p)-3,"are")==0){
            cont++;
        }}} return cont;
}

