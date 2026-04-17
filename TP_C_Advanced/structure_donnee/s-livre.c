#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct
{
    char titre[10];
    char auteur[10];
    float price;
}livre;
float prix(int a,float b)
{
    return a*b;
}
int main ()
{
    int Q;
    livre a;
    printf("entrer le titre :\n");
    scanf("%s",a.titre);
    printf("entrer le  nom de l'auteur :\n");
    scanf("%s",a.auteur);
    printf("entrer le  prix du livre :\n");
    scanf("%f",&a.price);
    printf( "le titre du livre est: %s\n",a.titre);
    printf(" le  nom de l'auteur est : %s\n",a.auteur);
    printf(" le  prix du livre est : %.2f\n",a.price);
    printf("entrer la quantite :\n");
    scanf("%d",&Q);
    printf("le prix totale est %.2f:\n",prix(Q , a.price))  ;
    return 0;
}
