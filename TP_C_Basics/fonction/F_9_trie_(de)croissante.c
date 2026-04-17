#include <stdlib.h>
#include <stdio.h>

int i;
int j,tmp;
    void remplir_t(int T[])
    {
      for(i=0;i<10;i++)
      {
          printf("T[%d]= ",i+1);
          scanf("%d",&T[i]);
      }
    }
    void afficher_T(int T[])
    {
        for(i=0;i<10;i++)
        {
            printf("T[%d]=%d\n",i+1,T[i]);
        }
    }
    int tri_T_croiss (int T[])
    {
        for(i=0;i<10;i++)
          {
             for(j=i+1;j<10;j++)
             {
                if(T[i]<T[j])
                {
                    tmp=T[i];
                    T[i]=T[j];
                    T[j]=tmp;
                }
             }
          }
          printf("\n tre croissante\n ");
        afficher_T(T);
    }
    int tri_T_decroiss (int T[])
    {
        for(i=0;i<4;i++)
          {
             for(j=i+1;j<4;j++)
             {
                if(T[i]>T[j])
                {
                    tmp=T[i];
                    T[i]=T[j];
                    T[j]=tmp;

                }
             }
          }
          printf("\n tre decroissante \n");
        afficher_T(T);
    }


int main()
{
    int T[10];
    remplir_t(T);
    tri_T_croiss(T);
    tri_T_decroiss(T);
    return 0;
}
