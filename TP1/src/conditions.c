#include <stdio.h>

int main() {
    int somme = 0; // Variable pour stocker la somme

    for (int nombre = 1; nombre <= 1000; nombre++) {
        // Si le nombre est divisible par 11, on passe au suivant
        if (nombre % 11 == 0) {
            continue;
        }

        if (nombre % 5 == 0 || nombre % 7 == 0) {
            somme += nombre;
        }


        if (somme > 5000) {
            break;
        }
    }

    printf("La somme finale est : %d\n", somme);

    return 0;
}
