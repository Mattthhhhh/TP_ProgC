#include <stdio.h>

int main() {
    unsigned int d = 0x00108000; // Avec IA

    unsigned int masque4 = 1 << (32 - 4);  
    unsigned int masque20 = 1 << (32 - 20); 

    unsigned int bit4 = (d & masque4) != 0;
    unsigned int bit20 = (d & masque20) != 0;

    int resultat = (bit4 && bit20) ? 1 : 0;
    printf("%d\n", resultat);

    return 0;
}
