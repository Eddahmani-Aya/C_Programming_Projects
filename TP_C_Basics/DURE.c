#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,h,m,s,r,r2;
    printf("entrer un nombre entier:");
    scanf("%d",&n);
    h=n/3600;
    r=n%3600;
    m=r/60;
    s=r%60;
    printf("%d heurs %d minutes %d secandes ",h,m,s);
    return 0;
}
