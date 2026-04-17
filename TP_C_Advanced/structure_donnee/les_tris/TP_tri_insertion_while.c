#include <stdio.h>
int i;
void remplir_t(int T[], int n)
    {
      for(i=0;i<n;i++)
      {
          printf("T[%d]= ",i+1);
          scanf("%d",&T[i]);
      }
    }

int main() {
    int n ;
    printf("entre la taille du tableau : ");
    scanf("%d",&n);
    int T[n]; // Déclaration du tableau à trier
    int j, temp;
    remplir_t(T,n);
 n
    // Parcourir le tableau à partir du 2e élément
    for(i = 1; i < n; i++) {
        temp = T[i]; // On garde la valeur actuelle
        j = i - 1;

        // Tant que les éléments avant sont plus grands que temp
        while(j >= 0 && T[j] > temp) {
            T[j + 1] = T[j]; // Décale l’élément vers la droite
            j--;
        }

        T[j + 1] = temp; // Insère la valeur à la bonne position
    }

    // Afficher le tableau trié
    printf("Tableau trié : ");
    for(i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
