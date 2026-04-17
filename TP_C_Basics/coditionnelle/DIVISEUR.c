#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n,i;
    do{
    printf("entrer un nombre positif et non null :");
    scanf("%d",&n);
    }
    while(n<=0);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d est in diviseur de %d  \n",i,n);

    }
    return 0;
}
