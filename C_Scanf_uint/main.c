/** c_scanf_uint.c
    INTERI SENZA SEGNO unsigned int [0, 4294967295]
    Il valore di a si perde dopo aver letto b?
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, b;

    printf ("\n INSERISCI UN NUMERO DECIMALE INTERO\n\t"
            "unsigned int (in {0, ..., 4294967295}) -a-: ");
    fflush (stdin); scanf("%u",&a);
    printf ("\nVALORE di a: %u\n", a);

    printf ("\n INSERISCI UN NUMERO DECIMALE INTERO\n\t"
            "unsigned int (in {0, ..., 4294967295}) -b-: ");
    fflush (stdin); scanf("%u",&b);

    printf ("\nVALORE di a: %u\n", a);
    printf ("\nVALORE di b: %u\n", b);

    return 0;
}
