float mintab(struct facture tab[N]){
    int i;
    float min=tab[0].montant;
    for(i=0;i<N;i++){
        if(tab[i].montant < min){
            min = tab[i].montant;
        }
    }
    prinf("le montant minimum est : %f\n", min);
    return min;
        
}