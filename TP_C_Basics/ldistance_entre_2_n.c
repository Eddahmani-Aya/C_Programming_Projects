#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xa,xb,ya,yb;
    float ab;
    printf("entrer les coordonnee de a ");
    scanf("%d%d",&xa,&ya);
    printf("entrer les coordonnee de b");
    scanf("%d%d",&xb,&yb);
    ab=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
    printf("la distance entre a et b %f:",ab);
    return 0;
}
