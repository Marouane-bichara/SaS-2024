#include <stdio.h>

int main()
{
    float Celsius;

    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &Celsius);

    float Kelvin = Celsius + 273.15;

    printf("la temperature en kelvin: %.2f", Kelvin);

    return 0;
}