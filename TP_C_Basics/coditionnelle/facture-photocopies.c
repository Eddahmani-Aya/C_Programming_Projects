#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float f;
    printf("entre le nobmbre de copier :");
    scanf("%d",&n);
    if (n<=10)
        f=n*0.30;
    else if (n<=30)
            f=10*0.30+(n-10)*0.25 ;
    else
        f=10*0.30+20*0.25+(n-30)*0,20;
    printf("le montant de la facture a payer est :%.2f",f);
    return 0;
}
