/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compte,age;
    printf("enter votre age:");
    scanf("%d",&age);
    compte=(age*500)+(age*3);
    printf("le prix totale est :%d",compte);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compte,age,i;
    printf("enter votre age:");
    scanf("%d",&age);
    compte=0;
    for(i=1;i<=age;i++)
         compte=compte+(500+(i*3));
    printf("Le compte d'Anal au %dieme anniversaire est : %d", age,compte);
    return 0;
}
