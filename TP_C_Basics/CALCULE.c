 #include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,SUM,D,S,P;
    printf("entre la valeur de A et B  :");
    scanf("%f%f",&A,&B);
    SUM=A+B;
    P =A*B;
    S =A-B;
    D =A/B;
    printf("LA somme de a et b est :%f\n",SUM);
    printf("a - b = :%f\n",S);
    printf("a * b = :%f\n",P);
    printf("a / b = :%f\n",D);
    return 0;
}
