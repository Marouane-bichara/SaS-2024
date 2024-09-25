#include <stdio.h>

int main() {
    int number;

    printf("Entrez un nombre : ");
    scanf("%d", &number);
    if (number > 0) {
        printf("Le nombre est positif.\n");
    } else if (number < 0) {
        printf("Le nombre est négatif.\n");
    } else {
        printf("Le nombre est zéro.\n");
    }

    return 0;
}