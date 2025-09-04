#include <stdio.h>
int main() {

    int n , i;

    printf("Donner le nombre que vous voulez :\n");
    scanf("%d",&n);

    i=10;
    while (i>0)
    {
      printf("%d*%d=%d\n",n,i,n*i);
      i--;
    }
    
    return 0;
}
