#include <stdio.h>
#include <stdbool.h> 

int main() {
    int a = 16;
    int b = 3;

    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    int quotient = a / b;
    int reste = a % b;

    printf("Addition de %d et %d : %d\n", a, b, somme);
    printf("Soustraction de %d et %d : %d\n", a, b, difference);
    printf("Multiplication de %d et %d : %d\n", a, b, produit);
    printf("Division de %d par %d : %d\n", a, b, quotient);
    printf("Reste de la division de %d par %d : %d\n", a, b, reste);

    bool est_egal = (a == b);
    bool est_superieur = (a > b);

    printf("Est-ce que %d est égal à %d ? %s\n", a, b, est_egal ? "Vrai" : "Faux");
    printf("Est-ce que %d est supérieur à %d ? %s\n", a, b, est_superieur ? "Vrai" : "Faux");

    return 0;
}
