#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,T[5],n,x;
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<5;i++)
    {
         printf("T[%d] = ",i+1);
         scanf("%d",&T[i]);
    }
    printf("enter les valeurs un nombre : \n");
    scanf("%d",&n);
    x=0;
    for (i=0;i<5;i++)
    {
        if(n==T[i])
            x++;
    }
        if(x==0)
            printf("%d ne ce trouve pas dans le tableau :",n);
        else
            printf("%d ce trouve dans le tableau \n",n);
     printf("Le nombre de repitition de %d est:%d",n,x);
    return 0;
}
