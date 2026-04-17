#include <stdio.h>
#include <stdlib.h>

// Définition de la structure du nœud
typedef struct Node {
    int data;             // Donnée du nœud
    struct Node* suivant; // Pointeur vers le nœud suivant
} Node;

// Fonction pour créer un nouveau nœud
Node* cree_noeud(int valeur) {
    // Allocation de mémoire pour le nouveau nœud
    Node* nouveau = (Node*)malloc(sizeof(Node));

    // Vérification si l'allocation de mémoire a réussi
    if (nouveau == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        return NULL; // Si l'allocation échoue, retourner NULL
    }

    // Initialiser la donnée du nœud et mettre le pointeur suivant à NULL
    nouveau->data = valeur;
    nouveau->suivant = NULL;

    return nouveau; // Retourner le nœud créé
}
// Fonction pour ajouter un nouveau nœud au début de la liste
Node* ajouter_debut(Node* tete, int valeur) {
    // Nssaybo nœud jdid b cree_noeud
    Node* nouveau = cree_noeud(valeur);

    // Si l’allocation a échoué
    if (nouveau == NULL) {
        return tete; // ma ndir walo, nraj3ou l’ancienne tête
    }

    // Lien : nouveau nœud ywalli l9bel men l’ancien
    nouveau->suivant = tete;

    // Daba nouveau howa l3awd loul (nouvelle tête)
    return nouveau;
}

// ecrire une fonction ajouter au debur qui permet d inserer un nouveau eleøent creer a l aide de la fonction creernoeud au debut de la liste
int main() {
    // Exemple d'utilisation de la fonction
    Node* noeud1 = cree_noeud(10); // Créer un nœud avec la valeur 10
    Node* noeud2 = cree_noeud(20); // Créer un nœud avec la valeur 20

    // Lier les nœuds
    if (noeud1 != NULL) {
        noeud1->suivant = noeud2; // Lier noeud1 à noeud2
    }

    // Afficher les valeurs des nœuds
    if (noeud1 != NULL) {
        printf("Nœud 1: %d\n", noeud1->data);
    }
    if (noeud2 != NULL) {
        printf("Nœud 2: %d\n", noeud2->data);
    }

    // Libération de la mémoire
    free(noeud1);
    free(noeud2);

    return 0;
}
