#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2,num3,geometrique;

    printf("Entrez le premier numero: ");
    scanf("%lf", &num1);
    printf("Entrez le deuxieme numero: ");
    scanf("%lf", &num2);
    printf("Entrez le troisieme numero: ");
    scanf("%lf", &num3);

    double MoyenneGeometrique = pow(num1 * num2 * num3 , 1.0 / 3.0);
    printf("La moyenne geometrique de %.2lf et %.2lf et %.2lf est : %.2lf", num1,num2,num3,MoyenneGeometrique);

    return 0;
}