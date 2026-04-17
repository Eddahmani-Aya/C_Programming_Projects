#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n,i,s;
    printf("entrer un nombre positif et non null :");
    scanf("%d",&n);
    s=1;
    if (n==0)
        printf("0! = 1");
    else if (n<0)
        printf("veuillez entrer un nombre positif ");
    else
        for(i=1;i<=n;i++)
        {
            s=s*i;
        }
     printf("le factorielle de n est %d",s);

    return 0;
}
