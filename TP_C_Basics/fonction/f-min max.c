#include <stdlib.h>
#include <stdio.h>
int max ,min;
    void signe(int A,int B)
    {
        if (A*B>0)
            printf("A et B ont le meme signe .\n");
        else
            printf("A et B ont des signe different .\n");
    }
    int minimum(int A,int B)
    {
        if(A<B)
            min=A;
        else
            min=B;
        return min;
    }
    int maximum(int A,int B)
    {
        if(A>B)
            max=A;
        else
            max=B;
        return max;
    }
int main ()
{
    int X,Y;
    printf("entrer les valeurs de A :\n");
    scanf("%d",&X);
    printf("entrer les valeurs de B :\n");
    scanf("%d",&Y);
    signe(X,Y);
    min=minimum(X,Y);
    max=maximum(X,Y);
    printf("Le minimum est :%d\n",min);
    printf("Le maximum est :%d\n",max);
    return 0;
}
