#include <stdio.h>
#include <stdlib.h>




int size;
int arr[] = {0};



void AddNum();
void Recherch();

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
        printf("2- Rechercher un numero\n");
        printf("3- Exit\n");
        printf("Entrez votre choix: ");
        scanf("%d" , &choix);

        switch (choix)
        {
        case 1:
            AddNum();
            break;

        case 2:
            Recherch();
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

void Recherch()
{
    int SearchNumber;
    int found = 0;
    printf("Entrez le numero : ");
    scanf("%d" , &SearchNumber);

    for (int i = 0; i <= size ; i++)
    {
        if (SearchNumber == arr[i])
        {
            printf("\n");
            printf("______________\n");
            printf("le chiffre %d est trouve \n", SearchNumber , arr[i]);
            found = 1;
            break;
        }
        
    }

    if (!found)
    {
        printf("\n");
        printf("______________\n");
        printf("Nombre non trouve");
    }
    
}