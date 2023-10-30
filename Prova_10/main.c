#include <stdio.h>
#include <stdlib.h>

int cont_ae(char* stringa);

int main()
{
    char stringa[]="Andare per amare altrove ascoli dema";
    int cont;
    cont = cont_ae(stringa);
    printf("\nCONT A E = %d", cont);

}

int cont_ae(char* stringa){
    char* pezzo;
    int n_p, cont=0;

    pezzo=strtok(stringa, " ");
    n_p=strlen(pezzo);

    //iniziale=*(pezzo);
    //finale=*(pezzo+n_p-1);

    if(*(pezzo)=='A' || *(pezzo) =='a'){
            if(*(pezzo+n_p-1)=='E' || *(pezzo+n_p-1)=='e'){
            cont++;
    }}

    while((pezzo=strtok(NULL, " "))!=NULL){
          n_p=strlen(pezzo);
              if(*(pezzo)=='A' || *(pezzo) =='a'){
            if(*(pezzo+n_p-1)=='E' || *(pezzo+n_p-1)=='e'){
            cont++;
    }}}return cont;

}
