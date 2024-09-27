#include <stdio.h>

int main()
{
    int size;
    int min;

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
        min = items[0];
    for (int j = 1; j < size; j++)
    {
        if (items[j] < min)
        {
            min = items[j];
        }
    }

    printf("Le nombre le plus bas est: %d" , min);
    
    
    return 0;
}