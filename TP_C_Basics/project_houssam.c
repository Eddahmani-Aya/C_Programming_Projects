#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,c;
    const int c1=3000 ,c2=2200  , c3=4000, c4=5000  , c5=5600  , c6=6300 ;
    printf("la categorie 1 : 7eme generation\n");
    printf("la categorie 2 : 8eme generation\n");
    printf("la categorie 3 : 10eme generation\n");
    printf("la categorie 4 : 12eme generation\n");
    printf("la categorie 5 : 13eme generation\n");
    printf("la categorie 6 : 14eme generation\n");
    printf("veuillez entrer la quantite :");
    scanf("%d",&n);
    printf("veuillez entrer la categorie de pc :");
    scanf("%d",&c);
        if (c==1)
            p=c1*n;
        else if (c==2)
            p=c2*n;
        else if (c==3)
            p=c3*n;
        else if (c==4)
            p=c4*n;
        else if (c==5)
            p=c5*n;
        else
            p=c6*n;
        printf("le prix est :%d",p);
        printf("dh");

    return 0;
}
