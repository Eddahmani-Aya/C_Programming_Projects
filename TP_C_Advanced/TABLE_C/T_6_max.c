#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10],max;
    int i;
    printf("veuillez entrer les element du tableau \n");
    for(i=0;i<=9;i++){
        printf("T[%d] = ",i+1);
        scanf("%f",&T[i]);
    }
    max=T[0];
    for(i=0;i<=9;i++){
        if(max<T[i])
            max=T[i];
    }
    printf("le maximum du tableau est %f",max);

    return 0;
}
