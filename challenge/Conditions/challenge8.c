#include <stdio.h>

int main()
{
    const float moyenne;
    printf("Entrez la moyenne de votre note : ");
    scanf("%f", &moyenne);

    if (moyenne < 10)
    {
        printf("Votre moyenne est inferieure a 10, vous avez echoue");
    }else if(moyenne >= 10 && moyenne < 12)
    {
        printf("Note passable");
    }
    else if(moyenne >= 12 && moyenne < 14)
    {
        printf("assez bien");
    }else if(moyenne >= 14 && moyenne <= 16)
    {
        printf("bien");
    }else
    {
        printf("Tres bien");
    }  

    return 0;
}