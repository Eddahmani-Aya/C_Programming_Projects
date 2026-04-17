#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n ,nbr;
    nbr=0;
    printf("entrer un  nombre entier :");
    scanf("%d", &n);
    do{
        n=n/10;
        nbr++;
    }while(n!=0);
    printf("le nombre totale est : %d",nbr);
    return 0;
}
