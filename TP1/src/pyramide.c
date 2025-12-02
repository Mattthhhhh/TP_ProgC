#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j, k;

    for (i = 1; i <= n; i++) {
        // Affichage des espaces pour centrer les nombres
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    printf("La génération de la pyramide est terminée.\n");

    return 0;
}

