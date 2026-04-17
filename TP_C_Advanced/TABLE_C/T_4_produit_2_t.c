#include <stdio.h>
#include <stdlib.h>

int main()
{
    float U[3],V[3],prod;
    int i;
    printf("veuillez entrer les element de vecteur U :\n");
    for(i=0;i<=2;i++){
        printf("U[%d] = ",i+1);
        scanf("%f",&U[i]);
    }
    printf("veuillez entrer les element de vecteur V :\n");
    for(i=0;i<=2;i++){
        printf("V[%d] = ",i+1);
        scanf("%f",&V[i]);                                     /* p=0;*/
    }                                                           /for (i-0 ;i<3; i++)/
    prod=(U[0]V[0])+(U[1]*V[1])+(U[2]*V[2]);                       /*Ð  = Ð + U[i]*V [i];/
    printf("le produits des element du tableau %f\n",prod);
    return 0;
}
