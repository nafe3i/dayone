#include <stdio.h>

int main() {
    int temperature;

    printf("Donner la température de l'eau en Celsius :\n");
    scanf("%d", &temperature);

    if (temperature < 0) {
        printf("Solide (glace)\n");
    } else if (temperature >= 0 && temperature < 100) {
        printf("Liquide (eau)\n");
    } else {
        printf("Gaz (vapeur)\n");
    }

    return 0;
}
