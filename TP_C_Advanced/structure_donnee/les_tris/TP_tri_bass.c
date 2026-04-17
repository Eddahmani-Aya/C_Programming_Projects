
#include <stdlib.h>
#include <stdio.h>
int i;
    void remplir_t(int T[],int taille)
        {
          for(i=0;i<taille;i++)
          {
              printf("T[%d]= ",i+1);
              scanf("%d",&T[i]);
          }
        }
    int maximum(int T[],int taille)
    {
        int max=T[0];
        for(i=1;i<taille;i++)
        {
            if (T[i]>max)
                max=T[i];
        }
       return max;
    }
    void tri_bass(int T[], int taille)
    {
    int max = maximum(T, taille);// Trouver la valeur maximale dans le tableau
    for (int pos = 1; max / pos > 0; pos *= 10)
        triComptage(T, taille, pos);
    }
    void triComptage(int T[], int taille, int pos) {
    int N[taille];  // Tableau pour stocker le résultat
    int compte[10] = {0};// Tableau de comptage pour les chiffres de 0 à 9
    for (int i = 0; i < taille; i++)
        compte[(T[i] / pos) % 10]++;
    for (int i = 1; i < 10; i++)
        compte[i] += compte[i - 1];
    for (int i = taille - 1; i >= 0; i--) {
        compte[(T[i] / pos) % 10]--;
        N[compte[(T[i] / pos) % 10]] = T[i];
    }
    for (int i = 0; i < taille; i++)
        T[i] = N[i];
    }

    void affichage(int T[], int taille)
    {
        for(i=0;i<taille;i++)
        {
            printf("T[%d]=%d\n",i+1,T[i]);
        }
        printf("\n");
    }

int main ()
{
    int taille;
    printf("entrer la taille du tableau : ");
    scanf("%d",&taille);
    int T[taille];
    remplir_t(T,taille);
    tri_bass(T,taille);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}

