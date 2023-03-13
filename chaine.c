//
// Created by Administrator on 3/13/2023.
//

#include "chaine.h"

Chaine creerChaine(char *nom){
    Chaine chaine = {.nomChaine = nom, .nombreResto=0};
    return chaine;
}

void ajoutResto(Chaine *chaine, Resto resto){
    chaine->restoChaine = (Resto*) ajout(chaine->restoChaine, chaine->nombreResto);

    *(chaine->restoChaine + chaine->nombreResto) = resto;
    chaine->nombreResto ++;
}

void supprimerResto(Chaine *chaine, Resto resto){
    // alogo 1:
    Resto *listeResto = (Resto *) calloc(--chaine->nombreResto, sizeof(Resto));

    int n = chaine->nombreResto;
    int i=0, j=0;
    while(i !=n){
        Resto r = *(chaine->restoChaine + i);
        if(resto.adresse == r.adresse && resto.nom == r.nom){
            j++;
        }

        *(listeResto+i) = resto;
        i++;
        j++;
    }

    chaine->restoChaine = listeResto;

    //algo 2
    for (int l = 0; l < chaine->nombreResto; ++l) {
        if(chaine->restoChaine[l].nom == resto.nom && chaine->restoChaine[l].adresse == resto.adresse){
            chaine->restoChaine[l] = chaine->restoChaine[l+1];
        }
        chaine->nombreResto--;
        chaine->restoChaine = (Resto *) realloc( chaine->restoChaine,chaine->nombreResto * sizeof (Resto));
    }


}
