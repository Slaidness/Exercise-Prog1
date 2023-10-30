#include<stdio.h>
void ord_inser(char[],int);
void visualizza_aC(char[],int);
int main()
{
    int n_a;
    char a[]={'p','z','a','r','b','c','m','s','d','n','o','e','g','f','u','w','g','h'};
    int i;
    n_a=18;
    printf("array non ordinato \n\n");
    visualizza_aC(a,n_a);
    ord_inser(a,n_a);
    printf("\n\narray ordinato \n\n");
    visualizza_aC(a,n_a);
}

/* function di ordinamento per inserimento di un array di sizen    */
void ord_inser(char array[],int n){
     int i, j;
     char el_da_ins;
     for(i=1;i<n;i++){
            el_da_ins =array[i];                           //possiamo cancellare elemento da inseire e passare solo array di i
     j=i-1;
     while(j>=0  && el_da_ins < array[j]){                  //Array i<array j
            array[j+1]=array[j]; //array i è la stessa cosa=array j+1
            j--;
     }
     array[j+1]=el_da_ins;
     }
     }

     //I=1 J=0 ELEMENTO I < ELEMENTO J


 void visualizza_aC(char array[], int n){
 int i;
 for (i=0; i<n; i++)
    printf("%c", array[i]);
 }
