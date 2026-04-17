#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main ()
{
    float a,b ;
    int op;
    char reponse ;
    do
    {
        printf("---------calculatrice : menu --------\n");
        printf("1 - addition .\n");
        printf("2 - sustraction .\n");
        printf("3 - multiplication .\n");
        printf("4 - division .\n");
        printf("5 - reste d'une division entier .\n");
        printf("6 - puissance .\n");
        printf("quel calcul veux-tu effectuer ?");
        scanf("%d",&op);
        printf("entrer le premier terme :");
        scanf("%f", &a);
        printf("entrer le deuxieme terme :");
        scanf("%f", &b);
        switch(op)
        {
            case 1 :printf("la somme de a et b est %.2f\n",a+b);
                    break ;
            case 2 :printf("la sustraction de a et b est %.2f\n",a-b);
                    break ;
            case 3 :printf("la multiplication de a et b est %.2f\n",a*b);
                    break ;
            case 4 :if(b!=0)
                        printf("la division de a et b est %.2f\n",a/b);
                    else
                        printf("la division par 0 est imposible \n");
                    break ;
            case 5 :printf("reste d'une division entier de a et b est %d\n",(int)a%(int)b);
                    break ;
            case 6 :printf("la puissance de a et b est %.2f\n",pow(a,b));
                    break ;
            default: printf("l'operation est incorrect \n");
                    break;
        }

        printf("veux-tu faire un autre calcul (oui/non)?");
        scanf(" %C",&reponse);
    }while(reponse != 'n');


    return 0;
}
