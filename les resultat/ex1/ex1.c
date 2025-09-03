#include <stdio.h>
int main(){

    int n;
    int i ;
    printf ("ecrire le nombre que vous voulez multiplier :\n");
    scanf("%d",&n);
    printf ("la table de multiplication est %d: \n ",n );
    
    for (i = 0 ; i<= 10 ; i++){
        printf("%d*%d = %d \n",n ,i ,n*i );
    }
    return 0 ;
}