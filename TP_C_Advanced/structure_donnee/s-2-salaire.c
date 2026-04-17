#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct
{
    char nom[10];
    float salaire;
}employer;
float salaire_n(employer a)
{
    float salaire =a.salaire*12;
    return salaire;
}
int main ()
{
    float salaire_annuel;
    employer a;
    printf("entrer le nom de employer 1 :\n");
    scanf("%s",&a.nom);
    printf("entrer le salaire  de employer 1 :\n");
    scanf("%f",&a.salaire);
    salaire_annuel=salaire_n(a);
    printf("le salaire annuel est %f",salaire_annuel);
    return 0;
}
