#include <stdio.h>

int main() {
    int n = 7; 
    int U0 = 0, U1 = 1;
    int Un;

    printf("%d, %d", U0, U1);

    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf(", %d", Un);

        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
