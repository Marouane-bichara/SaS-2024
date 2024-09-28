#include <stdio.h>



int Check(int nbr){

    if ( nbr % 2 == 0)
    {
        return 0;
    }else
    {
        return 1;
    }

}


int main(){

    int nbr, parite;

    printf("Entrez : ");
    scanf("%d", &nbr);

    parite = Check(nbr);


    if (parite)
    {
        printf("Le nombre %d est impaire.\n", nbr);
    }else
    {
        printf("Le nombre %d est paire.\n", nbr);
    }


    return 0;
}