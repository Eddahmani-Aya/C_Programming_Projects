#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10],min;
    int i;
    printf("veuillez entrer les element du tableau \n");
    for(i=0;i<=9;i++){
        printf("T[%d] = ",i+1);
        scanf("%f",&T[i]);
    }
    min=T[0];
    for(i=0;i<=9;i++){
        if(min>T[i])
            min=T[i];
    }
    printf("le minimum du tableau est %f",min);

    return 0;
}
