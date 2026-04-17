#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[3],v[3],i,p;
    printf("donner les valeurs de 1er vecteur :");
    for(i=0;i<3;i++)
    {
        scanf("%d",&u[i]);

    }
    printf("donner les valeurs de 2eme vecteur :");
    for(i=0;i<3;i++)
    {
        scanf("%d",&v[i]);

    }
    p=0;
    for(i=0;i<3;i++)
    {
        p=p+(v[i]*u[i]);
    }
    printf("le produit scalaire est :%d",p);
    return 0 ;
}
