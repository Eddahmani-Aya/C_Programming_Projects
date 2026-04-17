#include <stdlib.h>
#include <stdio.h>

int main()
{
    int M[3][3],tmp;
    int i , j;
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice :\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }

    printf("la matrice M est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
           printf("%d \t",M[i][j]);
       }
       printf("\n");
    }


    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            tmp=M[i][j];
            M[i][j]=M[j][i];
            M[j][i]=tmp;
        }
    }

    printf("la matrice echanger M est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
           printf("%d \t",M[i][j]);
       }
       printf("\n");
    }
    return 0;
}
