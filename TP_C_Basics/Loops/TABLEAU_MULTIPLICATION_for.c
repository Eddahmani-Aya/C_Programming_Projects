#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m ;
    printf("entrer un nombre entre 1 et 10 :");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        m=n*i;
        printf("n * %d = %d \n",i,m);
    }
    return 0;
}
