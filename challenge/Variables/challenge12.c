#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;

    printf("Entrez un numero a quatre chiffres : ");
    scanf("%d", &a);

    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    f = e % 10;
    g = e / 10;

    printf("%d" , b);
    printf("%d" , d);
    printf("%d" , f);
    printf("%d" , g);

    
    return 0;
}