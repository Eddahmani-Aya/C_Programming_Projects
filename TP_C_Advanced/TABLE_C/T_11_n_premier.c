#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("veuillez entrer un nombre");
    scanf("%d",&n);
    int i, estpremier,T[n],x,compteur ;
    compteur =0;
    x=2;
    do
    {
        estpremier = 0;
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0){
                estpremier=1;
                break;
            }
        }
        if( estpremier==0)
        {
            T[compteur]=x;
            compteur++;
        }
        x++;
    }while(compteur<n);
    printf("les %d premier nobres sont :\n",n);
    for(i=0;i<=n;i++)
    {
       printf("%d \n",T[i]);
    }
    return 0 ;
}
