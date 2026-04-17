#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A[3][3],B[3][3],C[3][3];
    int i , j;
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice A:\n",i+1);
       for(j=0;j<3;j++)
       {
           scanf("%d",&A[i][j]);
       }
    }
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice B:\n",i+1);
       for(j=0;j<3;j++)
       {
           scanf("%d",&B[i][j]);
       }
    }
        for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           C[i][j]=A[i][j]+B[i][j];
       }
    }

    printf("la matrice A est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
           printf("%d \t",A[i][j]);
       }
       printf("\n");
    }
    printf("la matrice B est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
           printf("%d \t",B[i][j]);
       }
       printf("\n");
    }
    printf("la matrice C est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
           printf("%d \t",C[i][j]);
       }
       printf("\n");
    }
    return 0;
}
