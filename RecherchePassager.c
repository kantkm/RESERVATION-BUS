// Fonction pour rechercher un passager par nom et afficher ses réservations
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
