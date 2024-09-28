#include <stdio.h>


void Multiplication();

int main()
{
    int nombre1 , nombre2;
    printf("Entrez le premier chiffre : ");
    scanf("%d" , &nombre1);

    printf("Entrez le deuxieme numero : ");
    scanf("%d" , &nombre2);

    Multiplication(nombre1 , nombre2);

    return 0;
}


void Multiplication(int num1 , int num2)
{
    int multiplication = num1 * num2;
    printf("%d * %d = %d" , num1 , num2 ,multiplication);
}