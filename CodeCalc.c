#include <stdio.h>

// Fonction 1 : Calculatrice
void calculatrice() {
    int choix;
    float a, b, resultat;

    printf("\n--- Calculatrice ---\n");
    printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    if (choix == 1) {
        resultat = a + b;
    } else if (choix == 2) {
        resultat = a - b;
    } else if (choix == 3) {
        resultat = a * b;
    } else if (choix == 4) {
        if (b != 0)
            resultat = a / b;
        else {
            printf("Erreur : division par zéro !\n");
            return;
        }
    } else {
        printf("Choix invalide.\n");
        return;
    }

    printf("Résultat : %.2f\n", resultat);
}

// Fonction 2 : Vérification de nombre premier
void verifierPremier() {
    int n, i, estPremier = 1;

    printf("\n--- Vérification de nombre premier ---\n");
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        estPremier = 0;
    } else {
        for (i = 2; i < n; i++) {
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

// Fonction 3 : Suite arithmétique (simple)
void suiteArithmetique() {
    int u0, r, n, i;

    printf("\n--- Suite arithmétique ---\n");
    printf("Premier terme (u0) : ");
    scanf("%d", &u0);

    printf("Raison (r) : ");
    scanf("%d", &r);

    printf("Nombre de termes à générer : ");
    scanf("%d", &n);

    printf("Suite : ");
    for (i = 0; i < n; i++) {
        printf("%d ", u0 + i * r);
    }
    printf("\n");
}

// Fonction 4 : Tri d’un tableau (tri à bulles)
void triTableau() {
    int tab[100], n, i, j, temp;

    printf("\n--- Tri d'un tableau ---\n");
    printf("Combien d'éléments ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Fonction 5 : Recherche dans un tableau
void rechercheDansTableau() {
    int tab[100], n, i, x, trouve = 0;

    printf("\n--- Recherche dans un tableau ---\n");
    printf("Combien d'éléments ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            printf("Élément trouvé à la position %d\n", i + 1);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Élément non trouvé.\n");
    }
}

// Fonction principale avec menu
int main() {
    int choix;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Calculatrice\n");
        printf("2. Vérifier si un nombre est premier\n");#include <stdio.h>

// Fonction 1 : Calculatrice
void calculatrice() {
    int choix;
    float a, b, resultat;

    printf("\n--- Calculatrice ---\n");
    printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    if (choix == 1) {
        resultat = a + b;
    } else if (choix == 2) {
        resultat = a - b;
    } else if (choix == 3) {
        resultat = a * b;
    } else if (choix == 4) {
        if (b != 0)
            resultat = a / b;
        else {
            printf("Erreur : division par zéro !\n");
            return;
        }
    } else {
        printf("Choix invalide.\n");
        return;
    }

    printf("Résultat : %.2f\n", resultat);
}

// Fonction 2 : Vérification de nombre premier
void verifierPremier() {
    int n, i, estPremier = 1;

    printf("\n--- Vérification de nombre premier ---\n");
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        estPremier = 0;
    } else {
        for (i = 2; i < n; i++) {
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

// Fonction 3 : Suite arithmétique (simple)
void suiteArithmetique() {
    int u0, r, n, i;

    printf("\n--- Suite arithmétique ---\n");
    printf("Premier terme (u0) : ");
    scanf("%d", &u0);

    printf("Raison (r) : ");
    scanf("%d", &r);

    printf("Nombre de termes à générer : ");
    scanf("%d", &n);

    printf("Suite : ");
    for (i = 0; i < n; i++) {
        printf("%d ", u0 + i * r);
    }
    printf("\n");
}

// Fonction 4 : Tri d’un tableau (tri à bulles)
void triTableau() {
    int tab[100], n, i, j, temp;

    printf("\n--- Tri d'un tableau ---\n");
    printf("Combien d'éléments ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Fonction 5 : Recherche dans un tableau
void rechercheDansTableau() {
    int tab[100], n, i, x, trouve = 0;

    printf("\n--- Recherche dans un tableau ---\n");
    printf("Combien d'éléments ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            printf("Élément trouvé à la position %d\n", i + 1);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Élément non trouvé.\n");
    }
}

// Fonction principale avec menu
int main() {
    int choix;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Calculatrice\n");
        printf("2. Vérifier si un nombre est premier\n");
