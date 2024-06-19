// Fonction pour effectuer un dépôt en francs
void deposerFrancs(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en francs : ");
    scanf("%f", &montant);
    paiement->soldeFRANC += montant;
    printf("Depôt de %.2f francs effectue avec succès. Nouveau solde : %.2f\n", montant, paiement->soldeFRANC);
}
