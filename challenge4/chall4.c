#include <stdio.h>

int main() {
    float vikmh;
    float vims;

    printf("Donner la vitesse en km/h : ");
    scanf("%f", &vikmh); 

    vims = vikmh * 0.27778;

    printf("La vitesse que tu as donnee en kilometres par heure est %.2f km/h, ce qui equivaut a %.2f m/s.\n", vikmh, vims);

    return 0;
}
