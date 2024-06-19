// Fonction pour vérifier le solde du système de paiement
void verifierSolde(struct SystemePaiement paiement) {
    printf("Solde actuel en franc du systeme de paiement : %.2f\n", paiement.soldeFRANC);
    printf("Solde actuel en dollars du système de paiement : %.2f\n", paiement.soldeUSD);
}
