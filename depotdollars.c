// Fonction pour effectuer un dépôt en dollars
void deposerDollars(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en dollars : ");
    scanf("%f", &montant);
    paiement->soldeUSD += montant * 1; // Taux de conversion arbitraire pour l'exemple
    printf("Dépôt de %.2f dollars effectue avec succès. Nouveau solde : %.2f\n", montant, paiement->soldeUSD);
}
