/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age , date_naissance;
    printf("entrer votre date de naissance :");
    scanf("%d",&date_naissance);
    age=2024- date_naissance;
    printf("votre age en 2024 est :%d",age);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur , longeur , surface , perimetre;
    printf("entrer la valeur de largeur d'un rectangle :");
    scanf("%f",&largeur);
    printf("entrer la valeur de longeur d'un rectangle:");
    scanf("%f",&longeur);
    perimetre=(largeur+longeur)*2;
    surface=largeur*longeur;
    printf("la surface de ce rectangle est :%.2f\n",surface);
    printf("le perimetre de ce rectangle est :%.2f",perimetre);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a , b , p;
    printf("entrer la valeur de a er b :");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("puissace est :%d",p);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x , y , sum , p , d ,sus  ;
    printf("vuiellez entrer la valeure de nombres :");
    scanf("%f%f",&x,&y);
    sum= x + y;
    p=x * y;
    d= x / y;
    sus= x - y;
    printf("la somme entre a et b est :%.2f\n",sum);
    printf("le produit entre a et b est :%.2f\n",p);
    printf("la divisin entre a et b est :%.2f\n",d);
    printf("sustraction entre a et b est :%.2f",sus);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,sum,moy;
    printf("entrer les valeurs de ces 5 notes :");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    sum=n1+n2+n3+n4+n5;
    moy=sum/5;
    printf("la somme des 5 notes est:%.2f\n",sum);
    printf("la moyenne des 5 notes est:%.2f",moy);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1, r2, r3,r_ser,r_par;
    printf("entrer les valeure de r1,r2 et r3 :");
    scanf("%f%f%f",&r1,&r2,&r3);
    r_ser=r1+r2+r3;
    r_par=(r1*r2*r3)/(r1*r2+r2*r3+r3*r1);
    printf(" la valeur de resistance en serie est :%.2f\n",r_ser);
    printf(" la valeur de resistance en parallele est :%.2f",r_par);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta, x1,x2,x;
    printf("entrer le valeurs de a,b et c:");
    scanf("%f%f%f",&a,&b,&c);
    delta = pow(b,2) - (4*a*c);
    if (delta<0)
        printf(" pas du solution ");
    else if (delta==0)
    {
            x=(-b)/(2*a);
            printf("la solution est %.2f",x);
    }
    else
    {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("la solution est: %.2f\n",x1);
        printf("la solution est: %.2f",x2);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez entrer un nombre :"),
    scanf("%d",&n);
    if (n>0)
        printf("ce nombre est positif ");
    else if (n==
             0)
        printf("ce nombre est nule ");
    else
        printf("ce nombre est negatif ");
    return 0 ;

}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;
    printf("veuillez entrer les deux nombre :"),
    scanf("%d%d",&x,&y);
    if (x>y)
        printf("%d plus grand que %d ",x,y);
    else if (x==y)
        printf("les deux nombres sont egaux");
    else
        printf("%d plus grand que %d ",y,x);
    return 0 ;

}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez entrer un nombre :"),
    scanf("%d",&n);
    if (n%2==0)
        printf("ce nombre est paire ");

    else
        printf("ce nombre est impaire ");
    return 0 ;

}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j , mois ;
    printf("veuillez entrer le mois :"),
    scanf("%d",&mois);
    switch (mois)
    {
        case 1:
            printf("janvier:31");
        break ;
        case 2:
            printf("Février:28");
        break ;
        case 3:
            printf("Mars:31");
        break ;
        case 4:
            printf("Avril,:31");
        break ;
        case 5:
            printf("Mai:3");
        break ;
        case 6:
            printf("Juin:30");
        break ;
        case 7:
            printf("Juillet:31");
        break ;
        case 8:
            printf("Août:31");
        break ;
        case 9:
            printf("Septembre:31");
        break ;
        case 10:
            printf("Octobre:31");
        break ;
        case 11:
            printf("Novembre:30");
        break ;
        case 12:
            printf("Décembre:31");
        break ;
    }
    return 0 ;

}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1,c2,c3 ;
    printf("veuillez entrer  les longueurs de trois côtés du triangle :"),
    scanf("%f%f%f",&c1,&c2,&c3);
    if (c1+c2>c3 && c2+c3>c1 && c1+c3>c2)
        printf("ces trois cotes peuvent former un triangle.  ");
    else
        printf("cces trois cotes ne peuvent pas former un triangle. ");
    return 0 ;

}
*/
