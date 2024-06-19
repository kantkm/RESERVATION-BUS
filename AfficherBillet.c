// Fonction pour afficher les détails d'un billet de bus
void afficherBillet(struct BilletBus billet) {
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n ID : %d\n Destination : %s\n Date : %s\n Siege : %d\n Nom : %s\n Telephone : %s\n",
           billet.id, billet.destination, billet.date, billet.siege, billet.nomPassager, billet.telephone);
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
