#include <stdio.h>

typedef struct
{
    char nom[20];
    char prenome[20];
    int age;    
}info;

info PersonInfo;

int main()
{


    printf("Entrez votre prenom: ");
    scanf("%s" , PersonInfo.prenome);

    printf("Entrez votre nom: ");
    scanf("%s" , PersonInfo.nom);

    printf("Entrez votre age: ");
    scanf("%d" , &PersonInfo.age);

    printf("Votre nom complet est %s %s et votre age est %d." , PersonInfo.nom , PersonInfo.prenome, PersonInfo.age);

    return 0;
}