#include <stdlib.h>
#include <stdio.h>

int main()
{
    int T[3][6];
    int i , j;
    for(i=0;i<3;i++)
    {
       for(j=0;j<6;j++)
       {
           T[i][j]=0;
       }
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<6;j++)
       {
           printf("%d\t",T[i][j]);
       }
       printf("\n");
    }
    return 0;
}
