// Fonction pour effectuer un d�p�t en francs
void deposerFrancs(struct SystemePaiement *paiement) {
    float montant;
    printf("Entrez le montant a deposer en francs : ");
    scanf("%f", &montant);
    paiement->soldeFRANC += montant;
    printf("Dep�t de %.2f francs effectue avec succ�s. Nouveau solde : %.2f\n", montant, paiement->soldeFRANC);
}
