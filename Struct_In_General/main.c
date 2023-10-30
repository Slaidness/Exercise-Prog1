#include <stdio.h>
#include <stdlib.h>

  struct s_agenda{
  char nome[20];
  int anni;
  };

  typedef struct s_agenda t_agenda;


 void leggistruct(t_agenda a[])  ;
 void stampastruct(struct s_agenda a[]);

  /*Oppure
    typedef struct {
    int qualcosa1;
    char qualcosa2[32];
    }t_agenda;
   */


int main()
{
    t_agenda alunno[2];
   /* int i;
    for(i=0; i<2; i++){
        printf("Inserire nome alunno numero %d : ",i+1);
        scanf("%s", alunno[i].nome);
        printf("Inserire anni dell'alunno numero %d: ",i+1);
        scanf("%d", &alunno[i].anni);
        }

        printf("\n\n STAMPA \n\n");

    for(i=0; i<2; i++){
        printf("\nAlunno numero %d\n\n", i+1);
        printf("Nome = %s \n", alunno[i].nome);
        printf("Anni = %d \n", alunno[i].anni);

    } */


    printf("_______________________________________________________________________________\n\n");

    leggistruct(alunno);
    stampastruct(alunno);
}



void leggistruct(t_agenda a[]) {


 int i;
    for(i=0; i<2; i++){
        printf("Inserire nome alunno numero %d : ",i+1);
        scanf("%s", a[i].nome);
        printf("Inserire anni dell'alunno numero %d: ",i+1);
        scanf("%d", &a[i].anni);
    }
}

void stampastruct(struct s_agenda a[]){

int i;
    for(i=0; i<2; i++){
        printf("\nAlunno numero %d\n\n", i+1);
        printf("Nome = %s \n", a[i].nome);
        printf("Anni = %d \n", a[i].anni);

    }
}
