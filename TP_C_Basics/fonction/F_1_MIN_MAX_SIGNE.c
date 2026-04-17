#include <stdio.h>
void singe (int a,int b)
{
    if(a*b>0)
        printf("la valeur de a et b ont le meme signe\n");
    else
        printf("la valeur de a et b ont des signes differents\n");

}
int minimum (int a,int b)
{
    int min;
    if(a<b)
        min = a;
    else
        min = b;
    return min;
}
int maximum (int a,int b)
{
   int max;
    if(a>b)
        max = a;
    else
        max = b;
    return max;
}

int main()
{
    int max ,min ;
    int a,b;
    printf("veuillez entrer la valeur de a :");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de b :");
    scanf("%d",&b);
    singe(a,b);
    min=minimum(a,b);
    max=maximum(a,b);
    printf("la valeur minimale est : %d\n",min);
    printf("la valeur maximale est : %d\n",max);
    return 0;
}
