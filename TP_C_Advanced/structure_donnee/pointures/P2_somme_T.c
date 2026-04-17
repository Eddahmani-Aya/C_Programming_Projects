
#include <stdio.h>
int i ;
    void remplir(int *T, int taille)
    {
        for ( i = 0; i < taille; i++) {
            printf("T[%d]= ", i + 1);
            scanf("%d", (T + i));
        }


    }

    int somme_T(int *T, int taille)
    {
        int s =0;
        for ( i = 0; i < taille; i++) {
        s =s + *(T + i);
    }
    return s;
    }

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int T[taille];

    remplir(T, taille);

    printf("La somme des elements est : %d\n", somme_T(T, taille));

    return 0;
}
