#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],x ,n;
    int i,min;
    printf("veuillez entrer les element du tableau \n");
    for(i=0;i<=9;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("veuillez entrer la valeur du x : ");
    scanf("%d",&x);
    n=0;
    for(i=0;i<=9;i++){
        if(T[i]==x)
           n++;
    }
    if(n==0)
        printf("%d ne se trouve pas dans le tableau .",x);
    else
        printf("%d se trouve  dans le tableau .",x);
    return 0;
}
