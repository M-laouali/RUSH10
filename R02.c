#include <stdio.h>
#include <stdlib.h> // pour utiliser malloc si nécessaire
#include <stdbool.h> // pour le type bool

// ===== Fonction 1 : Calculatrice =====
void calculatrice() {
    float a, b;
    char op;

    printf("\n--- Calculatrice ---\n");
    printf("Entrez une opération (ex: 5 + 3) : ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Résultat : %.2f\n", a + b); break;
        case '-': printf("Résultat : %.2f\n", a - b); break;
        case '*': printf("Résultat : %.2f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Résultat : %.2f\n", a / b);
            else
                printf("Erreur : division par zéro.\n");
            break;
        default:
            printf("Opérateur invalide.\n");
    }
}

// ===== Fonction 2 : Vérification de nombre premier =====
void verifierPremier() {
    int n, i, estPremier = 1;

    printf("\n--- Vérifier un nombre premier ---\n");
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        estPremier = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                estPremier = 0;
                break;
            }
        }
    }

    if (estPremier)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);
}

// ===== Fonction 3 : Suite de Fibonacci =====
void suiteFibonacci() {
    int n, i;
    int a = 0, b = 1, temp;

    printf("\n--- Suite de Fibonacci ---\n");
    printf("Entrez le nombre de termes à générer : ");
    scanf("%d", &n);

    printf("Fibonacci : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

// ===== Fonction 4 : Tri d’un tableau (tri à bulles) =====
void trierTableau() {
    int n, i, j, temp;

    printf("\n--- Tri d'un tableau ---\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// ===== Fonction 5 : Recherche dans un tableau =====
void rechercherElement() {
    int n, i, valeur, trouve = 0;

    printf("\n--- Recherche dans un tableau ---\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l’élément à rechercher : ");
    scanf("%d", &valeur);

    for (i = 0; i < n; i++) {
        if (tableau[i] == valeur) {
            printf("Élément trouvé à la position %d.\n", i);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Élément non trouvé.\n");
    }
}

// ===== Menu principal =====
int main() {
    int choix;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Calculatrice\n");
        printf("2. Vérifier un nombre premier\n");
        printf("3. Générer une suite de Fibonacci\n");
        printf("4. Trier un tableau\n");
        printf("5. Rechercher un élément dans un tableau\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: calculatrice(); break;
            case 2: verifierPremier(); break;
            case 3: suiteFibonacci(); break;
            case 4: trierTableau(); break;
            case 5: rechercherElement(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}
