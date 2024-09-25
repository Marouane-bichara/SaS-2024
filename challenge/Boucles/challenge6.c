#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);


    printf("le premier %d nombre pair est: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d", 2 * i);
        if (i < n) {
            printf(", ");  
        }
    }
    return 0;
}