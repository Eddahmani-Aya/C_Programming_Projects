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
    printf("nombre de repitition de %d est:%d",x,n);
    return 0;
}
