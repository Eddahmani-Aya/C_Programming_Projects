/*#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,c,i ,j;
    printf("entrer le nombre de colone :");
    scanf("%d", &c);
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++)
    {
        for (j=1;j<=c;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,i ,j;
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,c,i ,j;
    printf("entrer le nombre de colone :");
    scanf("%d", &c);
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++)
    {
        for (j=1;j<=c;j++)
        {
            if(i==1 || j==1 || i==l || j==c)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,i ,j;
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++)
    {
        for (j=1;j<=l;j++)
        {
            if(i==1 || j==1 || i==l || j==l || i==j || j==l-i+1)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,i ,j;
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
          printf("  ");
        }
        for(j=1;j<=l;j++){
          printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l,i ,j;
    printf("entrer le nombre de ligne :");
    scanf("%d", &l);
    for (i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
          printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(i==l || j==1 || j==(2*i-1) )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
