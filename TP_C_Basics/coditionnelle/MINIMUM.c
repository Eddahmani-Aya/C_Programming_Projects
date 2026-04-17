#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("entre la valeur des 3 nombres  :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1<n2 && n1<n3 )
        printf("le minimum est : %d",n1);
    else if (n2<n3)  /* n1>=n2 && n1>=n3 */
        printf("le minimum est : %d",n2);
     else  /* n1>=n2 && n1>=n3 && n2>=m3 */
        printf("le minimum est : %d`",n3);
    return 0;
}
