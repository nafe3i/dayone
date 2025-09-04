#include <stdio.h>

int main() {
    float a, b;

    
    printf("Entrez le premier nombre reel : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre reel : ");
    scanf("%f", &b);

    
    printf("Resultats des operations :\n");

    printf("Addition : %.2f + %.2f = %.2f\n", a, b, a + b);
    printf("Soustraction : %.2f - %.2f = %.2f\n", a, b, a - b);
    printf("Multiplication : %.2f * %.2f = %.2f\n", a, b, a * b);

    
    if (b != 0) {
        printf("Division : %.2f / %.2f = %.2f\n", a, b, a / b);
    } else {
        printf("Division : Impossible (division par zero)\n");
    }

    return 0;
}
