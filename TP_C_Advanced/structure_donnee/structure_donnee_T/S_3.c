#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int jour;
    int mois;
    int annee;
} date;

typedef struct {
    char Nom[10];
    char prenom[20];
    char sexe[10];
    int NSS; // numero de securite sociale
    date date_naissance;
    float salaire;
    int age;
    char adress[50];
} employees;
    void affichage_ls (etudiant E[],int nbr_e)
    {
       for(i=0;i<nbr_e;i++)
        {
            printf("Etudiant  %d:\n",i+1);
            printf("Nom= %s\t",E[i].Nom);
            printf("prenom= %s\t",E[i].Prenom);
            printf("CNE= %d\t",E[i].CNE);
            printf("la date naissance est :\t %d / %d / %d",E[i].date_naissance.jour,E[i].date_naissance.mois,E[i].date_naissance.annee);
            printf("Note= %f\t\n",E[i].Note);
        }
        printf("\n");
    }
    float moyenne_ls (etudiant E[],int nbr_e)
    {
       for(i=0;i<nbr_e;i++)
        {
            float S;
            S=0;
            float m;
            for(i=0;i<nbr_e;i++)
            {
                S=S+E[i].Note;
            }
            m=S/nbr_e;
            return m;
        }
    }
     void cherche_CNE(int CNE,etudiant E[],int nbr_e)
     {
         int a;
         a =0;
         for(i=0;i<nbr_e;i++)
         {
             if(CNE==E[i].note){
                a++;
                moyenne_ls(E,i);
             }
         }

     if(a==0)
     {
         printf("L'etudiante n'exicte pas .");
     }
     }
int main ()
{
    int CNE;
    printf("entrer le nombre des Etudiants :\n");
    scanf("%d",&nbr_e);
    etudiant E[nbr_e];
    for(i=0;i<nbr_e;i++)
        {
            printf("Etudiant  %d:\n",i+1);
            printf("Nom:\t");
            scanf("%s",&E[i].Nom);
            printf("prenom:\t");
            scanf("%s",&E[i].Prenom);
            printf("CNE:\t");
            scanf("%d",&E[i].CNE);
            printf("la date naissance:\n");
            printf("jour\t");
            scanf("%d",&E[i].date_naissance.jour);
            printf("mois\t");
            scanf("%d",&E[i].date_naissance.mois);
            printf("annee\t");
            scanf("%d",&E[i].date_naissance.annee);
            printf("Note:\t");
            scanf("%f",&E[i].Note);
        }
        affichage_ls(E,nbr_e);
        printf("la moyenne de la class est :%f\n",moyenne_ls);
        printf("entrer le CNE de Etudiant :\n");
        scanf("%d",&CNE);
        cherche_CNE(CNE,E,nbr_e);
    return 0;
}
