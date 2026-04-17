

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

    void tri_shell(int T[],int taille)
    {
        for( interval =taille/2 /*2*/;interval>0;interval=interval/2/*incrementation 1*/)
           {
               for( j =interval/*2*/ ;j<taille/*6*/;j++/*incrementation par 1*/)
               {
                   for( i =j-interval/*0*/;i>=0;i=i-interval/*incrementation  */)
                   {
                       if(T[i]<=T[i+interval])
                            break;
                       else
                            echanger(&T[i],&T[i+interval]);

                   }
               }
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
    tri_shell(T,taille);
    printf("Tableau trie :\n");
    affichage(T,taille);
    return 0;
}
