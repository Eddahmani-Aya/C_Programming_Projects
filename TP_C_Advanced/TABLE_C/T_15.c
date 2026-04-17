#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float Note[5],sum,m,pro;
    int i;
    sum=0;
    pro=1;
    for (i=0;i<5;i++)
    {
        printf("entrer les elements du tableau %d:",i+1 );
        scanf("%f",&Note[i]);
        sum=sum+Note[i];
        pro=pro*Note[i];
    }
    m=sum/5;
    printf("la moyene est :%d",m );
    printf("produit est :%d",pro);
    return 0;
}
