#include <stdio.h>

void Sum();

int main()
{
    int nombre1 , nombre2;

    printf("Entrez le premier chiffre : ");
    scanf("%d" , &nombre1);
    printf("Entrez le deuxieme numero : ");
    scanf("%d" , &nombre2);

    Sum(nombre1 , nombre2);

    return 0;
}

void Sum(int num1 , int num2)
{
    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1 , num2 , sum);
}