#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,T[5],max,min;
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<5;i++)
    {
         printf("T[%d] = ",i+1);
         scanf("%d",&T[i]);
    }
    min=T[0];
    max=T[0];
    for (i=1;i<5;i++)
    {
        if(min>T[i])
        {
            min=T[i];
        }

        if(max<T[i])
        {
             max=T[i];
        }
    }

    printf("le minimum est :%d\n",min);
    printf("le maximum est :%d",max);
    return 0;
}
