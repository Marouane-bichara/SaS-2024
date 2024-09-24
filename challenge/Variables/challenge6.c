#include <stdio.h>

int main()
{
    double num1 , num2;

    printf("Entrez deux nombres reels (a & b).\n");
    printf("Entrez le premier numero: ");
    scanf("%lf" , &num1);
    printf("Entrez le deuxieme numero: ");
    scanf("%lf", &num2);

    printf("a + b = %.2lf\n", num1 + num2);
    printf("a - b = %.2lf\n", num1 - num2);
    printf("a * b = %.2lf\n", num1 * num2);
    if (num2 != 0)
    {
        printf("a / b = %.2lf\n", num1 / num2);
    }
    else
    {
        printf("Division par 0 non autorisee!");
    }
    
    return 0;
}