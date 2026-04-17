#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A,B,C,X,X1,X2,DELTA;
    printf("entre la valeur de A , B ET C :");
    scanf("%f%f%f",&A,&B,&C) ;
    DELTA=pow(-B,2)+(4*A*C);
    if (DELTA < 0)
        printf("cette equation n'admet pas une solution");
    else if (DELTA==0)
    {
       X=-(B)/(2*A);
       printf("la solution de cette equation est :%.2f",X);
    }
    else
    {
        X1=(-B-sqrt(DELTA))/2*A;
        X2=(-B+sqrt(DELTA))/2*A;
        printf("la solution de cette equation est :%.2f et %.2f",X1,X2);
    }
    return 0;

}
