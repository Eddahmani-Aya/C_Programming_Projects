#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,T[4],j,n,d;
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<3;i++)
    {
         printf("T[%d] = ",i+1);
         scanf("%d",&T[i]);
    }
    printf("enter la valeur :\n");
    scanf("%d",&n);
    printf("enter  l'indice :\n");
    scanf("%d",&d);
    for (i=2;i<d-1;i++)
    {
         T[i]=T[i-1];
    }
    T[d-1]=n;
    for (i=0;i<3;i++)
    {
         printf("T[%d] = %d\n",i+1,T[i]);
    }


    return 0;
}
