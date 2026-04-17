#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int i ,nbr_e;
    typedef struct
    {
        char Nom[10];
        float prix;
        int Quantite;
    }Produit;
    void saisir_ls_produit (Produit P[],int nbr_e)
    {
        for(i=0;i<nbr_e;i++)
        {
            printf("Produit %d:\n",i+1);
            printf("Nom:\t");
            scanf("%s",&P[i].Nom);
            printf("La quantite:\t");
            scanf("%d",&P[i].Quantite);
            printf("Prix:\t");
            scanf("%f",&P[i].prix);
        }
    }
     void affichage_une_produit (Produit P)
    {
       for(i=0;i<nbr_e;i++)
            printf("Produit %d:\n");
            printf("Nom= %s\t",P.Nom);
            printf("La quantite = %d\t",P.Quantite);
            printf("Prix= %f\t\n",P.prix);
    }

    void affichage_ls_produit (Produit P[],int nbr_e)
    {
       for(i=0;i<nbr_e;i++)
        {
            printf("Produit %d:\n",i+1);
            printf("Nom= %s\t",P[i].Nom);
            printf("La quantite = %d\t",P[i].Quantite);
            printf("Prix= %f\t\n",P[i].prix);
        }
        printf("\n");
    }
    float calcul_inventaire (Produit P[],int nbr_e)
    {
        float total;
        total=0;
       for(i=0;i<nbr_e;i++)
        {
            total += P[i].prix * P[i].Quantite;
        }
            return total;
    }
    void modifie_ls_produit (Produit P[],int nbr_e)
    {
        char n_cher_p[10];
       for(i=0;i<nbr_e;i++)
        {
            if(n_cher_p==P[i].Nom)
            {
                printf("Produit %d:\n",i+1);
                printf("Nom:\t");
                scanf("%s",&P[i].Nom);
                printf("La quantite:\t");
                scanf("%d",&P[i].Quantite);
                printf("Prix:\t");
                scanf("%f",&P[i].prix);
            }

        }
        printf("\n");
    }


int main ()
{
        char n_cher_p [10];
        printf("entrer le nombre des produits:\n");
        scanf("%d",&nbr_e);
        Produit P[nbr_e];
        saisir_ls_produit(P,nbr_e);
        affichage_ls_produit(P,nbr_e);
        printf("Total de l'inventaire est :%.2f\n",calcul_inventaire(P,nbr_e));
        printf("entrer le nom de produit  :\n");
        scanf("%s",&n_cher_p);
        modifie_ls_produit(P,nbr_e);
    return 0;
}
