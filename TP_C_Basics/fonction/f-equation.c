#include <stdlib.h>
#include <stdio.h>
#include <math.h>

    int discriminant(int a,int b,int c)
    {
        int delta;
        delta=pow(b,2)-(4*a*c);
        return delta;
    }
    void solution (int a,int b,int c)
    {
        float x1, x2;
        int delta;
        delta = discriminant(a ,b ,c);

        if(delta>0)
        {
           x1=(-b-sqrt(delta))/(2*a);
           x2=(-b+sqrt(delta))/(2*a);
           printf("les solutions est: %.2f et %.2f\n",x1,x2);
        }
        else if (delta==0)
        {
            x1=(-b)/(2*a);
            printf("la solution est %.2f\n",x1);
        }
        else
        printf("pas de solution.\n");
    }
int main ()
{
    int A,B,C,a;
    int delta ;
    printf("A x^2 + B x + C = 0 \n");
    printf("veuillez entrer les valeurs de A ");
    scanf("%d",&A);
    printf("veuillez entrer les valeurs de B ");
    scanf("%d",&B);
    printf("veuillez entrer les valeurs de C ");
    scanf("%d",&C);
    a=discriminant(A,B,C);
    printf("delta est %d",a);
    solution(A,B,C);
    return 0;
}
