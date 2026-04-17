#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Te[5],Ts[5];
    int i;
    printf("veuillez entrer les element du tableau \n");
    for(i=0;i<=4;i++){
        printf("Te[%d] = ",i+1);
        scanf("%d",&Te[i]);
    }
    for(i=0;i<=4;i++)
        Ts[4-i]=Te[i];
    printf(" les elements du tableau inverse sont:\n");
    for(i=0;i<=4;i++){
        printf("Ts[%d] = %d\n",i+1,Ts[i]);
    }
    return 0;
}
