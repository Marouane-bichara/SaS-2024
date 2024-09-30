#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct
{
    char Titre[100];
    char Auteur[100];
    float Prix;
    int Quantite;
}AddBooks;

AddBooks InfoLivre[200];
int count;





void ajouter();
void Sorting();
void Livre_diso();
void Update();
void Recherche();
void Delete();
void CountLivre();



int main()
{
    int choix;


    do
    {
     printf("\n");
     printf("_______________\n");
     printf("\n");
     printf("1-Ajouter un livre au stock.\n");
     printf("2-Afficher tous les livres disponibles.\n");
     printf("3-Rechercher un livre par son titre.\n");
     printf("4-Mettre a jour la quntite d un livre.\n");
     printf("5-Supprimer un livre du stock.\n");
     printf("6-Afficher le nombre total de livres en stcok.\n");
     printf("7-Exit\n");
     printf("Entrez le choix : ");
     scanf("%d", &choix);

     switch (choix)
     {
     case 1:
        ajouter();
        Sorting();
        system("cls");
        break;
     case 2:
        system("cls");
        Livre_diso();
        break;
     case 3:
        system("cls");
        Recherche();
        break;
     case 4:
        system("cls");
        Update();
        break;
     case 5:
        system("cls");
        Delete();
        break;
     case 6:
        system("cls");
        CountLivre();
        break;
     case 7:
        printf("____________________\n");
        printf("                      \n");
        printf("Merci d'utiliser notre programme.");
        break;
     }
    } while (choix != 7);

    return 0;
}


    void ajouter()
    {
            printf("\n");
            printf("____________________\n");
            printf("\n");
            printf("Titre du livre : ");
            scanf("%s" , InfoLivre[count].Titre);
            printf("Auteur du livre : ");
            scanf("%s", InfoLivre[count].Auteur);
            printf("Prix du livre : ");
            scanf("%f" , &InfoLivre[count].Prix);
            printf("Quantite en stock : ");
            scanf("%d" , &InfoLivre[count].Quantite);
            printf("\n");
        count++;
    }

    void Sorting()
    {
        AddBooks temp;
        for (int i = 0; i < count ; i++)
        {
            for (int j = 0; j < count - 1; j++)
            {
                if (strcasecmp(InfoLivre[j].Titre, InfoLivre[j+1].Titre) > 0)
                {
                   temp = InfoLivre[j];
                   InfoLivre[j] = InfoLivre[j + 1];
                   InfoLivre[j + 1] = temp;
                }   
            }  
        }
        
    }

    void Livre_diso()
    {
        printf("\n");
        for (int i = 0; i < count; i++)
        {
            printf("\n");
            printf("____________________\n");
            printf("\n");
            printf("Titre : %s\n" , InfoLivre[i].Titre);
            printf("Auteur : %s\n" , InfoLivre[i].Auteur);
            printf("Prix : %.2f\n" , InfoLivre[i].Prix);
            printf("Quantite : %d\n" , InfoLivre[i].Quantite);
        }
        if(count == 0)
        {
            printf("\n");
            printf("____________________\n");
            printf("\n");
            printf("il n'y a pas de livres");
        }
    }

    void Update()
    {
        char Nome[100];
        int found = 0;
        printf("\n");
        printf("____________________\n");
        printf("\n");
        printf("chercher un livre : ");
        scanf("%s" , Nome);
        for (int i = 0; i < count; i++)
        {
            if (strcasecmp(Nome , InfoLivre[i].Titre) == 0)
            {
                printf("Entrez une nouvelle quantite: ");
                scanf("%d", &InfoLivre[i].Quantite);
                found = 1;
            } 
        }
        if (!found)
        {
            printf("____________________\n");
            printf("                      \n");
            printf("Livre introuvable.");   
        }
    }

    void Recherche()
    {
        char Nome[100];
        int found = 0;
        printf("\n");
        printf("____________________\n");
        printf("\n");
        printf("chercher un livre : ");
        scanf("%s" , Nome);
        for (int i = 0; i < count; i++)
        {
            if (strcasecmp(Nome , InfoLivre[i].Titre) == 0)
            {
                printf("____________________\n");
                printf("                      \n");
                printf("1- Titre du livre : %s\n", InfoLivre[i].Titre);
                printf("2- Auteur du livre : %s\n", InfoLivre[i].Auteur);
                printf("3- Prix : %.2f\n", InfoLivre[i].Prix);
                printf("4- Quantite : %d\n", InfoLivre[i].Quantite);
                printf("____________________\n");
                printf("                      \n");
                found = 1;
            } 
        }
        if (!found)
        {
            printf("____________________\n");
            printf("                      \n");
            printf("Livre introuvable.");
        }
        
    }

    void Delete()
    {
        char Livre[100];
        int found = 0;
        printf("Entrez le nom du livre: ");
        scanf("%s" , Livre);

        for (int i = 0; i < count; i++)
        {
            if (strcasecmp(InfoLivre[i].Titre , Livre) == 0)
            {
                for (int j = i; j < count - 1; j++)
                {
                    InfoLivre[j] = InfoLivre[j + 1];
                }
                    count--;
                printf("____________________\n");
                printf("                      \n");
                printf("supprime avec succes");
                    found = 1;
                    break;
            }
        }
        if (!found)
        {
            printf("____________________\n");
            printf("                      \n");
            printf("Livre introuvable.");
        }
        
    }

    void CountLivre()
    {
        printf("____________________\n");
        printf("                      \n");
        printf("Total des livres disponibles : %d" , count);
    }