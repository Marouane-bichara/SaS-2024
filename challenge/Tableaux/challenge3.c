#include <stdio.h>

int main()
{
    int size;
    int sumArr = 0;

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

    for (int n = 0; n < size; n++)
    {
        sumArr +=items[n];
    }
    

   
    printf("\n");
    printf("Somme des elements: %d", sumArr);

    
    
    return 0;
}