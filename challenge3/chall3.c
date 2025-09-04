#include <stdio.h>

int main(){
    float disKM;
    float disYards;

    printf("donner la distance en Km : \n");
    scanf("%f" , &disKM);
    disYards = disKM * 1093.61;
    printf("la distance en killometre est %.2f km est egal a %.2f  en yards \n ",disKM , disYards);

    return 0 ;
}