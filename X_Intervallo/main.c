#include <stdio.h>


int main()
{
    float x,a,b;
    int appartiene;
    printf("Inserire x, a, b \n");
    scanf("%f %f %f", &x, &a, &b);
    if (x >= a && x <= b)
        appartiene = 1;
    else
        appartiene = 0;
    printf("\n %d \n", appartiene);
}
