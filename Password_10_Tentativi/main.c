#include <stdio.h>
int main()
{
    int i, x[10];
    int const pass=43799;




    printf("Hai 10 tentativi per indovinare la password \n");
    for(i=0; i<10; i++ )
    {
        printf("Tentativo numero %d \n\n Inserire password: ", ++i);
            scanf("%d", &x[i]);

            if(x[i]==pass){
                printf("Hai vinto!\n");
               i=11;
                }
                else
                printf("Riprova!\n\n");
    }



    return 0;
}

