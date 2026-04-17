#include <stdlib.h>
#include <stdio.h>
int i,j,interval;
    void remplir_t(int T[],int taille)
        {
          for(i=0;i<taille;i++)
          {
              printf("T[%d]= ",i+1);
              scanf("%d",&T[i]);
          }
        }
    void echanger(int *a , int*b)
    {
       int tmp;
       tmp=*a;
       *a=*b;
       *b=tmp;
    }

    void tri_rapide(int T[],int bas , int haut)
    {
        if (bas< haut)
        {
            int pi=partition(T,bas,haut);
            tri_rapide(T,bas,pi-1);/*les element inferieur a pivot*/
            tri_rapide(T,pi+1,haut);/* les element superieur a pivot*/
        }
    }
    int partition (int T[],int bas , int haut)
    {
        int pivot=T[haut];
        int i =bas-1;
        for(int j =bas ;j<haut;j++)
        {
            if (T[j]<=pivot)
            {
                i++;
                echanger(&T[i],&T[j])  ;
            }
        }
        echanger(&T[i+1],&T[haut]);
        return(i+1);
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
    tri_rapide(T,0/*bas=premier element du tableau*/,taille-1/*haut=dernier element du tableau*/);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}
