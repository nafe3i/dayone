#include <stdio.h>

int main() {
    int n, i;

    printf("Donner le nombre :\n");
    scanf("%d", &n);

    printf("Les nombres impairs qu'il donne :\n");
    for (i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d\n", 2*i-1); 
        }
    }

    return 0;
}
