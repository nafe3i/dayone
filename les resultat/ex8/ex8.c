#include <stdio.h>

int main() {
    int n;
    int prem = 0, deus = 1, suiv;

    printf("Entrez le nombre de termes à afficher : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                printf("%d ",prem);
            } else if (i == 1) {
                printf("%d ", deus);
            } else {
                suiv = prem + deus;
                prem = deus;
                deus = suiv;
                printf("%d ", suiv);
            }
        }
        printf("\n");
    }

    return 0;
}