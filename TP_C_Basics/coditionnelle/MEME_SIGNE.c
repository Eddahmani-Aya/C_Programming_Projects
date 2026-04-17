#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("entre la valeur de A et B  :");
    scanf("%d%d",&A,&B);
    if (A*B>0)
        printf("A et B ont le meme signe ");
    else
        printf("a et b ne sont pas le meme signe ");
    return 0;
}
