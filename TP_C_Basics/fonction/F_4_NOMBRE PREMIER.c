#include <stdlib.h>
#include <stdio.h>
    void n_premier(int A)
    {
        int i , estpremier = 1;
        for(i=2;i<=A;i++)
        {
            if(A%i==0){
                 estpremier=0;
                 break;
            }
        }
        if( estpremier==1)
            printf("se nombre n'est pas premier");
        else
            printf("se nombre est premier",A);
    }
int main ()
{
    int n;
    printf("veuillez entrer un nombre");
    scanf("%d",&n);
    n_premier(n);
    return 0;
}
