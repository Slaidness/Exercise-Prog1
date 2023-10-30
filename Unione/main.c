#include <stdio.h>
#include <stdlib.h>

void unione(int a[], int b[], int c[], int s_a, int s_b, int s_c);
void leggic(int c[], int s_c);
int main()
{
    int s_a, s_b, s_c, i;
    int a[10], b[20], c[30]; //Ipotizziamo che abbiam massimo 10 elementi e b massimo 20 elementi
                             //Quindi implica che c, l'insieme, sia 10+20 ovvero avrà massimo 30 elementi
    printf("Inserire il size del primo vettore/insieme che sia minore di 10= ");
    scanf("%d", &s_a);

    printf("Inserire il size del secondo vettore/insieme che sia minore di 20= ");
    scanf("%d", &s_b);

    s_c=0;
    s_c=s_a+s_b;

    for(i=0; i<s_a; i++){
        printf("Inserire elemento numero %d di A = ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

        for(i=0; i<s_b; i++){
        printf("Inserire elemento numero %d di B = ", i);
        scanf("%d", &b[i]);
    }

    unione(a, b, c, s_a, s_b, s_c);
    printf("\n");
    leggic(c, s_c);
}



void unione(int a[], int b[], int c[], int s_a, int s_b, int s_c){

int i, j, k;
for (i=0; i<s_a; i++){
    c[i]=a[i];

}

j=s_a;

for (i=0; i<s_b; i++){

    c[j]=b[i];
    j++;
}
}

void leggic(int c[], int s_c){

int i;
for(i=0; i<s_c; i++)
    printf("Elemento C numero %d = %d \n", i, c[i]);
}
