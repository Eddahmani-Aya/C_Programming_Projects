#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n,i,f;
    printf("entrer un nombre positif et non null :");
    scanf("%d",&n);
    f=1;
    if (n==0)
        printf("0! = 1");
    else if (n<0)
        printf("veuillez entrer un nombre positif ");
    else
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
     printf("le factorielle de n est %d",f);

    return 0;
}
