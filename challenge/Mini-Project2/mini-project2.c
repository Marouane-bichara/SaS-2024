#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char Nome[200];
    char Phone[200];
    char Email[200];
}Contact;

Contact contactInfo[200];
int count;



void ajouter();
void sort();
void Edit();
void Delete();
void AfficherTous();
void Rechercher();

int main()
{
    int choix;

    do
    {
     printf("\n");
     printf("_______________\n");
     printf("\n");
     printf("1-Ajouter un Contact.\n");
     printf("2-Modifier un Contact.\n");
     printf("3-Supprimer un Contact.\n");
     printf("4-Afficher Tous les Contacts.\n");
     printf("5-Rechercher un Contact.\n");
     printf("6-Exit\n");
     printf("Entrez le choix : ");
     scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        ajouter();
        sort();
        system("cls");
        break;
    case 2:
        system("cls");
        Edit();
        break;
    case 3:
        system("cls");
        Delete();
        break;
    case 4:
        system("cls");
        AfficherTous();
        break;
    case 5:
        system("cls");
        Rechercher();
        break;
    case 6:
        printf("____________________\n");
        printf("                      \n");
        printf("Merci d'utiliser notre programme.");
    }

    } while (choix != 6);
    
    return 0;
}

void ajouter()
{
        printf("\n");
        printf("____________________\n");
        printf("\n");
        printf("Le Nom : ");
        scanf("%s" , contactInfo[count].Nome);
        printf("Numero de telephone : ");
        scanf("%s", contactInfo[count].Phone);
        printf("Adresse e-mail : ");
        scanf("%s" , contactInfo[count].Email);
        printf("\n");
        count++;
}

void sort()
{
    Contact temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (strcmp(contactInfo[j].Nome , contactInfo[j + 1].Nome) > 0)
            {
                temp = contactInfo[j];
                contactInfo[j] = contactInfo[j + 1];
                contactInfo[j + 1] = temp;
            }
            
        }
        
    }
    
}

void Edit()
{
    char nome[20];
    int found = 0;
    printf("\n");
    printf("____________________\n");
    printf("\n");
    printf("chercher un Contact : ");
    scanf("%s" , nome);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(nome , contactInfo[i].Nome) == 0)
        {
            printf("Entrez un nouveau numero de contact : ");
            scanf("%s" , contactInfo[i].Phone);
            printf("Entrez une nouvelle adresse e-mail : ");
            scanf("%s" , contactInfo[i].Email);
            found = 1;
        }
    }
    if (!found)
    {
        printf("____________________\n");
        printf("                      \n");
        printf("Contact introuvable.");
    }
}

void Delete()
{
    char nome[100];
    int found = 0;
    printf("Entrez le nom du contact: ");
    scanf("%s" , nome);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contactInfo[i].Nome , nome) == 0)
        {
            for (int j = i; i < count - 1; i++)
            {
                contactInfo[j] = contactInfo[j + 1];
            }
            count--;
            found = 1;
            break;
        }
        
    }
    if (!found)
    {
        printf("____________________\n");
        printf("                      \n");
        printf("Contact introuvable.");
    }
}

void AfficherTous()
{
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        printf("\n");
        printf("____________________\n");
        printf("\n");
        printf("1- Nome : %s\n" , contactInfo[i].Nome);
        printf("2- Adresse e-mail : %s\n" , contactInfo[i].Email);
        printf("3- Numero de telephone : %s\n" , contactInfo[i].Phone);
    }
        if(count == 0)
        {
            printf("\n");
            printf("____________________\n");
            printf("\n");
            printf("Il n'y a pas de contacts");
        }
}

void Rechercher()
{
    char Nome[100];
    int found = 0;
    printf("\n");
    printf("____________________\n");
    printf("\n");
    printf("chercher un contact : ");
    scanf("%s" , &Nome);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(Nome , contactInfo[i].Nome) == 0)
        {
            printf("____________________\n");
            printf("                      \n");
            printf("1- Nome du contact: %s\n" , contactInfo[i].Nome);
            printf("2- Adresse e-mail : %s\n", contactInfo[i].Email);
            printf("2- Numero de telephone : %s\n", contactInfo[i].Email);
            printf("____________________\n");
            printf("                      \n");
            found = 1;
        }
    }
    if (!found)
    {
        printf("____________________\n");
        printf("                      \n");
        printf("Contact introuvable.");
    }
}