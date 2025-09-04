#include <stdio.h>

int main() {
    int n;
    int f = 1; 
    int i;

    printf("Donner le nombre entier positif : \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Le nombre que vous avez entré est inférieur à 0.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("La factorielle de %d est : %d\n", n, f);

    return 0;
}
