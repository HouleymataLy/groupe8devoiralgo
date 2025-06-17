//par Haby Diallo

float maxtab(struct facture tab[N]) {
    int i;
    float max = tab[0].montant;
    for (i = 0; i < N; i++) {
        if (tab[i].montant > max) {
            max = tab[i].montant;
        }
    }
    printf("Le montant maximum est : %f\n", max);
    return max;
}