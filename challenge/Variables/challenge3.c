#include <stdio.h>

int main()
{
    float KM;
    printf("Entrer la distance en KM: ");
    scanf("%f", &KM);

    float Yards = KM * 1093.61;

    printf("La distance en yards est: %.2f", Yards);


    return 0;
}