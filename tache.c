#include <stdio.h>
#include <string.h>

#define MAX_TACHE 90

typedef struct {
    char titre[50];
    char description[100];
    char date_echeance[15];
    char priorite[10];
} tache;

tache taches[MAX_TACHE];
int nombre_des_taches = 0;

void ajouterunetache() {
    if (nombre_des_taches < MAX_TACHE) {
        printf("Entrer le titre de la tache : ");
        scanf(" %s", taches[nombre_des_taches].titre);

        printf("Entrer la description de la tache : ");
        scanf(" %s", taches[nombre_des_taches].description);

        printf("Entrer la date d'échéance (jour/mois/année) : ");
        scanf(" %s", taches[nombre_des_taches].date_echeance);

        printf("Entrer la priorite : ");
        scanf(" %s", taches[nombre_des_taches].priorite);

        nombre_des_taches++;

        printf("Tache ajoutée avec succès!\n");
    } else {
        printf("La liste des taches est pleine.\n");
    }
}

void afficherunetache() {
    printf("La liste des taches : \n");
    for (int i = 0; i < nombre_des_taches; i++) {
        printf("\nTache %d:\n", i + 1);
        printf("Titre: %s\n", taches[i].titre);
        printf("Description: %s\n", taches[i].description);
        printf("Date d'échéance: %s\n", taches[i].date_echeance);
        printf("Priorité (High/Low): %s\n", taches[i].priorite);
    }
}

void modifiertache() {
    int ID;
    printf("Entrer l'indice de la tache a changer (1-%d) : ", nombre_des_taches);
    scanf("%d", &ID);
    if (ID > 0 && ID <= nombre_des_taches) {
        ID--;
        printf("Modification de la tache %d\n", ID + 1);

        printf("Entrez la nouvelle description :\n");
        scanf(" %s", taches[ID].description);

        printf("Entrez la nouvelle date d'échéance (jour/mois/année) :\n");
        scanf(" %s", taches[ID].date_echeance);

        printf("Entrez la nouvelle priorité (High/Low) :\n");
        scanf(" %s", taches[ID].priorite);

        printf("Tache ajustée correctement.\n");
    } else {
        printf("Tache introuvable !\n");
    }
}

void supprimertache() {
    int ID;
    printf("Entrer l'indice de la tache à supprimer (1-%d) : ", nombre_des_taches);
    scanf("%d", &ID);

    if (ID > 0 && ID <= nombre_des_taches) {
        ID--;
        for (int i = ID; i < nombre_des_taches - 1; i++) {
            taches[i] = taches[i + 1];
        }
        nombre_des_taches--;
        printf("Tache supprimée correctement.\n");
    } else {
        printf("Tache introuvable.\n");
    }
}

void filtrerparpriorite() {
    char priorite[10];
    printf("Entrez la priorité à filtrer (High/Low) : ");
    scanf(" %s", priorite);

    printf("Liste des taches avec priorité %s :\n", priorite);
    int trouve = 0;
    for (int i = 0; i < nombre_des_taches; i++) {
        if (strcmp(taches[i].priorite, priorite) == 0) {
            printf("\nTache %d:\n", i + 1);
            printf("Titre: %s\n", taches[i].titre);
            printf("Description: %s\n", taches[i].description);
            printf("Date d'échéance: %s\n", taches[i].date_echeance);
            printf("Priorité: %s\n", taches[i].priorite);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("Aucune tache trouvée avec cette priorité.\n");
    }
}

int main() {
    int choix;
    do {
        printf("MENU:\n");
        printf("1. Ajouter une tache\n");
        printf("2. Afficher la liste des taches\n");
        printf("3. Modifier une tache\n");
        printf("4. Supprimer une tache\n");
        printf("5. Filtrer les taches par priorite\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterunetache();
                break;
            case 2:
                afficherunetache();
                break;
            case 3:
                modifiertache();
                break;
            case 4:
                supprimertache();
                break;
            case 5:
                filtrerparpriorite();
                break;
            case 6:
                printf("Nous vous remercions d'avoir utilisé notre application.\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 6);

    return 0;
}
