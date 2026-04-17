#include <stdlib.h>
#include <stdio.h>

int main()
{
    int T[3][4];
    int Tr[4][3];
    int i , j;
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice M:\n",i+1);
       for(j=0;j<4;j++)
       {
           scanf("%d",&T[i][j]);
       }
    }
    printf("la matrice M est:\n");

    for(i=0;i<3;i++)
    {
       for(j=0;j<4;j++)
       {
           printf("%d \t",T[i][j]);
       }
       printf("\n");
    }
    for(j=0;j<4;j++)
    {
       for(i=0;i<3;i++)
       {
           Tr[j][i]=T[i][j];
       }
    }
    printf("la transpoee de M est:\n");

    for(j=0;j<4;j++)
    {
       for(i=0;i<3;i++)
       {
           printf("%d \t",Tr[j][i]);
       }
       printf("\n");
    }
    return 0;
}
