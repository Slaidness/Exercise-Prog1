#include <stdio.h>
#include <stdlib.h>

//void scambioP(float *var1, float *var2);
int scambio(float var1, float var2);
//I valori, non come quando passiamo le matrici, si scambiano con i puntatori
int main()
{

    float a,b;

    printf("Inserire due valori\n\n");

    printf("Inserire A= ");
    scanf("%f",&a);
    printf("\nInserire B= ");
    scanf("%f",&b);


    printf("\n\n Scambio valori in corso\n\n");
    //scambioP(&a, &b);
    scambio(&a, &b);
    printf("A= %.2f \n\nB= %.2f", a, b);






}

/*void scambioP (float *var1, float *var2)
{
    float temp;
    temp=*var1;
    *var1=*var2;
    *var2=temp;

}*/

int scambio (float var1, float var2)
{
    float temp;
    temp=var1;
    var1=var2;
    var2=temp;

}



