#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char T[16];
    int i;
    T[0]='a';
    T[1]='e';
    T[2]='u';
    T[3]='i';
    T[4]='o';
    T[5]='y';
    printf("les six voyelles de l'alphabet francais est : \n");
    for (i=0;i<6;i++)
        printf("%c\n",T[i]);
    return 0;
}
