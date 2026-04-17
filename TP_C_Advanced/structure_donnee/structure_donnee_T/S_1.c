#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct
{
    char Nom[10];
    char Prenom[20];
    float Note;
}etudiant;
int main ()
{
    int i;
    etudiant E[5];
    for(i=0;i<5;i++)
        {
            printf("Etudiant  %d\n:",i+1);
            printf("Nom=\t");
            scanf("%s",&E[i].Nom);
            printf("prenom=\t");
            scanf("%s",&E[i].Prenom);
            printf("Note=\t");
            scanf("%f",&E[i].Note);
        }
    for(i=0;i<5;i++)
        {
            printf("Etudiant  %d:\n",i+1);
            printf("Nom= %s\t",E[i].Nom);
            printf("prenom= %s\t",E[i].Prenom);
            printf("Note= %f\t",E[i].Note);
            printf("\n");
        }
    return 0;
}
