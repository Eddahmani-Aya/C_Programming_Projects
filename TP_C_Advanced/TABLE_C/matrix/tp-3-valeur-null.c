#include <stdlib.h>
#include <stdio.h>

int main()
{
    int T[4][4];
    int i , j;
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       T[i][j]=0;
    }
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
        printf("%d \t",T[i][j]);
       }
       printf("\n");
    }
    return 0;
}
