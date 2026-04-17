#include <stdlib.h>
#include <stdio.h>
int i;

        void remplir_table(float T[],int taille)
    {
        printf("enter les valeurs du tableau : \n");
        for (i=0;i<taille;i++)
        {
             printf("T[%d] = ",i+1);
             scanf("%f",&T[i]);
        }
    }
    float somme (float T[],int taille)
    {
        float sum;
        sum=0;
        for (i=0;i<taille;i++)
        {
            sum=sum+T[i];
        }
        return sum;
    }
    float produit (float T[],int taille)
    {
        float p;
        p=1;
        for (i=0;i<taille;i++)
        {
            p=p*T[i];
        }
        return p;
    }
    float moyenne (float T[],int taille)
    {
        float moy,s;
        s=somme(T,taille);
        moy=s/taille;
        return moy;
    }
    void pn(float T[],int taille)
    {
        printf("les elements positifs du tableau sont :");
        for (i=0;i<taille;i++)
        {
            if(T[i]>0)
                printf("%.2f \n",T[i]);
        }
        printf("les elements negatifs du tableau sont :");
        for (i=0;i<taille;i++)
        {
            if(T[i]<0)
                printf("%.2f \n",T[i]);
        }
    }
int main ()
{
    int taille;
    printf("entrer la taille su tableau :\n");
    scanf("%d",&taille);
    float T[taille];
    remplir_table(T,taille);
    printf("La somme des elements du tableau est : %.2f \n",somme(T,taille));
    printf("Le produit des elements du tableau est : %.2f \n",produit(T,taille));
    printf("La moyenne des elements du tableau est : %.2f \n",moyenne(T,taille));
    pn(T,taille);
    return 0;
}
