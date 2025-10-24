#include <stdio.h>

int main() {
    int num1, num2;
    char op;
  
    printf("Entrez la valeur de num1 : ");
    scanf("%d", &num1);
    printf("Entrez la valeur de num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // Notez l'espace avant %c pour éviter les problèmes de buffer

    int resultat;

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat de %d + %d : %d\n", num1, num2, resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("Résultat de %d - %d : %d\n", num1, num2, resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("Résultat de %d * %d : %d\n", num1, num2, resultat);
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat de %d / %d : %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : Division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat de %d %% %d : %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : Modulo par zéro !\n");
            }
            break;
        case '&':
            resultat = num1 & num2;
            printf("Résultat de %d & %d : %d\n", num1, num2, resultat);
            break;
        case '|':
            resultat = num1 | num2;
            printf("Résultat de %d | %d : %d\n", num1, num2, resultat);
            break;
        case '~':
            // L'opérateur ~ est unaire, donc on l'applique uniquement à num1
            resultat = ~num1;
            printf("Résultat de ~%d : %d\n", num1, resultat);
            break;
        default:
            printf("Opérateur non valide !\n");
    }

    return 0;
}


