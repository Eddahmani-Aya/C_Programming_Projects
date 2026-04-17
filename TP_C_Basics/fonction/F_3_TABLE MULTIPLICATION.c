#include <stdlib.h>
#include <stdio.h>
void T_multi(int x)
{
    int i;
    printf("La table de multiplication de %d est :\n",x);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",i,x,i*x);
}

int main ()
{
    int n;
    printf("entrer la valeurs de n :\n");
    scanf("%d",&n);
    T_multi(n);
    return 0;
}
