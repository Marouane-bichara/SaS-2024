#include <stdio.h>

int main()
{
    int size;
    int factor;


    printf("Entrez le nombre darticles: ");
    scanf("%d", &size);

    printf("Entrez facteur de multiplication: ");
    scanf("%d", &factor);


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
        printf("%d * %d = %d\n",factor , items[j] , factor * items[j]);
    }
    
    return 0;
}