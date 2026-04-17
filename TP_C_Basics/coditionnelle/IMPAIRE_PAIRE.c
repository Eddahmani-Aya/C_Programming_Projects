#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer la valeur de n");
    scanf("%d",&n);
    if(n%2==0)
        printf("ce nombre est paire");
    else
        printf("ce nombre est impaire");
        return 0;
}
