int main() {
    int compteur = 5; // Taille du triangle (doit être strictement inférieure à 10)

    if (compteur >= 10) {
        printf("Erreur : La valeur de compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
