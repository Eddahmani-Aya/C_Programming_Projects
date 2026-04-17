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
     float somme(float T[],int taille)
    {
        float s;
        s=0;
        for (i=0;i<taille;i++)
            s+=T[i];
        return s;
    }
int main ()
{
    int taille;
    printf("entrer la taille su tableau :\n");
    scanf("%d",&taille);
    float T[taille];
    remplir_table(T,taille);
    printf("La somme des elements du tableau est : %.2f \n",somme(T,taille));
    return 0;
}
