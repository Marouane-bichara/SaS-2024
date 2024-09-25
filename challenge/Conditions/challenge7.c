#include <stdio.h>


int main()
{
    char character;

    printf("Entrez un caractere : ");
    scanf("%c", &character);

    if (character >= 65 && character <= 90)
    {
        printf("Ce caractere (%c) est en majuscule" , character);
    }else if(character >= 97 && character <= 122)
    {
        printf("Ce caractere (%c) est en minuscules" , character);
    }else
    {
        printf("Cette entree n est pas un alphabet");
    }
    return 0;
}