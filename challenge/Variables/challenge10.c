#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    float radius , volume;

    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &radius);

    volume = (4/3) * PI * pow(radius, 3);
    
    printf("le volume de la sphere est: " , volume);

    return 0;
}