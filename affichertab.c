//par Aissatou Dia 

void affichertab(struct facture tab[N]){
    int i;
    for(i=0;i<N;i++){
        printf("la liste des factures est:%d %f %s %s",tab[i].numero tab[i].montant tab[i].objet tab[i].idEtudiant);
    }
}
