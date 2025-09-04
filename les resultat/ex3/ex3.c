#include <stdio.h>

int main() {
    int n;
    int f = 0; 
    int i;

    printf("Donner le nombre entier positif : \n");
    scanf("%d", &n);

    

    for (i = 1; i <= n; i++) {
        f = f + i;
    }

    printf("La somme de %d est : %d\n", n, f);

    if (f==(n*(n+1)/2));
    {
        printf("le resultat est vraie");
    }
    

    return 0;
}
