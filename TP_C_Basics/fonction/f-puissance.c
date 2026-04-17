#include <stdlib.h>
#include <stdio.h>
int pow;
    int puissance(int A)
    {
        pow=A*A;
        return pow;
    }
int main ()
{
    int X;
    printf("entrer les valeur :");
    scanf("%d",&X);
    pow=puissance(X);
    printf("la puissance est :%d",pow);
    return 0;
}
