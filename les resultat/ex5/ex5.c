#include <stdio.h>

int main() {
    int b, e, i;
    int r = 1;

    printf("Donner la base : ");
    scanf("%d", &b);

    printf("Donner l'exposant : ");
    scanf("%d", &e);

    if (e < 0) {
        printf("Exposant negatif non pas optionnelle.\n");
        return 1; 
    }
    if(e==0)
    {
        printf("resultat = 1\n");
        return 0 ;
    }
    

    for (i = 0; i < e; i++) {
        r = r*b;
    }

    printf("%d^%d = %d\n", b, e, r);

    return 0;
}
