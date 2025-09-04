#include <stdio.h>

int main() {
    int n, i, somme = 0, formule;

    printf("Saisir un nombre entier positif :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }

    formule = n * (n + 1) / 2;

    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);
    printf("Verification avec la formule : %d\n", formule);

    
    if (somme == formule) {
        printf("Les deux résultats correspondent.\n");
    } else {
        printf("Il y a une erreur dans le calcul.\n");
    }

    return 0;
}