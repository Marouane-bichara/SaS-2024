#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    printf("Entrez un numero : ");
    scanf("%d" , &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("%d" , sum);
    return 0;
}