#include <stdio.h>
#include <math.h>

int main()
{
    float a , b , c ,x1 , x2 , x , delta;
    printf("Entrez le premier numero : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme numero : ");
    scanf("%f", &b);
    printf("Entrez le troisieme numero : ");
    scanf("%f", &c);

    delta = pow(b,2) - (4 * a * c);
    if (delta < 0)
    {
        printf("Pas de solutions reelles");
    }else if (delta == 0)
    {
        x = (-b) / (2 * a);
        printf("La solution est : %.2f", x);
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Les solution sont : %.2f et %.2f ", x1 , x2);
    }    



    return 0;
}