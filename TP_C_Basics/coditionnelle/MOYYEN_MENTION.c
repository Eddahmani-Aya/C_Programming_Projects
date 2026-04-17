#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,s,m;
    printf("entre la valeur de ces 3 notes :");
    scanf("%d%d%d",&n1,&n2,&n3);
    s=n1+n2+n3;
    m=s/3;
    printf("la moyenne est:%d\n",m);
    if (m>=16)
        printf("la mention est tres bien");
    else if (m>=14)
        printf("la mention est bien");
    else if (m>=12)
        printf("la mention est assez bien");
    else if (m>=10)
        printf("la mention est passable");
    else
        printf("la mention est insuffisant");
    return 0;
}
