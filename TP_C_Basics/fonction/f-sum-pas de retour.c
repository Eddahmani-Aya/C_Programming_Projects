#include <stdlib.h>
#include <stdio.h>
     void sum(int A,int B,int C)
    {
        int som;
        som=A+B+C;
        printf("la somme est :%d",som);
    }
int main ()
{
    int X,Y,Z;
    printf("entrer les valeur :");
    scanf("%d%d%d",&X,&Y,&Z);
    sum(X,Y,Z);
    return 0;
}
