#include <stdio.h>

int main() {
    int number;
    int i = 0;
    int resault;

    printf("Entrez un numero: ");
    scanf("%d" , &number);

    while (number > i)
    {
        resault = 2 * i + 1;
        i++;
        printf("%d", resault);
        if (number != i)
        {
            printf(", ");
        }
        
        
    }
    
 
    return 0;
}