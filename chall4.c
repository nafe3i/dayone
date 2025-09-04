#include <stdio.h>

int main() {
    int nombre, inverse = 0, reste;

    printf("Saisir un nombre entier :\n");
    scanf("%d", &nombre);

    printf("Le nombre inverse de %d est : ", nombre);

    while (nombre != 0) {
        reste = nombre % 10;         
        inverse = inverse * 10 + reste; 
        nombre = nombre / 10;        
    }

    printf("%d\n", inverse);

    return 0;
}