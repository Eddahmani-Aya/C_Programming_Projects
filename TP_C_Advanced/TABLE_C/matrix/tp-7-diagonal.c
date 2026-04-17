#include <stdlib.h>
#include <stdio.h>

int main()
{
    int M[4][4],sum;
    int i , j;
    for(i=0;i<4;i++)
    {
                printf("entrer la ligne %d de la matrice :\n",i+1);

       for(j=0;j<4;j++)
       {
           scanf("%d",&M[i][j]);
       }
    }
    sum=0;
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
        if(i==j)
            sum=sum+M[i][j];
       }
    }
        printf("la matrice M est : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
       {
           printf("%d \t",M[i][j]);
       }
       printf("\n");
    }
    printf("la somme de la diagonal principale est :%d",sum);
    return 0;
}
