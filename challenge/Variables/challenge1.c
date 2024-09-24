#include <stdio.h>

int main()
{
    char nome[10];
    char prenome[10];
    int age;
    char sexe[10];
    char AdressEm[30];

    printf("Entrez votre prenom: ");
    scanf("%s", &prenome);
    printf("Entrez votre nom: ");
    scanf("%s", &nome);
    printf("Entrez votre age: ");
    scanf("%d", &age);
    printf("Entrez votre sexe: ");
    scanf("%s", &sexe);
    printf("Entrew votre email adress: ");
    scanf("%s", &AdressEm);

    printf("\n"); 
    printf("============================="); 
    printf("\n");
    printf("Ton prenome est: %s\n", prenome);
    printf("Ton nom est: %s\n", nome);
    printf("Ton age est : %d\n", age);
    printf("Votre sexe : %s\n", sexe);
    printf("Votre adress email : %s\n", AdressEm);

    return 0;
}