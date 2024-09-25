#include <stdio.h>

int main() {
    int annee, choix;
    const int joursDansAnnee = 365;
    const int joursDansMois = 30;
    const int heuresDansJour = 24;
    const int minutesDansHeure = 60;
    const int secondesDansMinute = 60;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    do {

        printf("\nChoisissez une option :\n");
        printf("\n");
        printf("1. Convertir en Mois\n");
        printf("2. Convertir en Jours\n");
        printf("3. Convertir en Heures\n");
        printf("4. Convertir en Minutes\n");
        printf("5. Convertir en Secondes\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d an(s) = %d mois\n", annee, annee * (joursDansAnnee / joursDansMois));
                break;
            case 2:
                printf("%d an(s) = %d jour(s)\n", annee, annee * joursDansAnnee);
                break;
            case 3:
                printf("%d an(s) = %d heure(s)\n", annee, annee * joursDansAnnee * heuresDansJour);
                break;
            case 4:
                printf("%d an(s) = %d minute(s)\n", annee, annee * joursDansAnnee * heuresDansJour * minutesDansHeure);
                break;
            case 5:
                printf("%d an(s) = %d seconde(s)\n", annee, annee * joursDansAnnee * heuresDansJour * minutesDansHeure * secondesDansMinute);
                break;
            case 6:
                printf("Fermeture du programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 6);

    return 0;
}