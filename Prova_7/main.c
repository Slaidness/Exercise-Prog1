#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_prodotto{
    char nome[25];
    int codice;
    double prezzo;
};
typedef struct s_prodotto t_prodotto;

int s_uguali(t_prodotto prodotto_1, t_prodotto prodotto_2);

int main()
{
    t_prodotto prodotto_1, prodotto_2;
    strcpy(prodotto_1.nome,"Alberto");
    prodotto_1.codice=100;
    prodotto_1.prezzo=2.000;

    strcpy(prodotto_2.nome,"Alberto");
    prodotto_2.codice=100;
    prodotto_2.prezzo=2.000;

    int uguali;
    printf("%s", prodotto_1.nome);

    uguali=s_uguali(prodotto_1, prodotto_2);


    printf("1 = UGUALI \n 0 = NON UGUALI \n");
    printf("Risposta: %d", uguali);

}

int s_uguali(t_prodotto prodotto_1, t_prodotto prodotto_2){


    if( (strcmp(prodotto_1.nome, prodotto_2.nome) == 0) && (prodotto_1.codice==prodotto_2.codice) && (prodotto_1.prezzo == prodotto_2.prezzo))
        return 1;
        else
        return 0;

}
