#include <stdio.h>

void concat(char str1[] , char str2[] , char resault[])
{
    int i = 0 , j = 0;
    while (str1[i])
    {
        resault[i] = str1[i];
        i++;
    }
    while (str2[j])
    {
        resault[i] = str2[j];
        i++;
        j++;
    }
    resault[i] = '\0';
}

int main()
{
    char str1[100] , str2[100] , resault[200];

    printf("Entrez une chaine : ");
    scanf("%s" , &str1);

    printf("Entrez 2 chaine : ");
    scanf("%s" , &str2);

    concat(str1 , str2 , resault);
    printf("%s" , resault);
}