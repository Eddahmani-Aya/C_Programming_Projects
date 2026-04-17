#include <stdlib.h>
#include <stdio.h>
int i;
     void table_multiplication (int x)
    {
        printf("La table de multiplication de %d est :\n",x);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",i,x,i*x);
    }
int main ()
{
    int n;
    printf("entrer un nombre positif et non null :");
    scanf("%d",&n);
    table_multiplication(n);
    return 0;
}
