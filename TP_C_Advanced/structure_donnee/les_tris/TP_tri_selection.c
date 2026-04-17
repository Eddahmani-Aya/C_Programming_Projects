#include <stdlib.h>
#include <stdio.h>
int T[5],i,j;
void remplir_t(int T[])
    {
      for(i=0;i<5;i++)
      {
          printf("T[%d]= ",i+1);
          scanf("%d",&T[i]);
      }
    }
void fct_tri(int T[])
{

    for (i=0;i<4;i++)
    {
        int indiceM=i;
        for (j=i+1;j<5;j++)
    {
            if(T[j]<T[indiceM])
            {
             indiceM=j;
            }

    }
    int tmp=T[indiceM];
        T[indiceM]=T[i];
        T[i]=tmp;

    }
     for (i=0;i<5;i++)
    {
         printf("T[%d] = %d\n",i+1,T[i]);
    }
}
int main ()

{
    remplir_t(T);
    fct_tri(T);
}
