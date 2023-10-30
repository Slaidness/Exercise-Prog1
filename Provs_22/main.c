#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int dadi(int vincitore);
int main()
{
    int vincitore;
    vincitore=dadi(vincitore);
    printf("VINCITORE: %d", vincitore);

}

int dadi(int vincitore){

    srand(time(NULL));
    int dado_1, dado_2, i, vittorie_1=0, vittorie_2=0;

    for(i=0; i<10; i++){
        dado_1=5+rand()%11;
        dado_2=5+rand()%11;

        printf("DADO 1= %d \nDADO 2= %d\n\n", dado_1, dado_2);

        if(dado_1>dado_2)
            vittorie_1++;
        else if(dado_1<dado_2)
            vittorie_2++;
        else if(dado_1=dado_2){
            vittorie_1++;
            vittorie_2++;
        }}

        printf("VITTORIE NUM 1: %d", vittorie_1);
        printf("VITTORIE NUM 2: %d", vittorie_2);

        if(vittorie_1>vittorie_2)
            return 1;
        else if(vittorie_2>vittorie_1)
            return 2;
        else if(vittorie_1=vittorie_2)
            return 0;
}
