#include <stdio.h>

int main()
{
    int num;
    printf("Entrez un numero : ");
    scanf("%d", &num);

  
    int num2 = 1;

    for (int i = 0; i < num; i++)
    {
        if (num2 <= num)
        {
            if (num2 % 2 != 0)
            {
            printf("%d", num2);
            }

        }
        num2++;
    }
    return 0;
}