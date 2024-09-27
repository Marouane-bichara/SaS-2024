#include <stdio.h>

int main()
{
    int Arr[] = {1,2,3,4,5};

    int size = sizeof(Arr) / sizeof(Arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", Arr[i]);
    }
    
    return 0;
}