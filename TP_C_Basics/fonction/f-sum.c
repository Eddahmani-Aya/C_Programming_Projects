#include <stdlib.h>
#include <stdio.h>
    int sum(int A,int B,int C)
    {
        int som;
        som=A+B+C;
        return som;
    }
int main ()
{
    int X,Y,Z,s;
    printf("entrer les valeur :");
    scanf("%d%d%d",&X,&Y,&Z);
    s=sum(X,Y,Z);
    printf("la somme est :%d",s);
    return 0;
}
