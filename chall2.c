#include <stdio.h>
int main(){

    int i ,j ,n ;
    char c = '*';

    printf("saisir un nombre :\n");
    scanf("%d",&n);

   
    for ( i = 1; i <= n ; i++)
        {
            for ( j = 1; j <= (i * 2 - 1) ; j++)
            {
                
                
                    printf("%c",c);
            }
            printf("\n");
        }
    
    
    
    