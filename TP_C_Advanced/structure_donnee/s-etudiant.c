#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct{
    char nom[10];
    int  age;
    float moyenne;
}etudiant;
void statut (float moyenne)
{
     if (moyenne>=10)
        printf("ce etudiant admis .\n");
     else
        printf("ce etudiant n'admis pas .\n");
}


int main ()
{
    etudiant A;
    printf("entrer le nom   :");
    scanf("%s",&A.nom);
    printf("entrer l'age :");
    scanf("%d",&A.age);
    printf("entrer la moyenne :");
    scanf("%f",&A.moyenne);
    statut(A.moyenne);
    return 0;
}
