#include <stdio.h>
#include <stdlib.h>

int main()
{
    int volume,r;
    int pi=3.14;
    printf("entrer le valeure de rayon de sphere :");
    scanf("%d",&r);
    volume=(4*pi*r*3)/3;
    printf("volume de ce sphere est :%d",volume);
    return 0;
}
