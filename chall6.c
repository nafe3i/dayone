#include <stdio.h>
#include <math.h>

int main() {
    int nombre, i;

    printf("Saisir un nombre entier positif :\n");
    scanf("%d", &nombre);

    printf("Les facteurs de %d sont :\n", nombre);

    for (i = 1; i <= sqrt(nombre); i++) {
        if (nombre % i == 0) {
            printf("%d\n", i);  
            if (i != nombre / i) {
                printf("%d\n", nombre / i); 
            }
        }
    }

    return 0;
}