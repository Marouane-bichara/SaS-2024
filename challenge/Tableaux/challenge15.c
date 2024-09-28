#include <stdio.h>



#define sizeMax 100

int size1 = 0;
int size2 = 0;
int Sum_Size;
int arr1[5];
int arr2[5];
int arr3[5];



void AddNum1();
void AddNum2();
void Tab1_Tab2();

int main()
{
    int choix;

    printf("Entrez la taille Tableaux 1 : ");
    scanf("%d" ,&size1);
    printf("Entrez la taille Tableaux 2 : ");
    scanf("%d" ,&size2);
    do
    {
        printf("\n");
        printf("___\n");
        printf("\n");
        printf("1- Ajouter des chiffres Tableaux 1.\n");
        printf("2- Ajouter des chiffres Tableaux 2.\n");
        printf("3- Fusion de Deux Tableaux.\n");
        printf("4- Exit.\n");
        printf("Entrez votre choix: ");
        scanf("%d" , &choix);

        switch (choix)
        {
        case 1:
            AddNum1();
            break;
        case 2:
            AddNum2();
            break;

        case 3:
            Tab1_Tab2();
            break;
        case 4:
            printf("\n");
            printf("Mrci d'utiliser notre programme");
        }
    } while (choix != 4);

    return 0;
}


void AddNum1()
{
    for (int i = 0; i < size1; i++)
    {
        printf("\n");
        printf("Entrez le numero %d : " , i + 1);
        scanf("%d", &arr1[i]);
    }
}
void AddNum2()
{
    for (int i = 0; i < size2; i++)
    {
        printf("\n");
        printf("Entrez le numero %d : " , i + 1);
        scanf("%d", &arr2[i]);
    }
}

void Tab1_Tab2()
{
    Sum_Size = size1 + size2;

    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int f = size1; f < Sum_Size; f++)
    {
        arr3[f] = arr2[f - size1];
    }
    for (int i = 0; i < Sum_Size; i++)
    {
        printf("%d\n" , arr3[i]);
    }
    
}