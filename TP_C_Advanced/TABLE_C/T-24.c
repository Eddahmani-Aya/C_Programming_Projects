#include <stdlib.h>
#include <stdio.h>

int main ()
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
    printf("l'affichage de tableau :\n");
    for (i=0;i<4;i++){
        for (j=0;j<3;j++)
        {
            printf("T[%d][%d]=%d\n",i+1,j+1,T[i][j]);
        }
    }
    return 0;
}
