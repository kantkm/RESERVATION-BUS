// Fonction pour v�rifier le solde du syst�me de paiement
void verifierSolde(struct SystemePaiement paiement) {
    printf("Solde actuel en franc du systeme de paiement : %.2f\n", paiement.soldeFRANC);
    printf("Solde actuel en dollars du syst�me de paiement : %.2f\n", paiement.soldeUSD);
}
