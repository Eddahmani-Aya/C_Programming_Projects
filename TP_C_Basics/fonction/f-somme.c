#include <stdio.h>

void somme(int *a, int b) {
    *a = *a + b;
}

int main() {
    int a , b ;
    printf("entrez les valeurs de a et b :");
    scanf("%d%d",&a,&b);
    somme(&a, b);

    printf("La somme est : %d\n", a); // Résultat : 8

    return 0;
}
