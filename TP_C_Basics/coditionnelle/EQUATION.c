#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b,c;
    float x,x1,x2,delta;
    printf("veuillez entrer les valeurs de a,b et c :");
    scanf("%d%d%d",&a,&b,&c);
    delta=pow(b,2)-(4*a*c);
    if(delta == 0)
     {
       x=-(b)/(2*a);
       printf("la solution de cette equation est :%.2f",x);
    }
    else if (delta < 0)
        printf("cette equation n'admet pas une solution .");
    else
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("les solutions de cette equation est :%.2f\t%.2f",x1,x2);
    }
    return 0;
}
