
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
    void echanger(int *a , int*b)
    {
       int tmp;
       tmp=*a;
       *a=*b;
       *b=tmp;
    }
    void tas(int T[],int taille,int i)
    {
        int maxidx=i;
        int g = 2 * i + 1;
        int d = 2 * i + 2;
        if (g< taille && T[g]> T[maxidx])
            maxidx=g;
        if (d< taille && T[d]> T[maxidx])
            maxidx=d;
        if(maxidx != i){
            echanger(&T[i],&T[maxidx]);
            tas(T,taille,maxidx);
        }
    }
    void tri_tas(int T[],int taille)
    {
        for(i=taille/2  -1;i>=0;i--)
            tas(T,taille,i);
        for(i=taille-1 ;i>=0;i--){
            echanger(&T[0],&T[i]);
            tas(T,i,0);
        }
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
    tri_tas(T,taille);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}
