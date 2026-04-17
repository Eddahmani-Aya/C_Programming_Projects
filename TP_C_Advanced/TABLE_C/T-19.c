#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float T[5],moy,sum;
    int i ,c;
    printf("enter les notes de ces etudiants : \n");
    for (i=0;i<5;i++)
    {
         printf("etudanat %d : ",i+1);
         scanf("%f",&T[i]);
    }
    sum=0;
    for (i=0;i<5;i++)
    {
        sum=sum+T[i];
    }
    moy=sum/5;
    printf("la moyenne de class est:")
    for (i=0;i<5;i++)
    {
        if(T[i]>moy)
            printf("la note superieure a la moynne \n",moy);
    }
    return 0;
}
