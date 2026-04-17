#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B,Tmp;
    printf("entre la valeur de A et B :");
    scanf("%d%d",&A,&B) ;
    printf("la valeur initial de a est:%d\n",A);
    printf("la valeur initial de b est:%d\n",B);
    Tmp=A;
    A=B;
    B=Tmp;
    printf("la valeur de a est:%d\n",A);
    printf("la valeur de b est:%d",B);
    return 0;

}
