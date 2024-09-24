#include <stdio.h>

int main()
{
    float num1,num2,num3;
    const float ponderation1 = 2.0;
    const float ponderation2 = 3.0;
    const float ponderation3 = 5.0;

    printf("Entrez le premier numero: ");
    scanf("%f", &num1);
    printf("Entrez le deuxieme numero: ");
    scanf("%f", &num2);
    printf("Entrez le troisieme numero: ");
    scanf("%f", &num3);

    float weightedSum = (num1 * ponderation1) + (num2 * ponderation2) + (num3 * ponderation3);
    float totalweight = ponderation1 + ponderation2 + ponderation3;
    float weightedAverge = weightedSum / totalweight;

    printf("La moyenne ponderee est : %.2f", weightedAverge);

    return 0;
}