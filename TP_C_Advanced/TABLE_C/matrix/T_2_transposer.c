#include <stdlib.h>
#include <stdio.h>

int main()
{
    int T[6][4];
    int A[4][6];
    int i , j;
    for(i=0;i<4;i++)
    {
       for(j=0;j<6;j++)
       {
          printf("T[l %d][c %d] = ",i+1,j+1);
          scanf("%d",&T[i][j]);
       }
    }
    for(i=0;i<6;i++)
    {
       for(j=0;j<4;j++)
       {
           A[j][i]=T[i][j];
       }
       printf("\n");
    }
        for(i=0;i<6;i++)
    {
       for(j=0;j<4;j++)
       {
           printf("T[%d}[%d]= %d \t",i+1 ,j+1, A[i][j]);
       }
       printf("\n");
    }
    return 0;
}
