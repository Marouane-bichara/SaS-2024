#include <stdio.h>



void change (int *num1 , int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main()
{
    int Arr[] = {1,2,3,4,5};

    int size = sizeof(Arr) / sizeof(Arr[0]);
    int start = 0;
    int end = size-1;



    while (Arr[start] < Arr[end])
    {
        change(&Arr[start] , &Arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", Arr[i]);
    }
    
    
    return 0;

}