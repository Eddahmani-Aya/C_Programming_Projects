#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s,n ;
    do {
        printf("entrer un nombre superieur stictement a 1 :");
        scanf("%d",&n);
       }
       while(n<=1);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("la somme  est : %d",s);
    return 0;
}
