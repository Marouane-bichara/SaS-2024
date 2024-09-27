#include <stdio.h>

int main()
{
    int size;
    printf("Entrez le nombre darticles: ");
    scanf("%d", &size);

    int items[size];
    int itemsCopy[size];
    for (int i = 0; i < size; i++)
    {
        printf("Entrez lelement %d: ", i+1);
        scanf("%d", &items[i]);
    }

    for (int j = 0; j < size; j++)
    {
        itemsCopy[j] = items[j];
    }
    printf("__________________\n");

    for (int n = 0; n < size; n++)
    {
        printf("Original Iteam %d : %d\n" ,n+1, items[n]);
    }
    printf("__________________\n");
    for (int b = 0; b < size; b++)
    {
        printf("Copy iteam %d : %d\n" ,b+1, itemsCopy[b]);
    }
    
    
    return 0;
    
}