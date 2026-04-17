/*#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,Ti[5],Tf[5];
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<5;i++)
    {
         printf("Ti[%d] = ",i+1);
         scanf("%d",&Ti[i]);
    }
    for (i=0;i<5;i++)
    {
        Tf[4-i]=Ti[i];
    }
    printf("l'inverse du tableau inisial:\n");
    for (i=0;i<5;i++)
    {
         printf("Tf[%d] = %d\n",i+1,Tf[i]);
    }

    return 0;
}
*/
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,Ti[5],Tf[5],j;
    printf("enter les valeurs du tableau : \n");
    for (i=0;i<5;i++)
    {
         printf("Ti[%d] = ",i+1);
         scanf("%d",&Ti[i]);
    }
    j=4;
    for (i=0;i<5;i++)
    {
        Tf[i]=Ti[j];
        j--;
    }
    printf("l'inverse du tableau inisial:\n");
    for (i=0;i<5;i++)
    {
         printf("Tf[%d] = %d\n",i+1,Tf[i]);
    }

    return 0;
}
