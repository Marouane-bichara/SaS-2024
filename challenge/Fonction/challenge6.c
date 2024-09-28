#include <stdio.h>


int feb(int num)
{
    if(num <= 1)
    {
        return num;
    }else
    {
        return feb(num-1) + feb(num - 2);
    }
}



int main()
{
    int number;

    printf("Entrez un nombre: ");
    scanf("%d" , &number);

    printf("Fibonacci : %d" , feb(number));
}