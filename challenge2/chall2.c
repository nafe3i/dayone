#include <stdio.h>

int main() {
    float C;
    float K;
    
    printf("Entrez la temperature en degres Celsius que vous voulez convertir :\n");
    scanf("%f", &C);

    K = C + 273.15;

    printf("La temperature %.2f C equivalant en kelvin %.2f K.\n", C, K);
    
    return 0;
}
