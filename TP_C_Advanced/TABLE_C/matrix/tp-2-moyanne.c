#include <stdlib.h>
#include <stdio.h>

int main()
{
    float T[4][3],s,m;
    int i , j;
    for(i=0;i<4;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("l'etudiant %d dans le module %d : ",i+1,j+1);
           scanf("%f",&T[i][j]);
       }
    }
    for(i=0;i<4;i++)
    {
        s=0;
       for(j=0;j<3;j++)
       {
           s=s+T[i][j];
       }
       m=s/3;
       printf("la moyenne de l'etudiant %d est %.2f",i+1,m);
    }
    return 0;
}
