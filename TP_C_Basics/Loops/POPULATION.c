#include <stdlib.h>

int main ()
{
    int annees,agadir,marrakech;
    annees=0;
    marrakech=1000000;
    agadir=500000;
    while(marrakech>=agadir)
    {
        marrakech=marrakech+50000;
        agadir=agadir+(agadir*0.08);
        annees=annees+1;
    }
    printf("l'annees la population de la ville agadir depassera celle de la ville marrakech: %d ",annees);
    return 0;
}
