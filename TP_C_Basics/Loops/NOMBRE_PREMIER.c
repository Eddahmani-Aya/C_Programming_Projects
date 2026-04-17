#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, estpremier;
    printf("veuillez entrer un nombre");
    scanf("%d",&n);
    estpremier = 1;
    for(i=2;i<=n;i++)
    {
        if(n%i==0){
             estpremier=0;
             break;
        }
    }
    if( estpremier==1)
        printf("se nombre n'est pas premier");
    else
        printf("se nombre est premier",n);
    return 0 ;
}
