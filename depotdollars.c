// Fonction pour effectuer un d�p�t en dollars
void deposerDollars(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en dollars : ");
    scanf("%f", &montant);
    paiement->soldeUSD += montant * 1; // Taux de conversion arbitraire pour l'exemple
    printf("D�p�t de %.2f dollars effectue avec succ�s. Nouveau solde : %.2f\n", montant, paiement->soldeUSD);
}
