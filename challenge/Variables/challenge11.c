#include <stdio.h>


int main()
{
    double longueur , largeur , surface;

    printf("entrez la longueur: ");
    scanf("%lf", &longueur);
    printf("entrer en largeur: ");
    scanf("%lf", &largeur);

    surface = longueur * largeur;

    printf("la surface est: %.2lf" , surface);

    return 0;
}