#include <stdio.h>


void Factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial : %d" , factorial);
}

int main()
{
    int nombre;
    printf("Entrez un numero : ");
    scanf("%d" , &nombre);

    Factorial(nombre);

    return 0;
}


