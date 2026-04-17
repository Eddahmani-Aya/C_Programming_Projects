#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float T[3][4];
    for (i=0;i<3;i++){
        for (j=0;j<4;j++)
        {
            printf("l'etudent n %d du module %d=",i+1,j+1);
            scanf("%f",&T[i][j]);
        }
    }
}
