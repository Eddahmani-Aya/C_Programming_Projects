#include <stdio.h>
#include <stdlib.h>
int i,j;
    typedef struct
    {
        char titre[30];
        int code ;
        char auteur[20];
        int nbr_exp;
    } livre ;
    void saisirlistelivres(livre L[],int taille)
    {

        for(i=0;i<taille;i++)
        {
            printf("livre [%d]:\n",i+1);
            printf("\t Titre:");
            scanf("%s",&L[i].titre);
            printf("\t Code isbn:");
            scanf("%d",&L[i].code);
            printf("\t Nombre d'exemplaires :");
            scanf("%d",&L[i].nbr_exp);
            printf("\t Nom de l'auteur:");
            scanf("%s",&L[i].auteur);

        }
    }
    void afficherunlivre (livre L)
    {
        printf("le titre est %s\n",L.titre);
        printf("le code isbn est %d\n",L.code);
        printf("le nom de l'auteur est %s\n",L.auteur);
        printf("le nombre d'exemplaires disponibles est %d\n",L.nbr_exp);
        printf("\n");
    }
    void affichelistelivre(livre L[],int taille)
    {
        for(i=0;i<taille;i++)
        {
            afficherunlivre(L[i]);
        }
    }
    int calculertotalexemplaires(livre L[],int taille)
    {
        int sum=0;
        int i;
        for(i=0;i<taille;i++)
        {
            sum=sum+ L[i].nbr_exp;
        }
        return sum;
    }
    void modifierlivre(livre L[],int taille,int code)
    {
        for(i=0;i<taille;i++)
        {
            if(code ==L[i].code)
            {
                printf("entrer le nouveau titre:");
                scanf("%s",&L[i].titre);
                printf("entrer le nouveau nom de l'auteur:");
                scanf("%s",&L[i].auteur);
                printf("entrer le nouveau nombre d'exemplaires :");
                scanf("%d",&L[i].nbr_exp);
            }
        }
    }
    float calculermoyenneexemplaires(livre L[],int taille)
    {
        calculertotalexemplaires(L,taille);
        return calculertotalexemplaires(L,taille) /taille-1 ;
    }
    void chercherlivreparauteur(livre L[],int taille,char auteur[])
    {
        for(i=0;i<taille;i++)
        {
            if(strcmp(auteur,L[i].auteur)==0)
            {
                printf("le titre est %s\n",L[i].titre);
                printf("le code isbn est %d\n",L[i].code);
                printf("le nombre d'exemplaires disponibles est %d",L[i].nbr_exp);
            }
        }
    }
    void triinsertion (livre L[],int taille)
    {
        int j;
        int cle;
        for(i=1;i<taille;i++)
        {
            cle=L[i].code;
            j=i-1;
            while(j>=0 && L[j].code>cle)
            {
                L[j+1]=L[j];
                j--;
            }
            L[j+1].code=cle;
        }
    }
int main ()
{
    int taille;
    printf("Entrez la taille du tableau :\n");
    scanf("%d",&taille);
    livre L[taille];
    saisirlistelivres(L,taille);
    affichelistelivre(L,taille);
    printf("Total exemplaire est : %d \n ",calculertotalexemplaires);
    int code;
    printf("Entrez le code ISBN :\n");
    scanf("%d",&code);
    modifierlivre(L,taille,code);
    printf("Moyenne exemplaire est : %.2f \n",calculermoyenneexemplaire(L,taille));
    int auteur;
    printf("Entrez le nom de l'auteur :\n");
    scanf("%s",&auteur);
    chercherlivreparauteur(L,taille,auteur);
    triinsertioninsb(L,taille);
    return 0;
}
