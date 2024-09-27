#include <stdio.h>



void change (int *num1 , int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main()
{

    int size;

    printf("Entrez le nombre darticles: ");
    scanf("%d", &size);

    int items[size];

    for (int i = 0; i < size; i++)
    {
        printf("Entrez lelement %d: ", i+1);
        scanf("%d", &items[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (items[j] > items[j + 1])
            {
                change(&items[j], &items[j+1]);
            }
            
        }
        
    }


    for (int n = 0; n < size; n++)
    {
        printf("%d" , items[n]);
    }
    
    
    
    return 0;
}