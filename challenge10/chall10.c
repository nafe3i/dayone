#include <stdio.h>
#include <math.h>

int main(){

    float r , v ;
    const float pi = 3.14159;
    printf("donner le rayon de la sphere :\n");
    scanf("%f",&r);
     v = (4/3)* pi *pow(r, 3);

    printf(" le volume d'une sphere est : %.2f\n", v );

    return 0;



}