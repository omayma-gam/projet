#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  #define MAX_TACHE 90
    typedef struct {
        char titre[50];
        char description[100];
        char date_decheance[15];
        char priorite[15];
    }tache;
    
    
    tache taches[MAX_TACHE];
    int nombre_destaches = 0;
    
    void ajouterunetache(){
          if (nombre_des_taches < MAX_TACHE){
            printf("Entrer le titre de la tache : ");
            scanf("%s",taches[nombre_des_taches].titre);
            
            printf("Entrer la description de la tache : ");
            scanf("%s",taches[nombre_des_taches].description);
            
            printf("Entrer la date d'échéance (jour/mois/année) : ");
            scanf("%s",taches[nombre_des_taches].date_echeance);
            
            printf("Entrer la prioriter : ");
            scanf("%s",taches[nombre_des_tache].prioriter);
            
            nombre_des_taches++;
            
            printf("Tache ajouter avec succès!");
         }else{
            printf("la liste des tache est pleine .");
        }
        }
        void afficherunetache(){
            printf ("la liste des taches : \n")
            for (int i=0 ; i<nombre_des_taches ; i++);
            printf("\n tache %d:\n",i + 1);
            printf("titre: %s\n",taches[i].titre);
            printf("description:%s\n",taches[i].description);
            printf("date d'échéance:%s\n",taches[i].datedecheance);
            printf("priorité:%s\n"taches[i],prioriter);
            
        }
        
    
    
    int main(){
        int choix;
        do{
        printf("MENU:\n");
        printf("1.Ajouter l'atâche : \n");
        printf("2.Afficher la liste des tâches : \n");
        printf("3.Modifier une tâche : \n");
        printf("4.Suprimer une tâche : \n");
        printf("5.Filtrer une tâche : \n");
        printf("6.Abondonner. \n");
        printf("Entrer votre choix : \n");
        scanf("%s",&choix);
        
        switch(choix){
            case 1:
            ajouterunetache();
            break;
            case 2:
            afficherunetache();
            break;
            case 6:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
        while{ (choix!=6)
        
        
 return 0;
    }
   