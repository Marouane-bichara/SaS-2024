#include <stdio.h>

int main()
{
    float kmH;
    printf("Entrez la distance en km/h : ");
    scanf("%f", &kmH);

    float mS = kmH * 0.27778;
    printf("De KM/H a M/S: %.2f", mS);

    return 0;
}