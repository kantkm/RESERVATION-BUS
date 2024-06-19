// Fonction pour afficher l'historique de toutes les réservations
void afficherHistoriqueReservations(struct BilletBus billets[], int numBillets) {
    printf("Historique de toutes les reservations :\n");
    for (int i = 0; i < numBillets; i++) {
        printf("----------------------------------------------------\n");
        afficherBillet(billets[i]);
    }
    printf("----------------------------------------------------\n");
}
