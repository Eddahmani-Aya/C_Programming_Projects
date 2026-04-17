#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A[3][4],B[4][2],C[3][2];
    int i , j,k,pro;
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice A:\n",i+1);
       for(k=0;k<4;k++)
       {
           scanf("%d",&A[i][k]);
       }
    }

    for(k=0;k<4;k++)
    {
        printf("entrer la ligne %d de la matrice B:\n",k+1);
       for(j=0;j<2;j++)
       {
           scanf("%d",&B[k][j]);
       }
    }

    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
       {
           pro=0;
            for(k=0;k<4;k++)
            {
               pro=pro+ A [i] [k] * B [k] [j] ;
            }
            C[i][j]=pro;
        }
    }

    printf("la matrice A est : \n");
    for(i=0;i<3;i++)
    {
        for(k=0;k<4;k++)
       {
           printf("%d \t",A[i][k]);
       }
       printf("\n");
    }
    printf("la matrice B est : \n");
    for(k=0;k<4;k++)
    {
        for(j=0;j<2;j++)
       {
           printf("%d \t",B[k][j]);
       }
       printf("\n");
    }
    printf("la matrice C est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
       {
           printf("%d \t",C[i][j]);
       }
       printf("\n");
    }
    return 0;
}
