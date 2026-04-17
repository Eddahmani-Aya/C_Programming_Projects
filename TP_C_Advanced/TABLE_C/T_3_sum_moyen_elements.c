#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10],sum,prod,moy;
    int i;
    printf("veuillez entrer les element du tableau \n");
    for(i=0;i<=9;i++){
        printf("T[%d] = ",i+1);
        scanf("%f",&T[i]);
    }
    sum=0;
    prod=1;
    for(i=0;i<=9;i++)
    {
        sum=sum+T[i];
        prod=prod*T[i];
    }
    moy=sum/i;
    printf("la somme des element du tableau %f\n",sum);
    printf("le produits des element du tableau %f\n",prod);
    printf("la moyenne des element du tableau %f",moy);

    return 0;
}
