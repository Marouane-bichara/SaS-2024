#include <stdio.h>

int main()
{
    float temperature;

    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0)
    {
        printf("A %fC l'eau est a l'etat solide", temperature);
    }else if(temperature >= 0 && temperature < 100)
    {
        printf("A %fC l'eau est a l'etat Liquide" , temperature);
    }else
    {
        printf("A %fC l'eau est a l'etat Gaz" , temperature);
    }
    

    return 0;
}