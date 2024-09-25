#include <stdio.h>

int main()
{
    int num;
    int size = 10;
    printf("Entrez un numero: ");
    scanf("%d" , &num);

    for (int i = 0; i < size; i++)
    {
        printf("%d * %d = %d\n", num , i + 1, num * (i + 1));
    }
    return 0;
}