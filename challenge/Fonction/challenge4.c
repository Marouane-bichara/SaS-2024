#include <stdio.h>

int Maximum(int num1 , int num2)
{
    if (num1 < num2)
    {
        return num1;
    }else
    {
        return num2;
    }
}


int main()
{
    int nombre1 , nombre2;

    printf("Entrez le premier chiffre : ");
    scanf("%d" , &nombre1);
    printf("Entrez le deuxieme numero : ");
    scanf("%d" , &nombre2);

    printf("%d" , Maximum(nombre1 , nombre2));

    return 0;
}