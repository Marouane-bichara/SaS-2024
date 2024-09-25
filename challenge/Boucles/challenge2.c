#include <stdio.h>

int main()
{
    int num1;
    int facorial = 1;
    printf("Entrez un numero : ");
    scanf("%d", &num1);

    
    for (int i = 1; i <= num1; i++)
    {
        facorial *= i;
    }
    printf("%d", facorial);
    
    return 0;
}