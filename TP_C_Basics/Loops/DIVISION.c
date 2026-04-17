#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("entrer un nombre positif non null");
    scanf("%d",&n);
    printf("les diviseurs :\n");
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
         printf("%d\n",i);

        }
    }
    return 0;
}
