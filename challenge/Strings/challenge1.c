#include <stdio.h>

void Display(char text[15])
{
    printf("%s" , text);
}

int main()
{
    char Text[15];
    printf("Entrez une chaine : ");
    scanf("%s" , &Text);
    
    Display(Text);
}