#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("entrer la valeur de la temperature de l'eau:");
    scanf("%d",&n);

    if(n<0)
    {
     printf("l'etat de l'eau est glace ");
    }
    else if(n<100)
      printf("l'etat de l'eau est liquide");
    else
      printf("l'etat de l'eau est vapeure");
    return 0;
}
