#include <stdio.h>

int main()
{
    int valeur1, valeur2;

    printf("Entrez la premiere valeur entiere : ");
    scanf("%d", &valeur1);
    printf("Entrez la deuxieme valeur entiere : ");
    scanf("%d", &valeur2);

     int somme;

    if (valeur1 == valeur2)
    {
        somme = 3 *(valeur1 + valeur2);
        printf("Les valeurs sont identiques. Le triple de leur somme est : %d\n", somme);
    }
    else
    {
        somme = valeur1 + valeur2;
        printf("Les valeurs ne sont pas identiques. La somme est : %d\n", somme);
    }

    return 0;
    
}