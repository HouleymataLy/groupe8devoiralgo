//par Aissatou Dia

void remplirtab(struct facture tab[N]){
    int i;
    for(i=0;i<N;i++){
        printf("saisir numero de la facture");
        scanf("%d"&tab[i].numero);
        printf("saisir montant de la facture");
        scanf("%f"&tab[i].montant),
        printf("saisir objet de la facture");
        scanf("%s"&tab[i].objet);
        printf("saisir l'id de l'etudiant");
        scanf("%s"&tab[i].idEtudiant);

    }
}
