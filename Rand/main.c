#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[5];
    int i;
    srand(time(NULL));


    for(i=0;i<5;i++){

    num[i]=rand()%100+1;
    printf("%d ", num[i]);
                    }
}

