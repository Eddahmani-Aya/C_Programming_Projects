#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i,j;
    float T[3][3],s,m;
    for (i=0;i<3;i++){
    s=0;
        for (j=0;j<3;j++)
        {
            printf("l'etudent n %d du module %d=",i+1,j+1);
            scanf("%f",&T[i][j]);
            s=s+T[i][j];
        }
    m=s/3;
    printf("    la moyenne de etudent n%d est %.2f\n",i+1,m);
    }
    printf("l'affichage de tableau :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++)
        {
            printf("                        T[%d][%d]=%.2f\n",i+1,j+1,T[i][j]);
        }
    }
    return 0;
}
