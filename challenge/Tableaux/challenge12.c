#include <stdio.h>


int size;
int arr[] = {0};



void AddNum();
void Nombrepai();

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
        printf("2- Afficher les elements Paire\n");
        printf("3- Exit\n");
        printf("Entrez votre choix: ");
        scanf("%d" , &choix);

        switch (choix)
        {
        case 1:
            AddNum();
            break;

        case 2:
            Nombrepai();
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

void Nombrepai()
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {   
            printf("\n");            
            printf("- Le nombre pair  : %d\n" , arr[i]);
        }
    }
    
}