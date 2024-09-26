#include <stdio.h>


int main()
{

    


    int number, binary, hexadecimal;

    printf("Enter a number: ");
    scanf("%d", &number);

    int number_Hexa = number;

    int count = 0;
    int count2 = 0;


    int binaryArray[50];
    int hexaArray[50];


    for (int i = 0; number > 0; i++)
    {

        binaryArray[i] = number % 2;
        number = number / 2;
        
        count++;
    }
    



    printf("To binary: ");
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", binaryArray[i]);
    }
    
    // ----------------


    for (int i = 0; number_Hexa > 0; i++)
    {
        hexaArray[i] =  number_Hexa % 16;

        number_Hexa = number_Hexa / 16;

        count2++;
        
    }
    printf("\n");
    printf("to hexa: ");
    for (int i = count2 - 1; i >= 0; i--)
    {
        if (hexaArray[i] == 10)
        {
            printf("A");
        }
        else if (hexaArray[i] == 11)
        {
            printf("B");
        }
        else if (hexaArray[i] == 12)
        {
            printf("C");
        }
        else if (hexaArray[i] == 13)
        {
            printf("D");
        }
        else if (hexaArray[i] == 14)
        {
            printf("E");
        }
        else if (hexaArray[i] == 15)
        {
            printf("F");
        }else
        {
            printf("%d", hexaArray[i]);
        }
    }
    
    



    return 0;
    
}