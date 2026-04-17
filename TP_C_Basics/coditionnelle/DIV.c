#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r;
    float d;
    printf("entrer le nombre de divisente:");
    scanf("%d",&a);
    printf("entrer le nombre de diviseur:");
    scanf("%d",&b);

    if(b!=0)
    {
        d=(float)a/b;
        printf("la solution est : %f",d);
    }
    else
    {
      printf("erreure");
    }
 return 0;
}
