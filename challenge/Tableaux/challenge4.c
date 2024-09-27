#include <stdio.h>

int main()
{
    int size;
    int max;

    printf("Entrez le nombre darticles: ");
    scanf("%d", &size);

    int items[size];

    for (int i = 0; i < size; i++)
    {
        printf("Entrez lelement %d: ", i+1);
        scanf("%d", &items[i]);
    }


        printf("\n");
        printf("________________________");
        printf("\n");
    max = items[0];
    for (int j = 1; j < size; j++)
    {
        if (items[j] > max)
        {
            max = items[j];
        }
    }

    printf("le plus grand element est: %d" , max);
    
    
    return 0;
}