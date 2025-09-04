#include <stdio.h>
int main (){

    int n , i ;

    printf("donner le nombre \n");
    scanf("%d",&n);

    printf("les nombres paires qu'il donne :\n");
    for ( i = 0 ; i <= n; i++)
    {
        {
            printf("%d\n",2*i);
        }
        
    }

    return 0 ;

}