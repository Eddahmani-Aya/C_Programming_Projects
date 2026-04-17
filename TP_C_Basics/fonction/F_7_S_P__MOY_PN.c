#include <stdlib.h>
#include <stdio.h>
int i;
float T[10];
    void rempli_table()
    {
        printf("enter les valeurs du tableau : \n");
        for (i=0;i<=9;i++)
        {
             printf("T[%d] = ",i+1);
             scanf("%f",&T[i]);
        }
    }

    float somme(float T[])
    {
        float s;
        s=0;
        for (i=0;i<10;i++)
            s+=T[i];
        return s;
    }
    float produit(float T[])
    {
        float p;
        p=1;
        for (i=0;i<10;i++)
            p=p*T[i];
        return p;
    }
    float moyenne(float T[])
    {
        float moy,s;
        s=somme(T);
        moy=s/10;
        return moy;
    }
    void pn (float T[])
    {
        printf("les elements positifs du tableau sont :");
        for (i=0;i<=9;i++)
        {
            if(T[i]>0)
                printf("%.2f \n",T[i]);
        }
        printf("les elements negatifs du tableau sont :");
        for (i=0;i<=9;i++)
        {
            if(T[i]<0)
                printf("%.2f \n",T[i]);
        }
    }
int main ()
{
    rempli_table();
    printf("La somme des elements du tableau est : %.2f \n",somme(T));
    printf("Le produit des elements du tableau est : %.2f \n",produit(T));
    printf("La moyenne des elements du tableau est : %.2f \n",moyenne(T));
    pn(T);
    return 0;
}
