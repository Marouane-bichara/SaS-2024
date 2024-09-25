#include <stdio.h>

int main()
{
    char character;
    printf("Entrez un caractere : ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
    {
        if (character >= 'a' && character <= 'z')
        {
            printf("Ce caractere fait partie de l alphabet et il est en minuscules");
        }else if(character >= 'A' && character <= 'Z')
        {
            printf("Ce caractere fait partie de l alphabet et il est en majuscules");
        }
    }else
    {
        printf("Cette entree n est pas un alphabet");
    }
    
    return 0;
}