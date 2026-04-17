#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int i ,nbr_e;
    typedef struct
    {
        char Nom[10];
        char Prenom[20];
        int CNE;
        float Note;
    }etudiant;
    void affichage_ls (etudiant E[],int nbr_e)
    {
       for(i=0;i<nbr_e;i++)
        {
            printf("Etudiant  %d:\n",i+1);
            printf("Nom= %s\t",E[i].Nom);
            printf("prenom= %s\t",E[i].Prenom);
            printf("CNE= %d\t",E[i].CNE);
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
         for(int i=0;i<nbr_e;i++)
         {
             if(CNE==E[i].CNE){
                a++;
                printf("Etudiant  %d:",nbr_e);
                printf("Nom= %s\t",E[i].Nom);
                printf("prenom= %s\t",E[i].Prenom);
                printf("CNE= %d\t",E[i].CNE);
                printf("Note= %f\t\n",E[i].Note);

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
