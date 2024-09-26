#include <stdio.h>

int main()
{
    int num;
    int res = 0;
    printf("Entrez un numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d", num);
    }

    
    while (num > 0)
    {
            num--;
            res +=  num;
            if (num == 1)
            {
                printf("%d", res);
            }
            

    }

        
    return 0;
}