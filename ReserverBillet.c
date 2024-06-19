// Fonction pour réserver un billet de bus
void reserverBillet(struct BilletBus billets[], int *numBillets) {
    printf("Reserver un billet de bus :\n\n");
    // Logique de réservation de billet
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


    // Simuler la sélection automatique du siège (par exemple, affectation séquentielle)
    billet.siege = *numBillets + 1;

    billets[*numBillets] = billet;
    (*numBillets)++;

    printf("Billet reserve avec succes. Votre numéro de siege est : %d\n", billet.siege);
}
