#include <stdlib.h>
#include <stdio.h>
int i,j,k;
    void remplir_t(int T[],int taille)
        {
          for(i=0;i<taille;i++)
          {
              printf("T[%d]= ",i+1);
              scanf("%d",&T[i]);
          }
        }
    void tri_fusion(int T[],int g,int d)
    {
        if(g<d)
        {
            int m;/*milieu*/
            m=(g+d)/2;
            tri_fusion(T,g,m);
            tri_fusion(T,m+1,d);
            fusion(T,g,m,d);
        }
    }
    void fusion(int T[],int g,int m,int d)
    {
        int n1=m-g+1;/*la taille de sous-tableau 1*/
        int n2=d-m;/*la taille de sous-tableau 2*/
        int Tg[n1],Td[n2];/*declaration de la table 1 et 2*/
        for(i=0;i<n1;i++)/*pour insert les elemant du tableau Tg[n1]*/
            Tg[i]=T[g+i];
        for(j=0;j<n2;j++)/*pour insert les elemant du tableau Td[n2]*/
            Td[j]=T[m+1+j];
        i=0;
        j=0;
        k=g;
        while(i<n1 && j<n2)
        {
            if(Tg[i]<=Td[j])
            {
                T[k]=Tg[i];
                i++;
            }
            else
            {
                T[k]=Td[j];
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            T[k]=Tg[i];
            i++;
            k++;
        }
        while(i<n2)
        {
            T[k]=Td[j];
            j++;
            k++;
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
    tri_fusion(T,0,taille-1);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}

