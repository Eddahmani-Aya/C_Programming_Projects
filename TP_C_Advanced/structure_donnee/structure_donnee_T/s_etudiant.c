#include <stdio.h>
#include <stdlib.h>
int i;
    typedef struct
    {
        int jour;
        int mois;
        int annee;
    }Date;
    typedef struct
    {
        char Nom[50];
        char Prenom[50];
        char CIN[50];
        Date date_naissance;
        float Moyenne;
    }Etudiant;
    void saisir_etudiant(Etudiant E[],int taille)
    {

        for (i=0;i<taille;i++)
        {
            printf("Etudiant [%d]:\n",i+1);
            printf("\t Nom:");
            scanf("%s",&E[i].Nom);
            printf("\t Prenom:");
            scanf("%s",&E[i].Prenom);
            printf("\t CIN:");
            scanf("%s",&E[i].CIN);
            printf("\t date_naissance (jours/mois/annee) :");
            scanf("%d%d%d",&E[i].date_naissance.jour,&E[i].date_naissance.mois,&E[i].date_naissance.annee);
            printf("\t Moyenne:\n");
            scanf("%f",&E[i].Moyenne);
            printf("/n");
        }

        return E;
    }
    void afficher_etudiant(Etudiant E[],int taille)
    {
        for (i=0;i<taille;i++)
        {
            printf("Etudiant [%d]:",i+1);
            printf("\t Nom: %s",E[i].Nom);
            printf("\t Prenom: %s",E[i].Prenom);
            printf("\t CIN: %s",E[i].CIN);
            printf("\t date_naissance (jours/mois/annee) : %d/%d/%d",E[i].date_naissance.jour,E[i].date_naissance.mois,E[i].date_naissance.annee);
            printf("\t Moyenne: %f",E[i].Moyenne);
            printf("/n");
        }

    }

int main ()
{
    int taille;
    printf("Entrez la taille du tableau :\n");
    scanf("%d",&taille);
    Etudiant E[taille];
    saisir_etudiant(E,taille);
    afficher_etudiant(E,taille);

    return 0;
}
