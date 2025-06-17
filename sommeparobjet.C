//par Houleymata Ly

float sommeparobjet(struct facture tab[N]){
    int i;
    float si=0;
    float ss=0;
    for(i<0,i<N,i++){
       if(strcmp(tab[i].objet,"inscription")==0){
        si=si+tab[i].montant;
       }
       else if(strcmp(tab[i].objet,"scolarite")==0){
        ss=ss+tab[i].montant;
       }
    }
    printf("somme des inscription:%.2f",si);
    printf("somme des scolarites:%.2f",ss);
    return si,ss;
}