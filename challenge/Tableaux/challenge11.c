#include <stdio.h>

int size;
int arr[] = {0};



void AddNum();
void Update();

int main()
{
    int choix;

    printf("Entrez la taille : ");
    scanf("%d" ,&size);
    do
    {
        printf("\n");
        printf("___\n");
        printf("\n");
        printf("1- Ajouter des chiffres\n");
        printf("2- Remplacer un Élément\n");
        printf("3- Exit\n");
        printf("Entrez votre choix: ");
        scanf("%d" , &choix);

        switch (choix)
        {
        case 1:
            AddNum();
            break;

        case 2:
            Update();
            break;
        case 3:
            printf("\n");
            printf("Mrci d'utiliser notre programme");
        }
    } while (choix != 3);

    return 0;
}


void AddNum()
{
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("Entrez le numero %d : " , i + 1);
        scanf("%d", &arr[i]);
    }
}

void Update()
{
    int number;
    int found = 0;
    printf("\n");
    printf("______________\n");
    printf("Entrez le numero: ");
    scanf("%d" , &number);

    for (int i = 0; i < size; i++)
    {
        if (number == arr[i])
        {
            printf("\n");
            printf("______________\n");
            printf("Entrez la nouvelle valeur: ");
            scanf("%d" , &arr[i]);
            printf("La valeur est mise a jour.\n");
            found = 1;
        }        
    }
        if (!found)
    {
        printf("\n");
        printf("______________\n");
        printf("Nombre non trouve");
    }
    
}


