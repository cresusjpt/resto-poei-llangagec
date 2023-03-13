//
// Created by Administrator on 3/13/2023.
//

#ifndef RESTO_CHAINE_H
#define RESTO_CHAINE_H
#include "chaine.h"
#include "resto.h"
#include "utils.h"
#include <stdlib.h>


typedef struct Chaine Chaine;

struct Chaine{
    char *nomChaine;
    int nombreResto;
    Resto *restoChaine;
};

Chaine creerChaine(char *nom);

void ajoutResto(Chaine *chaine, Resto resto);
void supprimerResto(Chaine *chaine, Resto resto);


#endif //RESTO_CHAINE_H

