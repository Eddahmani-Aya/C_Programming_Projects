#include <stdlib.h>
#include <stdio.h>
int i;
     int n_count (int n)
    {
        int nbr;
        nbr=0;
        do{
            n = n / 10;
            nbr ++;
        }while(n != 0);
        return nbr;
    }
int main ()
{
    int x;
    printf("veuillez entrer un nombre :");
    scanf("%d",&x);
    printf("le nombre de chiffres dans les nombre %d est : %d ",x,n_count(x));
    return 0;
}
