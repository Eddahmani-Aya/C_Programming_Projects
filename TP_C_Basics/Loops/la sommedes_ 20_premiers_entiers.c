#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s ;
    s=0;
    for(i=1;i<=20;i++)
    {
        s=s+i;
    }
    printf("la somme des 20 prmiers entiers positifs est : %d",s);
    return 0;
}
