#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trova_vocali(char stringa[]){

    int n_p, n_v, j, i, cont_v=0, risultato=0;
    char* pezzo;
    char vocali[]="aeiou";
    n_v=5;
    pezzo=strtok(stringa, " ");
    n_p=strlen(pezzo);

    for(i=0; i<n_p; i++){
            for(j=0; j<n_v; j++){
        if(*(pezzo+i)==vocali[j])
        cont_v++;
        }}
        if(cont_v>=5)
            risultato++;


    while((pezzo=strtok(NULL, " "))!=NULL){
        n_p=strlen(pezzo);
        cont_v=0;

         for(i=0; i<n_p; i++){
            for(j=0; j<n_v; j++){
        if(*(pezzo+i)==vocali[j]){
        cont_v++;}}}
        if(cont_v>=5)
            risultato++;
}

return risultato;
}

int main()
{
    char stringa[]="aieoiiiiiiiiiiu ben aeiii cinque vocali aeiou aaeei";
    int vocali;
    vocali=trova_vocali(stringa);
    printf("\nVOCALI: %d", vocali);
}
