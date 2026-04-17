#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,T[5],j,tmp;
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<5;i++)
    {
         printf("T[%d] = ",i+1);
         scanf("%d",&T[i]);
    }
    printf("le tri de tableau T \n");
    for (i=0;i<5;i++)
    {
        for (j=i;j<5;j++)
    {
            if(T[i]>T[j+1])
            {
               tmp=T[i];
               T[i]=T[j+1];
               T[j+1]=tmp;
            }
    }
    }
     for (i=0;i<5;i++)
    {
         printf("T[%d] = %d\n",i+1,T[i]);
    }


    return 0;
}
