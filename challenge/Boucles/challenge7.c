#include <stdio.h>

int main()
{
    int number;
    printf("Entrez un numero: ");
    scanf("%d" , &number);

    int number2 = number;



    for (int i =  0 ; number > 0 ; i = i)
    {
        int n = number % 10;
        printf("%d", n);
        number = number / 10;
    }

    return 0;
}