#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[]="bonjour";
    char str2[]=" dsi";
    char str3[50];
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("str3= %s\n",str3);
    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);
    return 0;
}
