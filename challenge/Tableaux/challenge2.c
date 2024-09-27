#include <stdio.h>

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


        printf("\n");
        printf("________________________");
        printf("\n");

    for (int j = 0; j < size; j++)
    {
        printf("\n");
        printf("Element %d : %d\n", j+1 , items[j]);
    }
    
    
    return 0;
}