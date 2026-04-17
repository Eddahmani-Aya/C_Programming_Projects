#include <stdlib.h>
#include <stdio.h>
    int n_count (int A)
    {
        int   nbr = 0;
        do{
            A = A / 10;
            nbr ++;
        }while(A != 0);
        return nbr ;
    }
int main ()
{
    int n;
    printf("veuillez entrer un nombre :");
    scanf("%d",&n);
    printf("le nombre de chiffres dans les nombre %d est : %d ",n,n_count(n));
    return 0;
}
