
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

    void tri_comptage(int T[], int taille)
    {
        int N[taille];
        int max=T[0];
        for(i=1;i<taille;i++)
        {
            if(T[i]>max)
                max=T[i];
        }
        int compte[max+1];
        for(i=0;i<=max;i++)
            compte[i]=0;
        for(i=0;i<taille;i++)
            compte[T[i]]++;
        for(i=1;i<=max;i++)
            compte[i]+=compte[i-1];/*compte[i]=compte[i]+compte[i-1]*/
        for(i=taille-1;i>=0;i--)
        {
            compte[T[i]]--;
            N[compte[T[i]]]=T[i];
        }
        for(i=0;i<taille;i++)
            T[i]=N[i];
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
    tri_comptage(T,taille);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}
