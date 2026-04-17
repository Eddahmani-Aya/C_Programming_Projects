#include <stdlib.h>
#include <stdio.h>
float a,b ,c;
float delta;
    float discriminant()
    {
        delta=pow(b,2)-(4*a*c);
        return delta;
    }
    void solution ()
    {
        float x1 ,  x2 , x;
        float a,b,c;
        if(delta>0)
        {
           x1=(-b-sqrt(delta))/(2*a);
           x2=(-b+sqrt(delta))/(2*a);
           printf("les solutions est: %.2f et %.2f\n",x1,x2);
        }
        else if (delta=0)
        {
            x=(-b)/(2*a);
            printf("la solution est %.2f\n",x);
        }
        else
        printf("pas de solution.\n");
    }
int main ()
{
    float A,B,C;
    printf("Axx+Bx+C=0");
    printf("veuillez entrer les valeurs de A , B et C");
    scanf("%d%d%d",&A,&B,&C);
    discriminant();
    solution();
    return 0;
}
