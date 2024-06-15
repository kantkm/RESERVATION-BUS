#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure de donn�es pour un billet de bus
struct BilletBus {
    int id;
    char destination[50];
    char date[20];
    int siege;
    char nomPassager[50];
    char telephone[15];
};

// Structure de donn�es pour le syst�me de paiement
struct SystemePaiement {
    float soldeUSD;
    float soldeFRANC;
    // Autres d�tails sur le syst�me de paiement
};

// Fonction pour rechercher des itin�raires de bus disponibles
void rechercherItineraires() {
    printf("Voici les itineraires disponibles :\n");
    // Logique de recherche d'itin�raires
    // Ici, nous affichons simplement des exemples statiques
    printf("1. lubumbashi - kinshasa\n");
    printf("----------------------------------------------------\n");
    printf("2. lubumbashi - likasi\n");
    printf("----------------------------------------------------\n");
    printf("3. lubumbashi - kipushi\n");
    printf("----------------------------------------------------\n");
    printf("4. lubumbashi - kolwezi\n");
    printf("----------------------------------------------------\n");
    printf("5. lubumbashi - kisangani\n");
    printf("----------------------------------------------------\n");
    printf("6. lubumbashi - goma\n");
    printf("----------------------------------------------------\n");
    printf("7. lubumbashi - kalemi\n");
    printf("----------------------------------------------------\n");
    printf("8. lubumbashi - bukavu\n");
    printf("----------------------------------------------------\n");
    printf("9. lubumbashi - lusaka\n");
    printf("----------------------------------------------------\n");
    printf("10.lubumbashi - nkongolo\n");
    printf("----------------------------------------------------\n");
}

// Fonction pour r�server un billet de bus
void reserverBillet(struct BilletBus billets[], int *numBillets) {
    printf("R�server un billet de bus :\n\n");
    // Logique de r�servation de billet
    struct BilletBus billet;
    billet.id = *numBillets + 1; // ID unique pour chaque billet
    printf("Entrez la destination : ");
    scanf(" %[^\n]s", billet.destination);
    printf("Entrez la date (JJ/MM/AAAA) : ");
    scanf(" %[^\n]s", billet.date);
    printf("Entrez votre nom : ");
    scanf(" %[^\n]s", billet.nomPassager);
    printf("Entrez votre numero de telephone : \n");
    scanf(" %[^\n]s", billet.telephone);

    // Simuler la s�lection automatique du si�ge (par exemple, affectation s�quentielle)
    billet.siege = *numBillets + 1;

    billets[*numBillets] = billet;
    (*numBillets)++;

    printf("Billet reserve avec succes. Votre num�ro de siege est : %d\n", billet.siege);
}

// Fonction pour afficher les d�tails d'un billet de bus
void afficherBillet(struct BilletBus billet) {
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n ID : %d\n Destination : %s\n Date : %s\n Si�ge : %d\n Nom : %s\n T�l�phone : %s\n",
           billet.id, billet.destination, billet.date, billet.siege, billet.nomPassager, billet.telephone);
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}

// Fonction pour afficher l'historique de toutes les r�servations
void afficherHistoriqueReservations(struct BilletBus billets[], int numBillets) {
    printf("Historique de toutes les reservations :\n");
    for (int i = 0; i < numBillets; i++) {
        printf("----------------------------------------------------\n");
        afficherBillet(billets[i]);
    }
    printf("----------------------------------------------------\n");
}


// Fonction pour rechercher un passager par nom et afficher ses r�servations
void rechercherPassager(struct BilletBus billets[], int numBillets, char *nom) {
    printf("Resultats de la recherche pour '%s' :\n", nom);
    int found = 0;
    for (int i = 0; i < numBillets; i++) {
        if (strcmp(billets[i].nomPassager, nom) == 0) {
            afficherBillet(billets[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Aucune reservation trouvee pour ce passager.\n");
    }
}

// Fonction pour effectuer un d�p�t en francs
void deposerFrancs(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en francs : ");
    scanf("%f", &montant);
    paiement->soldeFRANC += montant;
    printf("Dep�t de %.2f francs effectue avec succ�s. Nouveau solde : %.2f\n", montant, paiement->soldeFRANC);
}

// Fonction pour effectuer un d�p�t en dollars
void deposerDollars(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en dollars : ");
    scanf("%f", &montant);
    paiement->soldeUSD += montant * 1; // Taux de conversion arbitraire pour l'exemple
    printf("D�p�t de %.2f dollars effectue avec succ�s. Nouveau solde : %.2f\n", montant, paiement->soldeUSD);
}

// Fonction pour v�rifier le solde du syst�me de paiement
void verifierSolde(struct SystemePaiement paiement) {
    printf("Solde actuel en franc du systeme de paiement : %.2f\n", paiement.soldeFRANC);
    printf("Solde actuel en dollars du syst�me de paiement : %.2f\n", paiement.soldeUSD);
}


int main() {
    struct BilletBus billets[100]; // Capacit� de 100 billets de bus
    int numBillets = 0;

    struct SystemePaiement paiement;
    paiement.soldeFRANC = 0 ; // Solde initial du syst�me de paiement
    paiement.soldeUSD = 0 ;

    int choix;
        printf("\n***BIENVENU SUR NOTRE SYSTEME DE RESERVATION DE BILLETS DE BUS***\n");
        printf("======================================================================\n");
    do {
        printf("\nMenu :\n");
        printf("1. Rechercher des itin�raires de bus disponibles\n");
        printf("2. Reserver un billet de bus\n");
        printf("3. Afficher l'historique des reservations\n");
        printf("4. Rechercher un passager par son nom\n");
        printf("5. Deposer en francs\n");
        printf("6. Deposer en dollars\n");
        printf("7. Verifier le solde\n");
        printf("8. Quitter\n\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                rechercherItineraires();
                break;
            case 2:
                reserverBillet(billets, &numBillets);
                break;
            case 3:
                afficherHistoriqueReservations(billets, numBillets);
                break;
            case 4: {
                char nom[50];
                printf("Entrez le nom du passager : ");
                scanf(" %[^\n]s", nom);
                rechercherPassager(billets, numBillets, nom);
                break;
            }
            case 5:
                deposerFrancs(&paiement);
                break;
            case 6:
                deposerDollars(&paiement);
                break;
            case 7:
                verifierSolde(paiement);
                break;
            case 8:
                printf("Merci d'avoir utilise notre syst�me de reservation de bus.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
        }
    } while (choix != 8);

    return 0;
}
