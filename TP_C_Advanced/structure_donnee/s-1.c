#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct
{
    float x;
    float y;
    float z;
}point;
float ab;
float distance (point A ,point B)
{
  ab=sqrt(pow((B.x-A.x),2)+pow((B.y-A.y),2)+pow((B.z-A.z),2));
  return ab;
}
point somme (point A,point B)
{
    point sum;
    sum.x= A.x+B.x;
    sum.y=A.y+B.y;
    sum.z=A.z+B.z;
    return sum ;
}

int main ()
{
    float s,dist;
    point A,B;
    printf("entrer les cordonnee de A  :");
    scanf("%f%f%f",&A.x,&A.y,&A.z);
    printf("entrer les cordonnee de B  :");
    scanf("%f%f%f",&B.x,&B.y,&B.z);
    dist=distance(A,B);
    printf("la distance entre a et b %f\n:",dist);
    s=somme(A,B);
    printf("la somme est %f%f%f:",s.x,s.y,s.z);
    return 0;
}
