#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,s,m;
    printf("entrer les valeures des 5 notes entre 0 et 20 :");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    s=n1+n2+n3+n4+n5;
    m=s/5;
    printf("la somme est :%f",s);
    printf("la moyenne est :%.2f",m);
    return 0;
}
