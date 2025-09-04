#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j,Prime;

    printf("Saisir un nombre :\n");
    scanf("%d", &n);

    printf("Voici les nombres premiers de 1 a %d :\n", n);

    for (i = 2; i <= n; i++) { 
        Prime = 1; 

        for (j = 2; j <= sqrt(i); j++) { 
            if (i % j == 0) {
                Prime = 0; 
                break; 
            }
        }

        if (Prime) {
            printf("%d\n", i);
        }
    }

    return 0;
}