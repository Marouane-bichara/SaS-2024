#include <stdio.h>





int size;
int arr[] = {0};



void AddNum();
void Averge();

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
        printf("2- Calculer la Moyenne\n");
        printf("3- Exit\n");
        printf("Entrez votre choix: ");
        scanf("%d" , &choix);

        switch (choix)
        {
        case 1:
            AddNum();
            break;

        case 2:
            Averge();
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

void Averge()
{
    int moyeen;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    moyeen = sum / size;

    printf("La Moyenne: %d" , moyeen);
    
}