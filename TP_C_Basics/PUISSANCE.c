#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,P;
    printf("entre la valeur de A et B  :");
    scanf("%d%d",&A,&B);
    P = pow(A,B);
    printf("%d a la puissance %d est %d",A,B,P);
    return 0;
}
