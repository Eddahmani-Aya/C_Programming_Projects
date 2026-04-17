#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[20],sum;
    int i;
    sum=1000;
    for(i=0;i<=19;i++)
    {
        sum=sum+(sum*0.02);
        T[i]=sum;
    }
    for(i=0;i<=19;i++)
    {
        printf(" a %diem anniversaire de aya la somme du compte est :%.2f\n ",i+1,T[i]);
    }
    return 0;
}
