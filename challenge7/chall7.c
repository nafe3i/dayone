#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);

    d = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("La moyenne ponderee des trois nombres est : %.2f\n", d);

    return 0;
}
