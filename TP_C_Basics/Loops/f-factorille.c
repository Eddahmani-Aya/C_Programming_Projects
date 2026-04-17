#include <stdlib.h>
#include <stdio.h>
int i;
int f;
     int factorielle (int x)
    {
        f=1;
        if (x==0)
            printf("0! = 1");
        else if (x<0)
            printf("veuillez entrer un nombre positif ");
        else
        for(i=1;i<=x;i++)
        {
            f=f*i;
        }
         return f;
    }
int main ()
{
    int n,fa,m;
    printf("entrer un nombre positif et non null :");
    scanf("%d",&n);
    fa=factorielle (n);
    printf("le factorielle de n est %d",fa);
    return 0;
}
