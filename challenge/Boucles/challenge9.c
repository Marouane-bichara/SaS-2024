#include <stdio.h>

int main()
{
    int number;
    printf("Entrez un numero: ");
    scanf("%d", &number);

    int count = 0;

    for (int i = 0; number > 0; i++)
    {
        number = number / 10;
        count++;        
    }
    printf("%d", count);
    
    
}