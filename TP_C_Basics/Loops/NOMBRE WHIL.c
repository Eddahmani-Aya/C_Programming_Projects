#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("veuillez entrer un nombre entre 10 et 20");
    scanf("%d",&n);
    while(n<10 || n>20)
    {
        if (n<10){
            printf("plus petit\n");}
        else{
            printf("plus grand\n");}
        printf("veuillez entrer un nombre entre 10 et 20");
        scanf("%d",&n);
    }
    printf("bravo !");
    return 0;
}
