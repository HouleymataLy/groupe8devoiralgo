//par Houleymata LY

void factureparetudiant(struct facture tab[N]){
    char id[15];
    printf("veuilez saisir idEtudiant");
    scanf("%s",&id);
    for(i=0,i<N,i++){
        if(strcmp(tab[i].idEtudiant)==0){
            printf("la facture de l'etudiant est:%d %f %s",tab[i].numero ,tab[i].montant, tab[i].objet);
        }
    }
}