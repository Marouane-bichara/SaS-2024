#include <stdio.h>

int main() {
    int num, power;
    long long resaault = 1; 

    printf("Entrez le numero de base: ");
    scanf("%d", &num);
    printf("entrer l'exposant: ");
    scanf("%d", &power);

    for (int j = 0; j < power; j++) {
        resaault *= num;
    }
    printf("%d eleve a la puissance %d est %lld\n", num, power, resaault);

    return 0;
}
