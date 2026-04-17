#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n ,inverse;
    inverse=0;
    printf("entrer un  nombre entier :");
    scanf("%d", &n);
    do{
        inverse= (inverse*10)+(n%10);
        n=n/10;
    }while(n!=0);
    printf("l'inverse de ce nombre  est : %d",inverse);
    return 0;
}
