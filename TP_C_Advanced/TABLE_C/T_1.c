#ixnclude <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],i;
    for(i=0;i<=9;i++)
        T[i]=0;
    for(i=0;i<=9;i++)
        printf("T[%d] = %d \n",i+1,T[i]);
    return 0;
}
