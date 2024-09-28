#include <stdio.h>


#define MAX 100

void ReversString(char string[])
{

    int i = 0;
    int count = 0;
    char temp;
    while (string[i] != '\0')
    {
        count++;
        i++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        temp = string[i];
        string[i] = string[count - i -1];
        string[count -i- 1] = temp;
    }
    printf("%s" , string);
    
}

int main()
{
    char string[MAX];

    printf("Entrez une chaine : ");
    scanf("%s" , string);

    ReversString(string);
}