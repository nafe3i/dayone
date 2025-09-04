#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, suivant;

    printf("Saisir le nombre de termes de la suite de Fibonacci :\n");
    scanf("%d", &n);

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d\n", a); 
        } else if (i == 1) {
            printf("%d\n", b); 
        } else {
            suivant = a + b;  
            printf("%d\n", suivant);
            a = b;           
            b = suivant;
        }
    }

    return 0;
} 