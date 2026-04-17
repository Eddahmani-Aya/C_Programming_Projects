#include <stdlib.h>
#include <stdio.h>

int i;
    void remplir_t(int T[])
    {
      for(i=0;i<10;i++)
      {
          printf("T[%d]= ",i+1);
          scanf("%d",&T[i]);
      }
    }
    int minimum (int T[])
    {
        int min=T[0];
        for(i=0;i<10;i++)
          {
             if(min>T[i])
                min=T[i];
          }
        return min ;
    }
    int maximum (int T[])
    {
        int max=T[0];
        for(i=0;i<10;i++)
          {
             if(max<T[i])
                max=T[i];
          }
        return max ;
    }
    int T_inverse(int Ti[])
    {
        int Tf[10];
        for(i=0;i<10;i++)
          {
            Tf[9-i]=Ti[i];
          }
        for(i=0;i<10;i++)
          {
            printf("T_inverse[%d]=%d\n",i,Tf[i]);
          }
    }

int main()
{
    int T[10];
    remplir_t(T);
    printf("les minimum dans T est :%d\n",minimum(T));
    printf("les maximum dans T est :%d\n",maximum(T));
    T_inverse(T);
    return 0;
}
