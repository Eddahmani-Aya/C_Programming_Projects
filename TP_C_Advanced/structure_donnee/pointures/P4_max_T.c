

#include <stdio.h>
int i ;
    void remplir(int *T, int taille)
    {
        for ( i = 0; i < taille; i++) {
            printf("T[%d]= ", i + 1);
            scanf("%d", (T + i));
        }
    }
    void Max_T(int *T, int taille)
    {
       for ( i = 0; i < taille; i++) {
            T[i]=*(T+i)*2;
            printf("T[%d]=%d\n ", i+1,T[i]);
        }
    }
int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    int T[taille];
    remplir(T, taille);
    double_valeur(T, taille);

    return 0;
}
