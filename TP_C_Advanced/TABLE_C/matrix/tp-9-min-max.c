#include <stdlib.h>
#include <stdio.h>

int main()
{
    int T[3][4],maxL,minL,maxC,minC;
    int i , j;
    for(i=0;i<3;i++)
    {
        printf("entrer la ligne %d de la matrice :\n",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&T[i][j]);
        }
    }

    printf("la matrice M est : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
       {
           printf("%d \t",T[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<3;i++)
    {
        maxL=T[i][0];
        minL=T[i][0];
        for(j=0;j<4;j++)
       {
           if(minL>T[i][j])
                minL=T[i][j];
           if(maxL<T[i][j])
                maxL=T[i][j];
       }
        printf("le min et le max de la ligne %d est : min=%d \t max=%d\n",i+1,minL,maxL);
       printf("\n");
    }
    for(j=0;j<4;j++)
    {
        maxC=T[i][0];
        minC=T[i][0];
        for(i=0;i<3;i++)
       {
           if(minC>T[i][j])
                minC=T[i][j];
           if(maxC<T[i][j])
                maxC=T[i][j];
       }
        printf("le min et le max de colonne %d est : min=%d \t max=%d\n",i+1,minC,maxC);
        printf("\n");
    }

    return 0;
}
