#include <stdio.h>

void length(char str[100])
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Longueur de cette chaine est : %d", i);
}

int main()
{
    char text[100];
    printf("Entrez une chaine : ");
    scanf("%[^\n]" , &text);

    length(text);
}