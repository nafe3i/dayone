#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, moyenne_geometrique;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);

    
        printf("Erreur : La moyenne geometrique n'est definie que pour des nombres positifs.\n");
        
    

    double produit = a * b * c;

    moyenne_geometrique = cbrt(produit);

    printf("La moyenne geometrique de %.2f, %.2f et %.2f est : %.6f\n", a, b, c, moyenne_geometrique);

    return 0;
}   