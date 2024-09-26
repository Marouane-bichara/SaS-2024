#include <stdio.h>

int main() {
    int number;
    int i = 1;
    int resault;

    printf("Entrez un numero: ");
    scanf("%d" , &number);

    while (i <= number)
    {

        resault =   2 * i;
        printf("%d", resault);

        if (number > i)
        {
            printf(", ");
        }
            i++; 
        
    }
    
 
    return 0;
}